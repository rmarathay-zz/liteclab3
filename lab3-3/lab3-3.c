/*
Names: Ranjit Marathay, Jackie Sortor, Morgan Doyle
Section: 1B
Lab: Lab 3-3
Description: Smart car steering and motor speed
*/

#include <c8051_SDCC.h>
#include <stdio.h>
#include <stdlib.h>
#include <i2c.h>
//-----------------------------------------------------------------------------
// Function Prototypes
//-----------------------------------------------------------------------------
void Port_Init(void);
void PCA_Init (void);
void XBR0_Init();
unsigned int ReadCompass(void);
unsigned int ReadRanger(void);
void PCA_ISR ( void ) __interrupt 9;
void SMB_Init( void );
void startPing(void);
void wait(void);
void AdjustSteering(void);
void AdjustSpeed(void);
//-----------------------------------------------------------------------------
// Global Variables
//-----------------------------------------------------------------------------

unsigned int h_count;
unsigned int new_heading;
unsigned int actual_heading;
int heading_;
int desired_heading = 900;
int error;
unsigned char gain = 1;
unsigned int temp_servo_pw;

unsigned int r_count;
unsigned int new_range;
unsigned int range_;
unsigned int range;

unsigned int PW_CENTER = 2769;
unsigned int PW_MIN_m = 2027;
unsigned int PW_MAX_m = 3502;
unsigned int PW_m;

unsigned int PW_CENTER_s = 2769;
unsigned int PW_MIN_s = 1661;
unsigned int PW_MAX_s = 3877;
unsigned int PW_s;

unsigned char addr;
unsigned char Data[2];

int Counts = 0;

__sbit __at 0xB7 SS;

//-----------------------------------------------------------------------------
// Main Function
//-----------------------------------------------------------------------------
void main(void){
    // initialize board
    Sys_Init();
    putchar(' '); //the quotes in this line may not format correctly
    Port_Init();
    XBR0_Init();
    PCA_Init();
    SMB_Init();

    //print beginning message
    printf("\rEmbedded Control Steering Calibration & Motor Control\n");
    printf("\rPut the slide switch in the \"on\" position\n");
    // set the PCA output to a neutral setting
    PW_s = PW_CENTER;
    PW_m = PW_CENTER;
    // PCA0CP2 = 0xFFFF - PW_m;
    // PCA0CP0 = 0xFFFF - PW_s;
    PCA0CP2 = PW_CENTER;
    PCA0CP0 = PW_CENTER;
    Counts = 0;
    while(Counts < 50){}

    while(1){
      if(SS){
        if(new_heading){
          new_heading = 0;
          actual_heading = Read_Compass();
          error = desired_heading - actual_heading;
          printf("\ractual_heading: %d\n", actual_heading);
          printf("\rdesired_heading: %d\n", desired_heading);
          printf("\rerror: %d\n", error);
        }
        if(new_range){
          new_range = 0;
          range_ = ReadRanger();
          //printf("range_: %d", range_);
        }

        AdjustSpeed();
        AdjustSteering();

        printf("\rPW_s: %d\n", PW_s);

        //PCA0CP0 = 0xFFFF - PW_s;  //SERVO
        PCA0CP2 = 0xFFFF - PW_m;  //MOTOR
      }
      else{
        PCA0CP2 = PW_CENTER;
        PCA0CP0 = PW_CENTER;
      }
      //printf("\rPW_s: %d\tHeading: %d\n", PW_s, heading_);
      //printf("\rPW_m: %d\tRange: %d\n", PW_m, range_);
    }
}

//
// Set up ports for input and output
//
void Port_Init(){
  P1MDOUT |= 0x01;
  P1MDOUT |= 0x04;
}

//
// Set up the crossbar
//
void XBR0_Init(){
  XBR0 = 0x27;  //configure crossbar as directed in the laboratory
  //Pin 12
}

//
// Set up Programmable Counter Array
//
void PCA_Init(void){
  PCA0CN |= 0x40;    /* Enable PCA counter */
  PCA0MD = 0x81;     /* SYSCLK/12, enable CF interrupts, suspend when idle */
  PCA0CPM0 = 0xC2;   /* CCM0 in 16-bit compare mode */
  PCA0CPM2 = 0XC2;
  EIE1 |= 0x08;
  EA = 1;
}

void SMB_Init(void){
  SMB0CR = 0x93;
  ENSMB = 1;
}

// Interrupt Service Routine for Programmable Counter Array Overflow Interrupt
//
void PCA_ISR ( void ) __interrupt 9{
    // reference to the sample code in Example 4.5 -Pulse Width Modulation
    // implemented using the PCA (Programmable Counter Array), p. 50 in Lab Manual.
    if(CF){
      CF = 0;
      h_count++;
      r_count++;
      if(h_count >= 3){
        new_heading = 1;
        h_count = 0;
      }
      if(r_count >= 4){
        new_range = 1;
        r_count = 0;
      }
      PCA0 = 28614;
    }
    Counts++;
    PCA0CN &= 0xC0; //Handle other PCA interrupt sources
}

void wait(void){
	Counts = 0;
	PCA0CP2 = 0xFFFF - PW_CENTER;
	while(Counts*65536 < 147456); 		//wait 80 ms
}

unsigned int ReadCompass(){
  addr = 0xC0; // the address of the sensor, 0xC0 for the compass
  heading_ = 0;
  i2c_read_data(addr, 2, Data, 2);  // read two byte, starting at reg 2
  heading_ =(((unsigned int)Data[0] << 8) | Data[1]);  //combine the two values
  printf("in READCOMPASS heading_: %d\n", heading_);
  return heading_;             // the heading returned in degrees between 0 and 359
}

unsigned int ReadRanger(){
  unsigned char Data[2];
  unsigned int range = 0;
  unsigned char addr = 0xE0; // the address of the ranger is 0xE0 i2c_read_data(addr, __, Data, _); / / read two bytes, starting at reg 2 range = (((unsigned int)Data[0] << 8) | Data[1]);
  i2c_read_data(addr, 2, Data, 2); // read two bytes, starting at reg 2
  range = (((unsigned int)Data[0] << 8) | Data[1]);
  Data[0] = 0x51;
  i2c_write_data(addr, 0, Data, 1);
  return range;
}


void AdjustSpeed(void){
  if(range_ < 10){
    PW_m = PW_MAX_m;
  }
  else if(range_ >= 40 && range_ <= 50){
    PW_m = PW_CENTER;
  }
  else if(range_ > 90){
    PW_m = PW_MIN_m;
  }
  PW_m = PW_MAX_m - 18 * range_;
  printf("\rAdjust Speed: %d\n", PW_m);
}

void AdjustSteering(void){
  if (error > 1800){
    error = error - 3600;
  }
  else if (error < -1800){
    error = error + 3600;
  }
  printf("\rAdjustSteering error: %d\n", error);
  temp_servo_pw = gain * (error) + PW_CENTER_s;
  //printf("temp_servo_pw: %d", temp_servo_pw);
  PW_s = temp_servo_pw;

  if(PW_s > PW_MAX_s){
    PW_s = PW_MAX_s;
  }

  if(PW_s < PW_MIN_s){
    PW_s = PW_MIN_s;
  }
  PCA0CP0 = 0xFFFF - PW_s;  //SERVO
  printf("\rAdjust Steering: %d\n", PW_s);
}
