/* Sample code for speed control using PWM. */
#include <c8051_SDCC.h>
#include <stdio.h>
#include <stdlib.h>


//
//-----------------------------------------------------------------------------
// 8051 Initialization Functions
//
//-----------------------------------------------------------------------------
void Port_Init(void);
void PCA_Init (void);
void PCA_ISR ( void )__interrupt 9;
void XBR0_Init(void);
void Drive_Motor(void);
unsigned int MOTOR_PW;
int count = 0;
unsigned int PW_MIN = 2025;
unsigned int PW_MAX = 3498;
unsigned int PW_NEUT = 2762;

//
//-------------------------------------------------------
//----------------------
// Main Function
//
//-----------------------------------------------------------------------------
void main(void)
{
	// initialize board
	Sys_Init();
	putchar(' '); //the quotes in this line may not format correctly
	Port_Init();
	XBR0_Init();
	PCA_Init();

	//print beginning message
	printf("Embedded Control Drive Motor Control\r\n");//set initial value
	MOTOR_PW = PW_NEUT;
	//add code to set the servo motor in neutral for one second

	count = 0;
		while (count < 50);
		count = 0;

	while(1)
		Drive_Motor();
}

//-----------------------------------------------------------------------------
// Drive_Motor
//
//-----------------------------------------------------------------------------
//
// Vary the pulsewidth based on the user input to change the speed
// of the drive motor.
//
void Drive_Motor()
{
	char input;
	//wait for a key to be pressed

	input = getchar();
	if(input == 'f') //if 'f' is pressed by the user
	{
		if(MOTOR_PW < PW_MAX)
			MOTOR_PW = MOTOR_PW + 10; //increase the steering pulsewidth by 10

	}
	else if(input == 's') //if 's' is pressed by the user
	{
		if(MOTOR_PW > PW_MIN)
			MOTOR_PW = MOTOR_PW - 10; //decrease the steering pulsewidth by 10
	}
	PCA0CP2 = 0xFFFF - MOTOR_PW;


}

//-----------------------------------------------------------------------------
// Port_Init
//
//-----------------------------------------------------------------------------
//
// Set up ports for input and output
//
void Port_Init()
{
	P1MDOUT |= 0x10;	//set output pin for CEX2 in push-pull mode
}

//-----------------------------------------------------------------------------
// XBR0_Init
//
//-----------------------------------------------------------------------------
//
// Set up the crossbar
//
void XBR0_Init()
{
	XBR0 = 0x27; 			//configure crossbar with UART, SPI, SMBus, and CEX channels as
							// in worksheet
}

//-----------------------------------------------------------------------------
// PCA_Init
//
//-----------------------------------
//------------------------------------------
//
// Set up Programmable Counter Array
//
void PCA_Init(void)
{
	PCA0MD = 0x81;
	PCA0CPM2 = 0xC2;
	PCA0CN = 0x40;
	EIE1 |= 0x08;
	EA = 1;
}
//
//-----------------------------------------------------------------------------
// PCA_ISR
//
//-----------------------------------------------------------------------------
//
// Interrupt Service Routine for Programmable Counter Array Overflow Interrupt
//
void PCA_ISR ( void) __interrupt 9
{
	if (CF)
	{
		count++;
		CF = 0;

		PCA0 = 0xFFFF - 36818;
	}

	PCA0CN &= 0xC0;
}
