                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module lab3_3
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _read_keypad
                                     13 	.globl _strlen
                                     14 	.globl _putchar
                                     15 	.globl _vsprintf
                                     16 	.globl _printf
                                     17 	.globl _getchar_nw
                                     18 	.globl _Sys_Init
                                     19 	.globl _UART0_Init
                                     20 	.globl _SYSCLK_Init
                                     21 	.globl _SS
                                     22 	.globl _BUS_SCL
                                     23 	.globl _BUS_TOE
                                     24 	.globl _BUS_FTE
                                     25 	.globl _BUS_AA
                                     26 	.globl _BUS_INT
                                     27 	.globl _BUS_STOP
                                     28 	.globl _BUS_START
                                     29 	.globl _BUS_EN
                                     30 	.globl _BUS_BUSY
                                     31 	.globl _SPIF
                                     32 	.globl _WCOL
                                     33 	.globl _MODF
                                     34 	.globl _RXOVRN
                                     35 	.globl _TXBSY
                                     36 	.globl _SLVSEL
                                     37 	.globl _MSTEN
                                     38 	.globl _SPIEN
                                     39 	.globl _AD0EN
                                     40 	.globl _ADCEN
                                     41 	.globl _AD0TM
                                     42 	.globl _ADCTM
                                     43 	.globl _AD0INT
                                     44 	.globl _ADCINT
                                     45 	.globl _AD0BUSY
                                     46 	.globl _ADBUSY
                                     47 	.globl _AD0CM1
                                     48 	.globl _ADSTM1
                                     49 	.globl _AD0CM0
                                     50 	.globl _ADSTM0
                                     51 	.globl _AD0WINT
                                     52 	.globl _ADWINT
                                     53 	.globl _AD0LJST
                                     54 	.globl _ADLJST
                                     55 	.globl _CF
                                     56 	.globl _CR
                                     57 	.globl _CCF4
                                     58 	.globl _CCF3
                                     59 	.globl _CCF2
                                     60 	.globl _CCF1
                                     61 	.globl _CCF0
                                     62 	.globl _CY
                                     63 	.globl _AC
                                     64 	.globl _F0
                                     65 	.globl _RS1
                                     66 	.globl _RS0
                                     67 	.globl _OV
                                     68 	.globl _F1
                                     69 	.globl _P
                                     70 	.globl _TF2
                                     71 	.globl _EXF2
                                     72 	.globl _RCLK
                                     73 	.globl _TCLK
                                     74 	.globl _EXEN2
                                     75 	.globl _TR2
                                     76 	.globl _CT2
                                     77 	.globl _CPRL2
                                     78 	.globl _BUSY
                                     79 	.globl _ENSMB
                                     80 	.globl _STA
                                     81 	.globl _STO
                                     82 	.globl _SI
                                     83 	.globl _AA
                                     84 	.globl _SMBFTE
                                     85 	.globl _SMBTOE
                                     86 	.globl _PT2
                                     87 	.globl _PS
                                     88 	.globl _PS0
                                     89 	.globl _PT1
                                     90 	.globl _PX1
                                     91 	.globl _PT0
                                     92 	.globl _PX0
                                     93 	.globl _P3_7
                                     94 	.globl _P3_6
                                     95 	.globl _P3_5
                                     96 	.globl _P3_4
                                     97 	.globl _P3_3
                                     98 	.globl _P3_2
                                     99 	.globl _P3_1
                                    100 	.globl _P3_0
                                    101 	.globl _EA
                                    102 	.globl _ET2
                                    103 	.globl _ES
                                    104 	.globl _ES0
                                    105 	.globl _ET1
                                    106 	.globl _EX1
                                    107 	.globl _ET0
                                    108 	.globl _EX0
                                    109 	.globl _P2_7
                                    110 	.globl _P2_6
                                    111 	.globl _P2_5
                                    112 	.globl _P2_4
                                    113 	.globl _P2_3
                                    114 	.globl _P2_2
                                    115 	.globl _P2_1
                                    116 	.globl _P2_0
                                    117 	.globl _S0MODE
                                    118 	.globl _SM00
                                    119 	.globl _SM0
                                    120 	.globl _SM10
                                    121 	.globl _SM1
                                    122 	.globl _MCE0
                                    123 	.globl _SM20
                                    124 	.globl _SM2
                                    125 	.globl _REN0
                                    126 	.globl _REN
                                    127 	.globl _TB80
                                    128 	.globl _TB8
                                    129 	.globl _RB80
                                    130 	.globl _RB8
                                    131 	.globl _TI0
                                    132 	.globl _TI
                                    133 	.globl _RI0
                                    134 	.globl _RI
                                    135 	.globl _P1_7
                                    136 	.globl _P1_6
                                    137 	.globl _P1_5
                                    138 	.globl _P1_4
                                    139 	.globl _P1_3
                                    140 	.globl _P1_2
                                    141 	.globl _P1_1
                                    142 	.globl _P1_0
                                    143 	.globl _TF1
                                    144 	.globl _TR1
                                    145 	.globl _TF0
                                    146 	.globl _TR0
                                    147 	.globl _IE1
                                    148 	.globl _IT1
                                    149 	.globl _IE0
                                    150 	.globl _IT0
                                    151 	.globl _P0_7
                                    152 	.globl _P0_6
                                    153 	.globl _P0_5
                                    154 	.globl _P0_4
                                    155 	.globl _P0_3
                                    156 	.globl _P0_2
                                    157 	.globl _P0_1
                                    158 	.globl _P0_0
                                    159 	.globl _PCA0CP4
                                    160 	.globl _PCA0CP3
                                    161 	.globl _PCA0CP2
                                    162 	.globl _PCA0CP1
                                    163 	.globl _PCA0CP0
                                    164 	.globl _PCA0
                                    165 	.globl _DAC1
                                    166 	.globl _DAC0
                                    167 	.globl _ADC0LT
                                    168 	.globl _ADC0GT
                                    169 	.globl _ADC0
                                    170 	.globl _RCAP4
                                    171 	.globl _TMR4
                                    172 	.globl _TMR3RL
                                    173 	.globl _TMR3
                                    174 	.globl _RCAP2
                                    175 	.globl _TMR2
                                    176 	.globl _TMR1
                                    177 	.globl _TMR0
                                    178 	.globl _WDTCN
                                    179 	.globl _PCA0CPH4
                                    180 	.globl _PCA0CPH3
                                    181 	.globl _PCA0CPH2
                                    182 	.globl _PCA0CPH1
                                    183 	.globl _PCA0CPH0
                                    184 	.globl _PCA0H
                                    185 	.globl _SPI0CN
                                    186 	.globl _EIP2
                                    187 	.globl _EIP1
                                    188 	.globl _TH4
                                    189 	.globl _TL4
                                    190 	.globl _SADDR1
                                    191 	.globl _SBUF1
                                    192 	.globl _SCON1
                                    193 	.globl _B
                                    194 	.globl _RSTSRC
                                    195 	.globl _PCA0CPL4
                                    196 	.globl _PCA0CPL3
                                    197 	.globl _PCA0CPL2
                                    198 	.globl _PCA0CPL1
                                    199 	.globl _PCA0CPL0
                                    200 	.globl _PCA0L
                                    201 	.globl _ADC0CN
                                    202 	.globl _EIE2
                                    203 	.globl _EIE1
                                    204 	.globl _RCAP4H
                                    205 	.globl _RCAP4L
                                    206 	.globl _XBR2
                                    207 	.globl _XBR1
                                    208 	.globl _XBR0
                                    209 	.globl _ACC
                                    210 	.globl _PCA0CPM4
                                    211 	.globl _PCA0CPM3
                                    212 	.globl _PCA0CPM2
                                    213 	.globl _PCA0CPM1
                                    214 	.globl _PCA0CPM0
                                    215 	.globl _PCA0MD
                                    216 	.globl _PCA0CN
                                    217 	.globl _DAC1CN
                                    218 	.globl _DAC1H
                                    219 	.globl _DAC1L
                                    220 	.globl _DAC0CN
                                    221 	.globl _DAC0H
                                    222 	.globl _DAC0L
                                    223 	.globl _REF0CN
                                    224 	.globl _PSW
                                    225 	.globl _SMB0CR
                                    226 	.globl _TH2
                                    227 	.globl _TL2
                                    228 	.globl _RCAP2H
                                    229 	.globl _RCAP2L
                                    230 	.globl _T4CON
                                    231 	.globl _T2CON
                                    232 	.globl _ADC0LTH
                                    233 	.globl _ADC0LTL
                                    234 	.globl _ADC0GTH
                                    235 	.globl _ADC0GTL
                                    236 	.globl _SMB0ADR
                                    237 	.globl _SMB0DAT
                                    238 	.globl _SMB0STA
                                    239 	.globl _SMB0CN
                                    240 	.globl _ADC0H
                                    241 	.globl _ADC0L
                                    242 	.globl _P1MDIN
                                    243 	.globl _ADC0CF
                                    244 	.globl _AMX0SL
                                    245 	.globl _AMX0CF
                                    246 	.globl _SADEN0
                                    247 	.globl _IP
                                    248 	.globl _FLACL
                                    249 	.globl _FLSCL
                                    250 	.globl _P74OUT
                                    251 	.globl _OSCICN
                                    252 	.globl _OSCXCN
                                    253 	.globl _P3
                                    254 	.globl __XPAGE
                                    255 	.globl _EMI0CN
                                    256 	.globl _SADEN1
                                    257 	.globl _P3IF
                                    258 	.globl _AMX1SL
                                    259 	.globl _ADC1CF
                                    260 	.globl _ADC1CN
                                    261 	.globl _SADDR0
                                    262 	.globl _IE
                                    263 	.globl _P3MDOUT
                                    264 	.globl _PRT3CF
                                    265 	.globl _P2MDOUT
                                    266 	.globl _PRT2CF
                                    267 	.globl _P1MDOUT
                                    268 	.globl _PRT1CF
                                    269 	.globl _P0MDOUT
                                    270 	.globl _PRT0CF
                                    271 	.globl _EMI0CF
                                    272 	.globl _EMI0TC
                                    273 	.globl _P2
                                    274 	.globl _CPT1CN
                                    275 	.globl _CPT0CN
                                    276 	.globl _SPI0CKR
                                    277 	.globl _ADC1
                                    278 	.globl _SPI0DAT
                                    279 	.globl _SPI0CFG
                                    280 	.globl _SBUF0
                                    281 	.globl _SBUF
                                    282 	.globl _SCON0
                                    283 	.globl _SCON
                                    284 	.globl _P7
                                    285 	.globl _TMR3H
                                    286 	.globl _TMR3L
                                    287 	.globl _TMR3RLH
                                    288 	.globl _TMR3RLL
                                    289 	.globl _TMR3CN
                                    290 	.globl _P1
                                    291 	.globl _PSCTL
                                    292 	.globl _CKCON
                                    293 	.globl _TH1
                                    294 	.globl _TH0
                                    295 	.globl _TL1
                                    296 	.globl _TL0
                                    297 	.globl _TMOD
                                    298 	.globl _TCON
                                    299 	.globl _PCON
                                    300 	.globl _P6
                                    301 	.globl _P5
                                    302 	.globl _P4
                                    303 	.globl _DPH
                                    304 	.globl _DPL
                                    305 	.globl _SP
                                    306 	.globl _P0
                                    307 	.globl _Counts
                                    308 	.globl _Data
                                    309 	.globl _addr
                                    310 	.globl _PW_s
                                    311 	.globl _PW_MAX_s
                                    312 	.globl _PW_MIN_s
                                    313 	.globl _PW_CENTER_s
                                    314 	.globl _PW_m
                                    315 	.globl _PW_MAX_m
                                    316 	.globl _PW_MIN_m
                                    317 	.globl _PW_CENTER
                                    318 	.globl _range
                                    319 	.globl _range_
                                    320 	.globl _new_range
                                    321 	.globl _r_count
                                    322 	.globl _temp_servo_pw
                                    323 	.globl _gain
                                    324 	.globl _error
                                    325 	.globl _desired_heading
                                    326 	.globl _heading_
                                    327 	.globl _heading
                                    328 	.globl _new_heading
                                    329 	.globl _h_count
                                    330 	.globl _i2c_read_data_PARM_4
                                    331 	.globl _i2c_read_data_PARM_3
                                    332 	.globl _i2c_read_data_PARM_2
                                    333 	.globl _i2c_write_data_PARM_4
                                    334 	.globl _i2c_write_data_PARM_3
                                    335 	.globl _i2c_write_data_PARM_2
                                    336 	.globl _aligned_alloc_PARM_2
                                    337 	.globl _Data2
                                    338 	.globl _lcd_print
                                    339 	.globl _lcd_clear
                                    340 	.globl _kpd_input
                                    341 	.globl _delay_time
                                    342 	.globl _i2c_start
                                    343 	.globl _i2c_write
                                    344 	.globl _i2c_write_and_stop
                                    345 	.globl _i2c_read
                                    346 	.globl _i2c_read_and_stop
                                    347 	.globl _i2c_write_data
                                    348 	.globl _i2c_read_data
                                    349 	.globl _Accel_Init
                                    350 	.globl _Accel_Init_C
                                    351 	.globl _Port_Init
                                    352 	.globl _XBR0_Init
                                    353 	.globl _PCA_Init
                                    354 	.globl _SMB_Init
                                    355 	.globl _PCA_ISR
                                    356 	.globl _wait
                                    357 	.globl _ReadCompass
                                    358 	.globl _ReadRanger
                                    359 	.globl _AdjustSpeed
                                    360 	.globl _AdjustSteering
                                    361 ;--------------------------------------------------------
                                    362 ; special function registers
                                    363 ;--------------------------------------------------------
                                    364 	.area RSEG    (ABS,DATA)
      000000                        365 	.org 0x0000
                           000080   366 G$P0$0$0 == 0x0080
                           000080   367 _P0	=	0x0080
                           000081   368 G$SP$0$0 == 0x0081
                           000081   369 _SP	=	0x0081
                           000082   370 G$DPL$0$0 == 0x0082
                           000082   371 _DPL	=	0x0082
                           000083   372 G$DPH$0$0 == 0x0083
                           000083   373 _DPH	=	0x0083
                           000084   374 G$P4$0$0 == 0x0084
                           000084   375 _P4	=	0x0084
                           000085   376 G$P5$0$0 == 0x0085
                           000085   377 _P5	=	0x0085
                           000086   378 G$P6$0$0 == 0x0086
                           000086   379 _P6	=	0x0086
                           000087   380 G$PCON$0$0 == 0x0087
                           000087   381 _PCON	=	0x0087
                           000088   382 G$TCON$0$0 == 0x0088
                           000088   383 _TCON	=	0x0088
                           000089   384 G$TMOD$0$0 == 0x0089
                           000089   385 _TMOD	=	0x0089
                           00008A   386 G$TL0$0$0 == 0x008a
                           00008A   387 _TL0	=	0x008a
                           00008B   388 G$TL1$0$0 == 0x008b
                           00008B   389 _TL1	=	0x008b
                           00008C   390 G$TH0$0$0 == 0x008c
                           00008C   391 _TH0	=	0x008c
                           00008D   392 G$TH1$0$0 == 0x008d
                           00008D   393 _TH1	=	0x008d
                           00008E   394 G$CKCON$0$0 == 0x008e
                           00008E   395 _CKCON	=	0x008e
                           00008F   396 G$PSCTL$0$0 == 0x008f
                           00008F   397 _PSCTL	=	0x008f
                           000090   398 G$P1$0$0 == 0x0090
                           000090   399 _P1	=	0x0090
                           000091   400 G$TMR3CN$0$0 == 0x0091
                           000091   401 _TMR3CN	=	0x0091
                           000092   402 G$TMR3RLL$0$0 == 0x0092
                           000092   403 _TMR3RLL	=	0x0092
                           000093   404 G$TMR3RLH$0$0 == 0x0093
                           000093   405 _TMR3RLH	=	0x0093
                           000094   406 G$TMR3L$0$0 == 0x0094
                           000094   407 _TMR3L	=	0x0094
                           000095   408 G$TMR3H$0$0 == 0x0095
                           000095   409 _TMR3H	=	0x0095
                           000096   410 G$P7$0$0 == 0x0096
                           000096   411 _P7	=	0x0096
                           000098   412 G$SCON$0$0 == 0x0098
                           000098   413 _SCON	=	0x0098
                           000098   414 G$SCON0$0$0 == 0x0098
                           000098   415 _SCON0	=	0x0098
                           000099   416 G$SBUF$0$0 == 0x0099
                           000099   417 _SBUF	=	0x0099
                           000099   418 G$SBUF0$0$0 == 0x0099
                           000099   419 _SBUF0	=	0x0099
                           00009A   420 G$SPI0CFG$0$0 == 0x009a
                           00009A   421 _SPI0CFG	=	0x009a
                           00009B   422 G$SPI0DAT$0$0 == 0x009b
                           00009B   423 _SPI0DAT	=	0x009b
                           00009C   424 G$ADC1$0$0 == 0x009c
                           00009C   425 _ADC1	=	0x009c
                           00009D   426 G$SPI0CKR$0$0 == 0x009d
                           00009D   427 _SPI0CKR	=	0x009d
                           00009E   428 G$CPT0CN$0$0 == 0x009e
                           00009E   429 _CPT0CN	=	0x009e
                           00009F   430 G$CPT1CN$0$0 == 0x009f
                           00009F   431 _CPT1CN	=	0x009f
                           0000A0   432 G$P2$0$0 == 0x00a0
                           0000A0   433 _P2	=	0x00a0
                           0000A1   434 G$EMI0TC$0$0 == 0x00a1
                           0000A1   435 _EMI0TC	=	0x00a1
                           0000A3   436 G$EMI0CF$0$0 == 0x00a3
                           0000A3   437 _EMI0CF	=	0x00a3
                           0000A4   438 G$PRT0CF$0$0 == 0x00a4
                           0000A4   439 _PRT0CF	=	0x00a4
                           0000A4   440 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   441 _P0MDOUT	=	0x00a4
                           0000A5   442 G$PRT1CF$0$0 == 0x00a5
                           0000A5   443 _PRT1CF	=	0x00a5
                           0000A5   444 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   445 _P1MDOUT	=	0x00a5
                           0000A6   446 G$PRT2CF$0$0 == 0x00a6
                           0000A6   447 _PRT2CF	=	0x00a6
                           0000A6   448 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   449 _P2MDOUT	=	0x00a6
                           0000A7   450 G$PRT3CF$0$0 == 0x00a7
                           0000A7   451 _PRT3CF	=	0x00a7
                           0000A7   452 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   453 _P3MDOUT	=	0x00a7
                           0000A8   454 G$IE$0$0 == 0x00a8
                           0000A8   455 _IE	=	0x00a8
                           0000A9   456 G$SADDR0$0$0 == 0x00a9
                           0000A9   457 _SADDR0	=	0x00a9
                           0000AA   458 G$ADC1CN$0$0 == 0x00aa
                           0000AA   459 _ADC1CN	=	0x00aa
                           0000AB   460 G$ADC1CF$0$0 == 0x00ab
                           0000AB   461 _ADC1CF	=	0x00ab
                           0000AC   462 G$AMX1SL$0$0 == 0x00ac
                           0000AC   463 _AMX1SL	=	0x00ac
                           0000AD   464 G$P3IF$0$0 == 0x00ad
                           0000AD   465 _P3IF	=	0x00ad
                           0000AE   466 G$SADEN1$0$0 == 0x00ae
                           0000AE   467 _SADEN1	=	0x00ae
                           0000AF   468 G$EMI0CN$0$0 == 0x00af
                           0000AF   469 _EMI0CN	=	0x00af
                           0000AF   470 G$_XPAGE$0$0 == 0x00af
                           0000AF   471 __XPAGE	=	0x00af
                           0000B0   472 G$P3$0$0 == 0x00b0
                           0000B0   473 _P3	=	0x00b0
                           0000B1   474 G$OSCXCN$0$0 == 0x00b1
                           0000B1   475 _OSCXCN	=	0x00b1
                           0000B2   476 G$OSCICN$0$0 == 0x00b2
                           0000B2   477 _OSCICN	=	0x00b2
                           0000B5   478 G$P74OUT$0$0 == 0x00b5
                           0000B5   479 _P74OUT	=	0x00b5
                           0000B6   480 G$FLSCL$0$0 == 0x00b6
                           0000B6   481 _FLSCL	=	0x00b6
                           0000B7   482 G$FLACL$0$0 == 0x00b7
                           0000B7   483 _FLACL	=	0x00b7
                           0000B8   484 G$IP$0$0 == 0x00b8
                           0000B8   485 _IP	=	0x00b8
                           0000B9   486 G$SADEN0$0$0 == 0x00b9
                           0000B9   487 _SADEN0	=	0x00b9
                           0000BA   488 G$AMX0CF$0$0 == 0x00ba
                           0000BA   489 _AMX0CF	=	0x00ba
                           0000BB   490 G$AMX0SL$0$0 == 0x00bb
                           0000BB   491 _AMX0SL	=	0x00bb
                           0000BC   492 G$ADC0CF$0$0 == 0x00bc
                           0000BC   493 _ADC0CF	=	0x00bc
                           0000BD   494 G$P1MDIN$0$0 == 0x00bd
                           0000BD   495 _P1MDIN	=	0x00bd
                           0000BE   496 G$ADC0L$0$0 == 0x00be
                           0000BE   497 _ADC0L	=	0x00be
                           0000BF   498 G$ADC0H$0$0 == 0x00bf
                           0000BF   499 _ADC0H	=	0x00bf
                           0000C0   500 G$SMB0CN$0$0 == 0x00c0
                           0000C0   501 _SMB0CN	=	0x00c0
                           0000C1   502 G$SMB0STA$0$0 == 0x00c1
                           0000C1   503 _SMB0STA	=	0x00c1
                           0000C2   504 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   505 _SMB0DAT	=	0x00c2
                           0000C3   506 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   507 _SMB0ADR	=	0x00c3
                           0000C4   508 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   509 _ADC0GTL	=	0x00c4
                           0000C5   510 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   511 _ADC0GTH	=	0x00c5
                           0000C6   512 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   513 _ADC0LTL	=	0x00c6
                           0000C7   514 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   515 _ADC0LTH	=	0x00c7
                           0000C8   516 G$T2CON$0$0 == 0x00c8
                           0000C8   517 _T2CON	=	0x00c8
                           0000C9   518 G$T4CON$0$0 == 0x00c9
                           0000C9   519 _T4CON	=	0x00c9
                           0000CA   520 G$RCAP2L$0$0 == 0x00ca
                           0000CA   521 _RCAP2L	=	0x00ca
                           0000CB   522 G$RCAP2H$0$0 == 0x00cb
                           0000CB   523 _RCAP2H	=	0x00cb
                           0000CC   524 G$TL2$0$0 == 0x00cc
                           0000CC   525 _TL2	=	0x00cc
                           0000CD   526 G$TH2$0$0 == 0x00cd
                           0000CD   527 _TH2	=	0x00cd
                           0000CF   528 G$SMB0CR$0$0 == 0x00cf
                           0000CF   529 _SMB0CR	=	0x00cf
                           0000D0   530 G$PSW$0$0 == 0x00d0
                           0000D0   531 _PSW	=	0x00d0
                           0000D1   532 G$REF0CN$0$0 == 0x00d1
                           0000D1   533 _REF0CN	=	0x00d1
                           0000D2   534 G$DAC0L$0$0 == 0x00d2
                           0000D2   535 _DAC0L	=	0x00d2
                           0000D3   536 G$DAC0H$0$0 == 0x00d3
                           0000D3   537 _DAC0H	=	0x00d3
                           0000D4   538 G$DAC0CN$0$0 == 0x00d4
                           0000D4   539 _DAC0CN	=	0x00d4
                           0000D5   540 G$DAC1L$0$0 == 0x00d5
                           0000D5   541 _DAC1L	=	0x00d5
                           0000D6   542 G$DAC1H$0$0 == 0x00d6
                           0000D6   543 _DAC1H	=	0x00d6
                           0000D7   544 G$DAC1CN$0$0 == 0x00d7
                           0000D7   545 _DAC1CN	=	0x00d7
                           0000D8   546 G$PCA0CN$0$0 == 0x00d8
                           0000D8   547 _PCA0CN	=	0x00d8
                           0000D9   548 G$PCA0MD$0$0 == 0x00d9
                           0000D9   549 _PCA0MD	=	0x00d9
                           0000DA   550 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   551 _PCA0CPM0	=	0x00da
                           0000DB   552 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   553 _PCA0CPM1	=	0x00db
                           0000DC   554 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   555 _PCA0CPM2	=	0x00dc
                           0000DD   556 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   557 _PCA0CPM3	=	0x00dd
                           0000DE   558 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   559 _PCA0CPM4	=	0x00de
                           0000E0   560 G$ACC$0$0 == 0x00e0
                           0000E0   561 _ACC	=	0x00e0
                           0000E1   562 G$XBR0$0$0 == 0x00e1
                           0000E1   563 _XBR0	=	0x00e1
                           0000E2   564 G$XBR1$0$0 == 0x00e2
                           0000E2   565 _XBR1	=	0x00e2
                           0000E3   566 G$XBR2$0$0 == 0x00e3
                           0000E3   567 _XBR2	=	0x00e3
                           0000E4   568 G$RCAP4L$0$0 == 0x00e4
                           0000E4   569 _RCAP4L	=	0x00e4
                           0000E5   570 G$RCAP4H$0$0 == 0x00e5
                           0000E5   571 _RCAP4H	=	0x00e5
                           0000E6   572 G$EIE1$0$0 == 0x00e6
                           0000E6   573 _EIE1	=	0x00e6
                           0000E7   574 G$EIE2$0$0 == 0x00e7
                           0000E7   575 _EIE2	=	0x00e7
                           0000E8   576 G$ADC0CN$0$0 == 0x00e8
                           0000E8   577 _ADC0CN	=	0x00e8
                           0000E9   578 G$PCA0L$0$0 == 0x00e9
                           0000E9   579 _PCA0L	=	0x00e9
                           0000EA   580 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   581 _PCA0CPL0	=	0x00ea
                           0000EB   582 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   583 _PCA0CPL1	=	0x00eb
                           0000EC   584 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   585 _PCA0CPL2	=	0x00ec
                           0000ED   586 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   587 _PCA0CPL3	=	0x00ed
                           0000EE   588 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   589 _PCA0CPL4	=	0x00ee
                           0000EF   590 G$RSTSRC$0$0 == 0x00ef
                           0000EF   591 _RSTSRC	=	0x00ef
                           0000F0   592 G$B$0$0 == 0x00f0
                           0000F0   593 _B	=	0x00f0
                           0000F1   594 G$SCON1$0$0 == 0x00f1
                           0000F1   595 _SCON1	=	0x00f1
                           0000F2   596 G$SBUF1$0$0 == 0x00f2
                           0000F2   597 _SBUF1	=	0x00f2
                           0000F3   598 G$SADDR1$0$0 == 0x00f3
                           0000F3   599 _SADDR1	=	0x00f3
                           0000F4   600 G$TL4$0$0 == 0x00f4
                           0000F4   601 _TL4	=	0x00f4
                           0000F5   602 G$TH4$0$0 == 0x00f5
                           0000F5   603 _TH4	=	0x00f5
                           0000F6   604 G$EIP1$0$0 == 0x00f6
                           0000F6   605 _EIP1	=	0x00f6
                           0000F7   606 G$EIP2$0$0 == 0x00f7
                           0000F7   607 _EIP2	=	0x00f7
                           0000F8   608 G$SPI0CN$0$0 == 0x00f8
                           0000F8   609 _SPI0CN	=	0x00f8
                           0000F9   610 G$PCA0H$0$0 == 0x00f9
                           0000F9   611 _PCA0H	=	0x00f9
                           0000FA   612 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   613 _PCA0CPH0	=	0x00fa
                           0000FB   614 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   615 _PCA0CPH1	=	0x00fb
                           0000FC   616 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   617 _PCA0CPH2	=	0x00fc
                           0000FD   618 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   619 _PCA0CPH3	=	0x00fd
                           0000FE   620 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   621 _PCA0CPH4	=	0x00fe
                           0000FF   622 G$WDTCN$0$0 == 0x00ff
                           0000FF   623 _WDTCN	=	0x00ff
                           008C8A   624 G$TMR0$0$0 == 0x8c8a
                           008C8A   625 _TMR0	=	0x8c8a
                           008D8B   626 G$TMR1$0$0 == 0x8d8b
                           008D8B   627 _TMR1	=	0x8d8b
                           00CDCC   628 G$TMR2$0$0 == 0xcdcc
                           00CDCC   629 _TMR2	=	0xcdcc
                           00CBCA   630 G$RCAP2$0$0 == 0xcbca
                           00CBCA   631 _RCAP2	=	0xcbca
                           009594   632 G$TMR3$0$0 == 0x9594
                           009594   633 _TMR3	=	0x9594
                           009392   634 G$TMR3RL$0$0 == 0x9392
                           009392   635 _TMR3RL	=	0x9392
                           00F5F4   636 G$TMR4$0$0 == 0xf5f4
                           00F5F4   637 _TMR4	=	0xf5f4
                           00E5E4   638 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   639 _RCAP4	=	0xe5e4
                           00BFBE   640 G$ADC0$0$0 == 0xbfbe
                           00BFBE   641 _ADC0	=	0xbfbe
                           00C5C4   642 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   643 _ADC0GT	=	0xc5c4
                           00C7C6   644 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   645 _ADC0LT	=	0xc7c6
                           00D3D2   646 G$DAC0$0$0 == 0xd3d2
                           00D3D2   647 _DAC0	=	0xd3d2
                           00D6D5   648 G$DAC1$0$0 == 0xd6d5
                           00D6D5   649 _DAC1	=	0xd6d5
                           00F9E9   650 G$PCA0$0$0 == 0xf9e9
                           00F9E9   651 _PCA0	=	0xf9e9
                           00FAEA   652 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   653 _PCA0CP0	=	0xfaea
                           00FBEB   654 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   655 _PCA0CP1	=	0xfbeb
                           00FCEC   656 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   657 _PCA0CP2	=	0xfcec
                           00FDED   658 G$PCA0CP3$0$0 == 0xfded
                           00FDED   659 _PCA0CP3	=	0xfded
                           00FEEE   660 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   661 _PCA0CP4	=	0xfeee
                                    662 ;--------------------------------------------------------
                                    663 ; special function bits
                                    664 ;--------------------------------------------------------
                                    665 	.area RSEG    (ABS,DATA)
      000000                        666 	.org 0x0000
                           000080   667 G$P0_0$0$0 == 0x0080
                           000080   668 _P0_0	=	0x0080
                           000081   669 G$P0_1$0$0 == 0x0081
                           000081   670 _P0_1	=	0x0081
                           000082   671 G$P0_2$0$0 == 0x0082
                           000082   672 _P0_2	=	0x0082
                           000083   673 G$P0_3$0$0 == 0x0083
                           000083   674 _P0_3	=	0x0083
                           000084   675 G$P0_4$0$0 == 0x0084
                           000084   676 _P0_4	=	0x0084
                           000085   677 G$P0_5$0$0 == 0x0085
                           000085   678 _P0_5	=	0x0085
                           000086   679 G$P0_6$0$0 == 0x0086
                           000086   680 _P0_6	=	0x0086
                           000087   681 G$P0_7$0$0 == 0x0087
                           000087   682 _P0_7	=	0x0087
                           000088   683 G$IT0$0$0 == 0x0088
                           000088   684 _IT0	=	0x0088
                           000089   685 G$IE0$0$0 == 0x0089
                           000089   686 _IE0	=	0x0089
                           00008A   687 G$IT1$0$0 == 0x008a
                           00008A   688 _IT1	=	0x008a
                           00008B   689 G$IE1$0$0 == 0x008b
                           00008B   690 _IE1	=	0x008b
                           00008C   691 G$TR0$0$0 == 0x008c
                           00008C   692 _TR0	=	0x008c
                           00008D   693 G$TF0$0$0 == 0x008d
                           00008D   694 _TF0	=	0x008d
                           00008E   695 G$TR1$0$0 == 0x008e
                           00008E   696 _TR1	=	0x008e
                           00008F   697 G$TF1$0$0 == 0x008f
                           00008F   698 _TF1	=	0x008f
                           000090   699 G$P1_0$0$0 == 0x0090
                           000090   700 _P1_0	=	0x0090
                           000091   701 G$P1_1$0$0 == 0x0091
                           000091   702 _P1_1	=	0x0091
                           000092   703 G$P1_2$0$0 == 0x0092
                           000092   704 _P1_2	=	0x0092
                           000093   705 G$P1_3$0$0 == 0x0093
                           000093   706 _P1_3	=	0x0093
                           000094   707 G$P1_4$0$0 == 0x0094
                           000094   708 _P1_4	=	0x0094
                           000095   709 G$P1_5$0$0 == 0x0095
                           000095   710 _P1_5	=	0x0095
                           000096   711 G$P1_6$0$0 == 0x0096
                           000096   712 _P1_6	=	0x0096
                           000097   713 G$P1_7$0$0 == 0x0097
                           000097   714 _P1_7	=	0x0097
                           000098   715 G$RI$0$0 == 0x0098
                           000098   716 _RI	=	0x0098
                           000098   717 G$RI0$0$0 == 0x0098
                           000098   718 _RI0	=	0x0098
                           000099   719 G$TI$0$0 == 0x0099
                           000099   720 _TI	=	0x0099
                           000099   721 G$TI0$0$0 == 0x0099
                           000099   722 _TI0	=	0x0099
                           00009A   723 G$RB8$0$0 == 0x009a
                           00009A   724 _RB8	=	0x009a
                           00009A   725 G$RB80$0$0 == 0x009a
                           00009A   726 _RB80	=	0x009a
                           00009B   727 G$TB8$0$0 == 0x009b
                           00009B   728 _TB8	=	0x009b
                           00009B   729 G$TB80$0$0 == 0x009b
                           00009B   730 _TB80	=	0x009b
                           00009C   731 G$REN$0$0 == 0x009c
                           00009C   732 _REN	=	0x009c
                           00009C   733 G$REN0$0$0 == 0x009c
                           00009C   734 _REN0	=	0x009c
                           00009D   735 G$SM2$0$0 == 0x009d
                           00009D   736 _SM2	=	0x009d
                           00009D   737 G$SM20$0$0 == 0x009d
                           00009D   738 _SM20	=	0x009d
                           00009D   739 G$MCE0$0$0 == 0x009d
                           00009D   740 _MCE0	=	0x009d
                           00009E   741 G$SM1$0$0 == 0x009e
                           00009E   742 _SM1	=	0x009e
                           00009E   743 G$SM10$0$0 == 0x009e
                           00009E   744 _SM10	=	0x009e
                           00009F   745 G$SM0$0$0 == 0x009f
                           00009F   746 _SM0	=	0x009f
                           00009F   747 G$SM00$0$0 == 0x009f
                           00009F   748 _SM00	=	0x009f
                           00009F   749 G$S0MODE$0$0 == 0x009f
                           00009F   750 _S0MODE	=	0x009f
                           0000A0   751 G$P2_0$0$0 == 0x00a0
                           0000A0   752 _P2_0	=	0x00a0
                           0000A1   753 G$P2_1$0$0 == 0x00a1
                           0000A1   754 _P2_1	=	0x00a1
                           0000A2   755 G$P2_2$0$0 == 0x00a2
                           0000A2   756 _P2_2	=	0x00a2
                           0000A3   757 G$P2_3$0$0 == 0x00a3
                           0000A3   758 _P2_3	=	0x00a3
                           0000A4   759 G$P2_4$0$0 == 0x00a4
                           0000A4   760 _P2_4	=	0x00a4
                           0000A5   761 G$P2_5$0$0 == 0x00a5
                           0000A5   762 _P2_5	=	0x00a5
                           0000A6   763 G$P2_6$0$0 == 0x00a6
                           0000A6   764 _P2_6	=	0x00a6
                           0000A7   765 G$P2_7$0$0 == 0x00a7
                           0000A7   766 _P2_7	=	0x00a7
                           0000A8   767 G$EX0$0$0 == 0x00a8
                           0000A8   768 _EX0	=	0x00a8
                           0000A9   769 G$ET0$0$0 == 0x00a9
                           0000A9   770 _ET0	=	0x00a9
                           0000AA   771 G$EX1$0$0 == 0x00aa
                           0000AA   772 _EX1	=	0x00aa
                           0000AB   773 G$ET1$0$0 == 0x00ab
                           0000AB   774 _ET1	=	0x00ab
                           0000AC   775 G$ES0$0$0 == 0x00ac
                           0000AC   776 _ES0	=	0x00ac
                           0000AC   777 G$ES$0$0 == 0x00ac
                           0000AC   778 _ES	=	0x00ac
                           0000AD   779 G$ET2$0$0 == 0x00ad
                           0000AD   780 _ET2	=	0x00ad
                           0000AF   781 G$EA$0$0 == 0x00af
                           0000AF   782 _EA	=	0x00af
                           0000B0   783 G$P3_0$0$0 == 0x00b0
                           0000B0   784 _P3_0	=	0x00b0
                           0000B1   785 G$P3_1$0$0 == 0x00b1
                           0000B1   786 _P3_1	=	0x00b1
                           0000B2   787 G$P3_2$0$0 == 0x00b2
                           0000B2   788 _P3_2	=	0x00b2
                           0000B3   789 G$P3_3$0$0 == 0x00b3
                           0000B3   790 _P3_3	=	0x00b3
                           0000B4   791 G$P3_4$0$0 == 0x00b4
                           0000B4   792 _P3_4	=	0x00b4
                           0000B5   793 G$P3_5$0$0 == 0x00b5
                           0000B5   794 _P3_5	=	0x00b5
                           0000B6   795 G$P3_6$0$0 == 0x00b6
                           0000B6   796 _P3_6	=	0x00b6
                           0000B7   797 G$P3_7$0$0 == 0x00b7
                           0000B7   798 _P3_7	=	0x00b7
                           0000B8   799 G$PX0$0$0 == 0x00b8
                           0000B8   800 _PX0	=	0x00b8
                           0000B9   801 G$PT0$0$0 == 0x00b9
                           0000B9   802 _PT0	=	0x00b9
                           0000BA   803 G$PX1$0$0 == 0x00ba
                           0000BA   804 _PX1	=	0x00ba
                           0000BB   805 G$PT1$0$0 == 0x00bb
                           0000BB   806 _PT1	=	0x00bb
                           0000BC   807 G$PS0$0$0 == 0x00bc
                           0000BC   808 _PS0	=	0x00bc
                           0000BC   809 G$PS$0$0 == 0x00bc
                           0000BC   810 _PS	=	0x00bc
                           0000BD   811 G$PT2$0$0 == 0x00bd
                           0000BD   812 _PT2	=	0x00bd
                           0000C0   813 G$SMBTOE$0$0 == 0x00c0
                           0000C0   814 _SMBTOE	=	0x00c0
                           0000C1   815 G$SMBFTE$0$0 == 0x00c1
                           0000C1   816 _SMBFTE	=	0x00c1
                           0000C2   817 G$AA$0$0 == 0x00c2
                           0000C2   818 _AA	=	0x00c2
                           0000C3   819 G$SI$0$0 == 0x00c3
                           0000C3   820 _SI	=	0x00c3
                           0000C4   821 G$STO$0$0 == 0x00c4
                           0000C4   822 _STO	=	0x00c4
                           0000C5   823 G$STA$0$0 == 0x00c5
                           0000C5   824 _STA	=	0x00c5
                           0000C6   825 G$ENSMB$0$0 == 0x00c6
                           0000C6   826 _ENSMB	=	0x00c6
                           0000C7   827 G$BUSY$0$0 == 0x00c7
                           0000C7   828 _BUSY	=	0x00c7
                           0000C8   829 G$CPRL2$0$0 == 0x00c8
                           0000C8   830 _CPRL2	=	0x00c8
                           0000C9   831 G$CT2$0$0 == 0x00c9
                           0000C9   832 _CT2	=	0x00c9
                           0000CA   833 G$TR2$0$0 == 0x00ca
                           0000CA   834 _TR2	=	0x00ca
                           0000CB   835 G$EXEN2$0$0 == 0x00cb
                           0000CB   836 _EXEN2	=	0x00cb
                           0000CC   837 G$TCLK$0$0 == 0x00cc
                           0000CC   838 _TCLK	=	0x00cc
                           0000CD   839 G$RCLK$0$0 == 0x00cd
                           0000CD   840 _RCLK	=	0x00cd
                           0000CE   841 G$EXF2$0$0 == 0x00ce
                           0000CE   842 _EXF2	=	0x00ce
                           0000CF   843 G$TF2$0$0 == 0x00cf
                           0000CF   844 _TF2	=	0x00cf
                           0000D0   845 G$P$0$0 == 0x00d0
                           0000D0   846 _P	=	0x00d0
                           0000D1   847 G$F1$0$0 == 0x00d1
                           0000D1   848 _F1	=	0x00d1
                           0000D2   849 G$OV$0$0 == 0x00d2
                           0000D2   850 _OV	=	0x00d2
                           0000D3   851 G$RS0$0$0 == 0x00d3
                           0000D3   852 _RS0	=	0x00d3
                           0000D4   853 G$RS1$0$0 == 0x00d4
                           0000D4   854 _RS1	=	0x00d4
                           0000D5   855 G$F0$0$0 == 0x00d5
                           0000D5   856 _F0	=	0x00d5
                           0000D6   857 G$AC$0$0 == 0x00d6
                           0000D6   858 _AC	=	0x00d6
                           0000D7   859 G$CY$0$0 == 0x00d7
                           0000D7   860 _CY	=	0x00d7
                           0000D8   861 G$CCF0$0$0 == 0x00d8
                           0000D8   862 _CCF0	=	0x00d8
                           0000D9   863 G$CCF1$0$0 == 0x00d9
                           0000D9   864 _CCF1	=	0x00d9
                           0000DA   865 G$CCF2$0$0 == 0x00da
                           0000DA   866 _CCF2	=	0x00da
                           0000DB   867 G$CCF3$0$0 == 0x00db
                           0000DB   868 _CCF3	=	0x00db
                           0000DC   869 G$CCF4$0$0 == 0x00dc
                           0000DC   870 _CCF4	=	0x00dc
                           0000DE   871 G$CR$0$0 == 0x00de
                           0000DE   872 _CR	=	0x00de
                           0000DF   873 G$CF$0$0 == 0x00df
                           0000DF   874 _CF	=	0x00df
                           0000E8   875 G$ADLJST$0$0 == 0x00e8
                           0000E8   876 _ADLJST	=	0x00e8
                           0000E8   877 G$AD0LJST$0$0 == 0x00e8
                           0000E8   878 _AD0LJST	=	0x00e8
                           0000E9   879 G$ADWINT$0$0 == 0x00e9
                           0000E9   880 _ADWINT	=	0x00e9
                           0000E9   881 G$AD0WINT$0$0 == 0x00e9
                           0000E9   882 _AD0WINT	=	0x00e9
                           0000EA   883 G$ADSTM0$0$0 == 0x00ea
                           0000EA   884 _ADSTM0	=	0x00ea
                           0000EA   885 G$AD0CM0$0$0 == 0x00ea
                           0000EA   886 _AD0CM0	=	0x00ea
                           0000EB   887 G$ADSTM1$0$0 == 0x00eb
                           0000EB   888 _ADSTM1	=	0x00eb
                           0000EB   889 G$AD0CM1$0$0 == 0x00eb
                           0000EB   890 _AD0CM1	=	0x00eb
                           0000EC   891 G$ADBUSY$0$0 == 0x00ec
                           0000EC   892 _ADBUSY	=	0x00ec
                           0000EC   893 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   894 _AD0BUSY	=	0x00ec
                           0000ED   895 G$ADCINT$0$0 == 0x00ed
                           0000ED   896 _ADCINT	=	0x00ed
                           0000ED   897 G$AD0INT$0$0 == 0x00ed
                           0000ED   898 _AD0INT	=	0x00ed
                           0000EE   899 G$ADCTM$0$0 == 0x00ee
                           0000EE   900 _ADCTM	=	0x00ee
                           0000EE   901 G$AD0TM$0$0 == 0x00ee
                           0000EE   902 _AD0TM	=	0x00ee
                           0000EF   903 G$ADCEN$0$0 == 0x00ef
                           0000EF   904 _ADCEN	=	0x00ef
                           0000EF   905 G$AD0EN$0$0 == 0x00ef
                           0000EF   906 _AD0EN	=	0x00ef
                           0000F8   907 G$SPIEN$0$0 == 0x00f8
                           0000F8   908 _SPIEN	=	0x00f8
                           0000F9   909 G$MSTEN$0$0 == 0x00f9
                           0000F9   910 _MSTEN	=	0x00f9
                           0000FA   911 G$SLVSEL$0$0 == 0x00fa
                           0000FA   912 _SLVSEL	=	0x00fa
                           0000FB   913 G$TXBSY$0$0 == 0x00fb
                           0000FB   914 _TXBSY	=	0x00fb
                           0000FC   915 G$RXOVRN$0$0 == 0x00fc
                           0000FC   916 _RXOVRN	=	0x00fc
                           0000FD   917 G$MODF$0$0 == 0x00fd
                           0000FD   918 _MODF	=	0x00fd
                           0000FE   919 G$WCOL$0$0 == 0x00fe
                           0000FE   920 _WCOL	=	0x00fe
                           0000FF   921 G$SPIF$0$0 == 0x00ff
                           0000FF   922 _SPIF	=	0x00ff
                           0000C7   923 G$BUS_BUSY$0$0 == 0x00c7
                           0000C7   924 _BUS_BUSY	=	0x00c7
                           0000C6   925 G$BUS_EN$0$0 == 0x00c6
                           0000C6   926 _BUS_EN	=	0x00c6
                           0000C5   927 G$BUS_START$0$0 == 0x00c5
                           0000C5   928 _BUS_START	=	0x00c5
                           0000C4   929 G$BUS_STOP$0$0 == 0x00c4
                           0000C4   930 _BUS_STOP	=	0x00c4
                           0000C3   931 G$BUS_INT$0$0 == 0x00c3
                           0000C3   932 _BUS_INT	=	0x00c3
                           0000C2   933 G$BUS_AA$0$0 == 0x00c2
                           0000C2   934 _BUS_AA	=	0x00c2
                           0000C1   935 G$BUS_FTE$0$0 == 0x00c1
                           0000C1   936 _BUS_FTE	=	0x00c1
                           0000C0   937 G$BUS_TOE$0$0 == 0x00c0
                           0000C0   938 _BUS_TOE	=	0x00c0
                           000083   939 G$BUS_SCL$0$0 == 0x0083
                           000083   940 _BUS_SCL	=	0x0083
                           0000B7   941 G$SS$0$0 == 0x00b7
                           0000B7   942 _SS	=	0x00b7
                                    943 ;--------------------------------------------------------
                                    944 ; overlayable register banks
                                    945 ;--------------------------------------------------------
                                    946 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        947 	.ds 8
                                    948 ;--------------------------------------------------------
                                    949 ; internal ram data
                                    950 ;--------------------------------------------------------
                                    951 	.area DSEG    (DATA)
                           000000   952 G$Data2$0$0==.
      000022                        953 _Data2::
      000022                        954 	.ds 3
                           000003   955 Llab3_3.aligned_alloc$size$1$39==.
      000025                        956 _aligned_alloc_PARM_2:
      000025                        957 	.ds 2
                           000005   958 Llab3_3.lcd_clear$NumBytes$1$85==.
      000027                        959 _lcd_clear_NumBytes_1_85:
      000027                        960 	.ds 1
                           000006   961 Llab3_3.lcd_clear$Cmd$1$85==.
      000028                        962 _lcd_clear_Cmd_1_85:
      000028                        963 	.ds 2
                           000008   964 Llab3_3.read_keypad$Data$1$86==.
      00002A                        965 _read_keypad_Data_1_86:
      00002A                        966 	.ds 2
                           00000A   967 Llab3_3.i2c_write_data$start_reg$1$105==.
      00002C                        968 _i2c_write_data_PARM_2:
      00002C                        969 	.ds 1
                           00000B   970 Llab3_3.i2c_write_data$buffer$1$105==.
      00002D                        971 _i2c_write_data_PARM_3:
      00002D                        972 	.ds 3
                           00000E   973 Llab3_3.i2c_write_data$num_bytes$1$105==.
      000030                        974 _i2c_write_data_PARM_4:
      000030                        975 	.ds 1
                           00000F   976 Llab3_3.i2c_read_data$start_reg$1$107==.
      000031                        977 _i2c_read_data_PARM_2:
      000031                        978 	.ds 1
                           000010   979 Llab3_3.i2c_read_data$buffer$1$107==.
      000032                        980 _i2c_read_data_PARM_3:
      000032                        981 	.ds 3
                           000013   982 Llab3_3.i2c_read_data$num_bytes$1$107==.
      000035                        983 _i2c_read_data_PARM_4:
      000035                        984 	.ds 1
                           000014   985 G$h_count$0$0==.
      000036                        986 _h_count::
      000036                        987 	.ds 2
                           000016   988 G$new_heading$0$0==.
      000038                        989 _new_heading::
      000038                        990 	.ds 2
                           000018   991 G$heading$0$0==.
      00003A                        992 _heading::
      00003A                        993 	.ds 2
                           00001A   994 G$heading_$0$0==.
      00003C                        995 _heading_::
      00003C                        996 	.ds 2
                           00001C   997 G$desired_heading$0$0==.
      00003E                        998 _desired_heading::
      00003E                        999 	.ds 2
                           00001E  1000 G$error$0$0==.
      000040                       1001 _error::
      000040                       1002 	.ds 2
                           000020  1003 G$gain$0$0==.
      000042                       1004 _gain::
      000042                       1005 	.ds 1
                           000021  1006 G$temp_servo_pw$0$0==.
      000043                       1007 _temp_servo_pw::
      000043                       1008 	.ds 2
                           000023  1009 G$r_count$0$0==.
      000045                       1010 _r_count::
      000045                       1011 	.ds 2
                           000025  1012 G$new_range$0$0==.
      000047                       1013 _new_range::
      000047                       1014 	.ds 2
                           000027  1015 G$range_$0$0==.
      000049                       1016 _range_::
      000049                       1017 	.ds 2
                           000029  1018 G$range$0$0==.
      00004B                       1019 _range::
      00004B                       1020 	.ds 2
                           00002B  1021 G$PW_CENTER$0$0==.
      00004D                       1022 _PW_CENTER::
      00004D                       1023 	.ds 2
                           00002D  1024 G$PW_MIN_m$0$0==.
      00004F                       1025 _PW_MIN_m::
      00004F                       1026 	.ds 2
                           00002F  1027 G$PW_MAX_m$0$0==.
      000051                       1028 _PW_MAX_m::
      000051                       1029 	.ds 2
                           000031  1030 G$PW_m$0$0==.
      000053                       1031 _PW_m::
      000053                       1032 	.ds 2
                           000033  1033 G$PW_CENTER_s$0$0==.
      000055                       1034 _PW_CENTER_s::
      000055                       1035 	.ds 2
                           000035  1036 G$PW_MIN_s$0$0==.
      000057                       1037 _PW_MIN_s::
      000057                       1038 	.ds 2
                           000037  1039 G$PW_MAX_s$0$0==.
      000059                       1040 _PW_MAX_s::
      000059                       1041 	.ds 2
                           000039  1042 G$PW_s$0$0==.
      00005B                       1043 _PW_s::
      00005B                       1044 	.ds 2
                           00003B  1045 G$addr$0$0==.
      00005D                       1046 _addr::
      00005D                       1047 	.ds 1
                           00003C  1048 G$Data$0$0==.
      00005E                       1049 _Data::
      00005E                       1050 	.ds 2
                           00003E  1051 G$Counts$0$0==.
      000060                       1052 _Counts::
      000060                       1053 	.ds 2
                           000040  1054 Llab3_3.ReadRanger$Data$1$146==.
      000062                       1055 _ReadRanger_Data_1_146:
      000062                       1056 	.ds 2
                                   1057 ;--------------------------------------------------------
                                   1058 ; overlayable items in internal ram 
                                   1059 ;--------------------------------------------------------
                                   1060 	.area	OSEG    (OVR,DATA)
                                   1061 	.area	OSEG    (OVR,DATA)
                                   1062 	.area	OSEG    (OVR,DATA)
                                   1063 	.area	OSEG    (OVR,DATA)
                                   1064 	.area	OSEG    (OVR,DATA)
                                   1065 	.area	OSEG    (OVR,DATA)
                                   1066 	.area	OSEG    (OVR,DATA)
                                   1067 ;--------------------------------------------------------
                                   1068 ; Stack segment in internal ram 
                                   1069 ;--------------------------------------------------------
                                   1070 	.area	SSEG
      00007E                       1071 __start__stack:
      00007E                       1072 	.ds	1
                                   1073 
                                   1074 ;--------------------------------------------------------
                                   1075 ; indirectly addressable internal ram data
                                   1076 ;--------------------------------------------------------
                                   1077 	.area ISEG    (DATA)
                                   1078 ;--------------------------------------------------------
                                   1079 ; absolute internal ram data
                                   1080 ;--------------------------------------------------------
                                   1081 	.area IABS    (ABS,DATA)
                                   1082 	.area IABS    (ABS,DATA)
                                   1083 ;--------------------------------------------------------
                                   1084 ; bit data
                                   1085 ;--------------------------------------------------------
                                   1086 	.area BSEG    (BIT)
                                   1087 ;--------------------------------------------------------
                                   1088 ; paged external ram data
                                   1089 ;--------------------------------------------------------
                                   1090 	.area PSEG    (PAG,XDATA)
                                   1091 ;--------------------------------------------------------
                                   1092 ; external ram data
                                   1093 ;--------------------------------------------------------
                                   1094 	.area XSEG    (XDATA)
                           000000  1095 Llab3_3.lcd_print$text$1$81==.
      000001                       1096 _lcd_print_text_1_81:
      000001                       1097 	.ds 80
                                   1098 ;--------------------------------------------------------
                                   1099 ; absolute external ram data
                                   1100 ;--------------------------------------------------------
                                   1101 	.area XABS    (ABS,XDATA)
                                   1102 ;--------------------------------------------------------
                                   1103 ; external initialized ram data
                                   1104 ;--------------------------------------------------------
                                   1105 	.area XISEG   (XDATA)
                                   1106 	.area HOME    (CODE)
                                   1107 	.area GSINIT0 (CODE)
                                   1108 	.area GSINIT1 (CODE)
                                   1109 	.area GSINIT2 (CODE)
                                   1110 	.area GSINIT3 (CODE)
                                   1111 	.area GSINIT4 (CODE)
                                   1112 	.area GSINIT5 (CODE)
                                   1113 	.area GSINIT  (CODE)
                                   1114 	.area GSFINAL (CODE)
                                   1115 	.area CSEG    (CODE)
                                   1116 ;--------------------------------------------------------
                                   1117 ; interrupt vector 
                                   1118 ;--------------------------------------------------------
                                   1119 	.area HOME    (CODE)
      000000                       1120 __interrupt_vect:
      000000 02 00 51         [24] 1121 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1122 	reti
      000004                       1123 	.ds	7
      00000B 32               [24] 1124 	reti
      00000C                       1125 	.ds	7
      000013 32               [24] 1126 	reti
      000014                       1127 	.ds	7
      00001B 32               [24] 1128 	reti
      00001C                       1129 	.ds	7
      000023 32               [24] 1130 	reti
      000024                       1131 	.ds	7
      00002B 32               [24] 1132 	reti
      00002C                       1133 	.ds	7
      000033 32               [24] 1134 	reti
      000034                       1135 	.ds	7
      00003B 32               [24] 1136 	reti
      00003C                       1137 	.ds	7
      000043 32               [24] 1138 	reti
      000044                       1139 	.ds	7
      00004B 02 07 01         [24] 1140 	ljmp	_PCA_ISR
                                   1141 ;--------------------------------------------------------
                                   1142 ; global & static initialisations
                                   1143 ;--------------------------------------------------------
                                   1144 	.area HOME    (CODE)
                                   1145 	.area GSINIT  (CODE)
                                   1146 	.area GSFINAL (CODE)
                                   1147 	.area GSINIT  (CODE)
                                   1148 	.globl __sdcc_gsinit_startup
                                   1149 	.globl __sdcc_program_startup
                                   1150 	.globl __start__stack
                                   1151 	.globl __mcs51_genXINIT
                                   1152 	.globl __mcs51_genXRAMCLEAR
                                   1153 	.globl __mcs51_genRAMCLEAR
                           000000  1154 	C$lab3_3.c$34$1$153 ==.
                                   1155 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:34: unsigned int desired_heading = 900;
      0000AA 75 3E 84         [24] 1156 	mov	_desired_heading,#0x84
      0000AD 75 3F 03         [24] 1157 	mov	(_desired_heading + 1),#0x03
                           000006  1158 	C$lab3_3.c$36$1$153 ==.
                                   1159 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:36: unsigned char gain = 1;
      0000B0 75 42 01         [24] 1160 	mov	_gain,#0x01
                           000009  1161 	C$lab3_3.c$44$1$153 ==.
                                   1162 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:44: unsigned int PW_CENTER = 2769;
      0000B3 75 4D D1         [24] 1163 	mov	_PW_CENTER,#0xd1
      0000B6 75 4E 0A         [24] 1164 	mov	(_PW_CENTER + 1),#0x0a
                           00000F  1165 	C$lab3_3.c$45$1$153 ==.
                                   1166 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:45: unsigned int PW_MIN_m = 2027;
      0000B9 75 4F EB         [24] 1167 	mov	_PW_MIN_m,#0xeb
      0000BC 75 50 07         [24] 1168 	mov	(_PW_MIN_m + 1),#0x07
                           000015  1169 	C$lab3_3.c$46$1$153 ==.
                                   1170 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:46: unsigned int PW_MAX_m = 3502;
      0000BF 75 51 AE         [24] 1171 	mov	_PW_MAX_m,#0xae
      0000C2 75 52 0D         [24] 1172 	mov	(_PW_MAX_m + 1),#0x0d
                           00001B  1173 	C$lab3_3.c$49$1$153 ==.
                                   1174 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:49: unsigned int PW_CENTER_s = 2769;
      0000C5 75 55 D1         [24] 1175 	mov	_PW_CENTER_s,#0xd1
      0000C8 75 56 0A         [24] 1176 	mov	(_PW_CENTER_s + 1),#0x0a
                           000021  1177 	C$lab3_3.c$50$1$153 ==.
                                   1178 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:50: unsigned int PW_MIN_s = 1661;
      0000CB 75 57 7D         [24] 1179 	mov	_PW_MIN_s,#0x7d
      0000CE 75 58 06         [24] 1180 	mov	(_PW_MIN_s + 1),#0x06
                           000027  1181 	C$lab3_3.c$51$1$153 ==.
                                   1182 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:51: unsigned int PW_MAX_s = 3877;
      0000D1 75 59 25         [24] 1183 	mov	_PW_MAX_s,#0x25
      0000D4 75 5A 0F         [24] 1184 	mov	(_PW_MAX_s + 1),#0x0f
                           00002D  1185 	C$lab3_3.c$57$1$153 ==.
                                   1186 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:57: int Counts = 0;
      0000D7 E4               [12] 1187 	clr	a
      0000D8 F5 60            [12] 1188 	mov	_Counts,a
      0000DA F5 61            [12] 1189 	mov	(_Counts + 1),a
                                   1190 	.area GSFINAL (CODE)
      0000DC 02 00 4E         [24] 1191 	ljmp	__sdcc_program_startup
                                   1192 ;--------------------------------------------------------
                                   1193 ; Home
                                   1194 ;--------------------------------------------------------
                                   1195 	.area HOME    (CODE)
                                   1196 	.area HOME    (CODE)
      00004E                       1197 __sdcc_program_startup:
      00004E 02 05 D9         [24] 1198 	ljmp	_main
                                   1199 ;	return from main will return to caller
                                   1200 ;--------------------------------------------------------
                                   1201 ; code
                                   1202 ;--------------------------------------------------------
                                   1203 	.area CSEG    (CODE)
                                   1204 ;------------------------------------------------------------
                                   1205 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1206 ;------------------------------------------------------------
                                   1207 ;i                         Allocated to registers r6 r7 
                                   1208 ;------------------------------------------------------------
                           000000  1209 	G$SYSCLK_Init$0$0 ==.
                           000000  1210 	C$c8051_SDCC.h$42$0$0 ==.
                                   1211 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1212 ;	-----------------------------------------
                                   1213 ;	 function SYSCLK_Init
                                   1214 ;	-----------------------------------------
      0000DF                       1215 _SYSCLK_Init:
                           000007  1216 	ar7 = 0x07
                           000006  1217 	ar6 = 0x06
                           000005  1218 	ar5 = 0x05
                           000004  1219 	ar4 = 0x04
                           000003  1220 	ar3 = 0x03
                           000002  1221 	ar2 = 0x02
                           000001  1222 	ar1 = 0x01
                           000000  1223 	ar0 = 0x00
                           000000  1224 	C$c8051_SDCC.h$46$1$2 ==.
                                   1225 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000DF 75 B1 67         [24] 1226 	mov	_OSCXCN,#0x67
                           000003  1227 	C$c8051_SDCC.h$49$1$2 ==.
                                   1228 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000E2 7E 00            [12] 1229 	mov	r6,#0x00
      0000E4 7F 01            [12] 1230 	mov	r7,#0x01
      0000E6                       1231 00107$:
      0000E6 EE               [12] 1232 	mov	a,r6
      0000E7 24 FF            [12] 1233 	add	a,#0xff
      0000E9 FC               [12] 1234 	mov	r4,a
      0000EA EF               [12] 1235 	mov	a,r7
      0000EB 34 FF            [12] 1236 	addc	a,#0xff
      0000ED FD               [12] 1237 	mov	r5,a
      0000EE 8C 06            [24] 1238 	mov	ar6,r4
      0000F0 8D 07            [24] 1239 	mov	ar7,r5
      0000F2 EC               [12] 1240 	mov	a,r4
      0000F3 4D               [12] 1241 	orl	a,r5
      0000F4 70 F0            [24] 1242 	jnz	00107$
                           000017  1243 	C$c8051_SDCC.h$51$1$2 ==.
                                   1244 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000F6                       1245 00102$:
      0000F6 E5 B1            [12] 1246 	mov	a,_OSCXCN
      0000F8 30 E7 FB         [24] 1247 	jnb	acc.7,00102$
                           00001C  1248 	C$c8051_SDCC.h$53$1$2 ==.
                                   1249 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000FB 75 B2 88         [24] 1250 	mov	_OSCICN,#0x88
                           00001F  1251 	C$c8051_SDCC.h$56$1$2 ==.
                           00001F  1252 	XG$SYSCLK_Init$0$0 ==.
      0000FE 22               [24] 1253 	ret
                                   1254 ;------------------------------------------------------------
                                   1255 ;Allocation info for local variables in function 'UART0_Init'
                                   1256 ;------------------------------------------------------------
                           000020  1257 	G$UART0_Init$0$0 ==.
                           000020  1258 	C$c8051_SDCC.h$64$1$2 ==.
                                   1259 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1260 ;	-----------------------------------------
                                   1261 ;	 function UART0_Init
                                   1262 ;	-----------------------------------------
      0000FF                       1263 _UART0_Init:
                           000020  1264 	C$c8051_SDCC.h$66$1$4 ==.
                                   1265 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000FF 75 98 50         [24] 1266 	mov	_SCON0,#0x50
                           000023  1267 	C$c8051_SDCC.h$67$1$4 ==.
                                   1268 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      000102 75 89 20         [24] 1269 	mov	_TMOD,#0x20
                           000026  1270 	C$c8051_SDCC.h$68$1$4 ==.
                                   1271 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = 0xFF&-(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      000105 75 8D DC         [24] 1272 	mov	_TH1,#0xdc
                           000029  1273 	C$c8051_SDCC.h$69$1$4 ==.
                                   1274 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      000108 D2 8E            [12] 1275 	setb	_TR1
                           00002B  1276 	C$c8051_SDCC.h$70$1$4 ==.
                                   1277 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      00010A 43 8E 10         [24] 1278 	orl	_CKCON,#0x10
                           00002E  1279 	C$c8051_SDCC.h$71$1$4 ==.
                                   1280 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      00010D 43 87 80         [24] 1281 	orl	_PCON,#0x80
                           000031  1282 	C$c8051_SDCC.h$73$1$4 ==.
                                   1283 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000110 D2 99            [12] 1284 	setb	_TI0
                           000033  1285 	C$c8051_SDCC.h$74$1$4 ==.
                                   1286 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000112 43 A4 01         [24] 1287 	orl	_P0MDOUT,#0x01
                           000036  1288 	C$c8051_SDCC.h$75$1$4 ==.
                           000036  1289 	XG$UART0_Init$0$0 ==.
      000115 22               [24] 1290 	ret
                                   1291 ;------------------------------------------------------------
                                   1292 ;Allocation info for local variables in function 'Sys_Init'
                                   1293 ;------------------------------------------------------------
                           000037  1294 	G$Sys_Init$0$0 ==.
                           000037  1295 	C$c8051_SDCC.h$83$1$4 ==.
                                   1296 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1297 ;	-----------------------------------------
                                   1298 ;	 function Sys_Init
                                   1299 ;	-----------------------------------------
      000116                       1300 _Sys_Init:
                           000037  1301 	C$c8051_SDCC.h$85$1$6 ==.
                                   1302 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      000116 75 FF DE         [24] 1303 	mov	_WDTCN,#0xde
                           00003A  1304 	C$c8051_SDCC.h$86$1$6 ==.
                                   1305 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      000119 75 FF AD         [24] 1306 	mov	_WDTCN,#0xad
                           00003D  1307 	C$c8051_SDCC.h$88$1$6 ==.
                                   1308 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      00011C 12 00 DF         [24] 1309 	lcall	_SYSCLK_Init
                           000040  1310 	C$c8051_SDCC.h$89$1$6 ==.
                                   1311 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      00011F 12 00 FF         [24] 1312 	lcall	_UART0_Init
                           000043  1313 	C$c8051_SDCC.h$91$1$6 ==.
                                   1314 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000122 43 E1 04         [24] 1315 	orl	_XBR0,#0x04
                           000046  1316 	C$c8051_SDCC.h$92$1$6 ==.
                                   1317 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      000125 43 E3 40         [24] 1318 	orl	_XBR2,#0x40
                           000049  1319 	C$c8051_SDCC.h$93$1$6 ==.
                           000049  1320 	XG$Sys_Init$0$0 ==.
      000128 22               [24] 1321 	ret
                                   1322 ;------------------------------------------------------------
                                   1323 ;Allocation info for local variables in function 'putchar'
                                   1324 ;------------------------------------------------------------
                                   1325 ;c                         Allocated to registers r7 
                                   1326 ;------------------------------------------------------------
                           00004A  1327 	G$putchar$0$0 ==.
                           00004A  1328 	C$c8051_SDCC.h$98$1$6 ==.
                                   1329 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1330 ;	-----------------------------------------
                                   1331 ;	 function putchar
                                   1332 ;	-----------------------------------------
      000129                       1333 _putchar:
      000129 AF 82            [24] 1334 	mov	r7,dpl
                           00004C  1335 	C$c8051_SDCC.h$100$1$8 ==.
                                   1336 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      00012B                       1337 00101$:
                           00004C  1338 	C$c8051_SDCC.h$101$1$8 ==.
                                   1339 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      00012B 10 99 02         [24] 1340 	jbc	_TI0,00112$
      00012E 80 FB            [24] 1341 	sjmp	00101$
      000130                       1342 00112$:
                           000051  1343 	C$c8051_SDCC.h$102$1$8 ==.
                                   1344 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000130 8F 99            [24] 1345 	mov	_SBUF0,r7
                           000053  1346 	C$c8051_SDCC.h$103$1$8 ==.
                           000053  1347 	XG$putchar$0$0 ==.
      000132 22               [24] 1348 	ret
                                   1349 ;------------------------------------------------------------
                                   1350 ;Allocation info for local variables in function 'getchar'
                                   1351 ;------------------------------------------------------------
                                   1352 ;c                         Allocated to registers 
                                   1353 ;------------------------------------------------------------
                           000054  1354 	G$getchar$0$0 ==.
                           000054  1355 	C$c8051_SDCC.h$108$1$8 ==.
                                   1356 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1357 ;	-----------------------------------------
                                   1358 ;	 function getchar
                                   1359 ;	-----------------------------------------
      000133                       1360 _getchar:
                           000054  1361 	C$c8051_SDCC.h$111$1$10 ==.
                                   1362 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000133                       1363 00101$:
                           000054  1364 	C$c8051_SDCC.h$112$1$10 ==.
                                   1365 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000133 10 98 02         [24] 1366 	jbc	_RI0,00112$
      000136 80 FB            [24] 1367 	sjmp	00101$
      000138                       1368 00112$:
                           000059  1369 	C$c8051_SDCC.h$113$1$10 ==.
                                   1370 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      000138 85 99 82         [24] 1371 	mov	dpl,_SBUF0
                           00005C  1372 	C$c8051_SDCC.h$114$1$10 ==.
                                   1373 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      00013B 12 01 29         [24] 1374 	lcall	_putchar
                           00005F  1375 	C$c8051_SDCC.h$115$1$10 ==.
                                   1376 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      00013E 85 99 82         [24] 1377 	mov	dpl,_SBUF0
                           000062  1378 	C$c8051_SDCC.h$116$1$10 ==.
                           000062  1379 	XG$getchar$0$0 ==.
      000141 22               [24] 1380 	ret
                                   1381 ;------------------------------------------------------------
                                   1382 ;Allocation info for local variables in function 'getchar_nw'
                                   1383 ;------------------------------------------------------------
                                   1384 ;c                         Allocated to registers 
                                   1385 ;------------------------------------------------------------
                           000063  1386 	G$getchar_nw$0$0 ==.
                           000063  1387 	C$c8051_SDCC.h$121$1$10 ==.
                                   1388 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:121: char getchar_nw(void)
                                   1389 ;	-----------------------------------------
                                   1390 ;	 function getchar_nw
                                   1391 ;	-----------------------------------------
      000142                       1392 _getchar_nw:
                           000063  1393 	C$c8051_SDCC.h$124$1$12 ==.
                                   1394 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:124: if (!RI0) return 0xFF;
      000142 20 98 05         [24] 1395 	jb	_RI0,00102$
      000145 75 82 FF         [24] 1396 	mov	dpl,#0xff
      000148 80 0B            [24] 1397 	sjmp	00104$
      00014A                       1398 00102$:
                           00006B  1399 	C$c8051_SDCC.h$127$2$13 ==.
                                   1400 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:127: RI0 = 0;
      00014A C2 98            [12] 1401 	clr	_RI0
                           00006D  1402 	C$c8051_SDCC.h$128$2$13 ==.
                                   1403 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:128: c = SBUF0;
      00014C 85 99 82         [24] 1404 	mov	dpl,_SBUF0
                           000070  1405 	C$c8051_SDCC.h$129$2$13 ==.
                                   1406 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:129: putchar(c);                          // echo to terminal
      00014F 12 01 29         [24] 1407 	lcall	_putchar
                           000073  1408 	C$c8051_SDCC.h$130$2$13 ==.
                                   1409 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:130: return SBUF0;
      000152 85 99 82         [24] 1410 	mov	dpl,_SBUF0
      000155                       1411 00104$:
                           000076  1412 	C$c8051_SDCC.h$132$1$12 ==.
                           000076  1413 	XG$getchar_nw$0$0 ==.
      000155 22               [24] 1414 	ret
                                   1415 ;------------------------------------------------------------
                                   1416 ;Allocation info for local variables in function 'lcd_print'
                                   1417 ;------------------------------------------------------------
                                   1418 ;fmt                       Allocated to stack - _bp -5
                                   1419 ;len                       Allocated to registers r6 
                                   1420 ;i                         Allocated to registers 
                                   1421 ;ap                        Allocated to registers 
                                   1422 ;text                      Allocated with name '_lcd_print_text_1_81'
                                   1423 ;------------------------------------------------------------
                           000077  1424 	G$lcd_print$0$0 ==.
                           000077  1425 	C$i2c.h$84$1$12 ==.
                                   1426 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:84: void lcd_print(const char *fmt, ...)
                                   1427 ;	-----------------------------------------
                                   1428 ;	 function lcd_print
                                   1429 ;	-----------------------------------------
      000156                       1430 _lcd_print:
      000156 C0 0F            [24] 1431 	push	_bp
      000158 85 81 0F         [24] 1432 	mov	_bp,sp
                           00007C  1433 	C$i2c.h$90$1$81 ==.
                                   1434 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:90: if ( strlen(fmt) <= 0 ) return;   //If there is no data to print, return
      00015B E5 0F            [12] 1435 	mov	a,_bp
      00015D 24 FB            [12] 1436 	add	a,#0xfb
      00015F F8               [12] 1437 	mov	r0,a
      000160 86 82            [24] 1438 	mov	dpl,@r0
      000162 08               [12] 1439 	inc	r0
      000163 86 83            [24] 1440 	mov	dph,@r0
      000165 08               [12] 1441 	inc	r0
      000166 86 F0            [24] 1442 	mov	b,@r0
      000168 12 10 80         [24] 1443 	lcall	_strlen
      00016B E5 82            [12] 1444 	mov	a,dpl
      00016D 85 83 F0         [24] 1445 	mov	b,dph
      000170 45 F0            [12] 1446 	orl	a,b
      000172 70 02            [24] 1447 	jnz	00102$
      000174 80 62            [24] 1448 	sjmp	00109$
      000176                       1449 00102$:
                           000097  1450 	C$i2c.h$92$2$82 ==.
                                   1451 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:92: va_start(ap, fmt);
      000176 E5 0F            [12] 1452 	mov	a,_bp
      000178 24 FB            [12] 1453 	add	a,#0xfb
      00017A FF               [12] 1454 	mov	r7,a
      00017B 8F 0B            [24] 1455 	mov	_vsprintf_PARM_3,r7
                           00009E  1456 	C$i2c.h$93$1$81 ==.
                                   1457 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:93: vsprintf(text, fmt, ap);
      00017D E5 0F            [12] 1458 	mov	a,_bp
      00017F 24 FB            [12] 1459 	add	a,#0xfb
      000181 F8               [12] 1460 	mov	r0,a
      000182 86 08            [24] 1461 	mov	_vsprintf_PARM_2,@r0
      000184 08               [12] 1462 	inc	r0
      000185 86 09            [24] 1463 	mov	(_vsprintf_PARM_2 + 1),@r0
      000187 08               [12] 1464 	inc	r0
      000188 86 0A            [24] 1465 	mov	(_vsprintf_PARM_2 + 2),@r0
      00018A 90 00 01         [24] 1466 	mov	dptr,#_lcd_print_text_1_81
      00018D 75 F0 00         [24] 1467 	mov	b,#0x00
      000190 12 09 EE         [24] 1468 	lcall	_vsprintf
                           0000B4  1469 	C$i2c.h$96$1$81 ==.
                                   1470 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:96: len = strlen(text);
      000193 90 00 01         [24] 1471 	mov	dptr,#_lcd_print_text_1_81
      000196 75 F0 00         [24] 1472 	mov	b,#0x00
      000199 12 10 80         [24] 1473 	lcall	_strlen
      00019C AE 82            [24] 1474 	mov	r6,dpl
                           0000BF  1475 	C$i2c.h$97$1$81 ==.
                                   1476 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:97: for(i=0; i<len; i++)
      00019E 7F 00            [12] 1477 	mov	r7,#0x00
      0001A0                       1478 00107$:
      0001A0 C3               [12] 1479 	clr	c
      0001A1 EF               [12] 1480 	mov	a,r7
      0001A2 9E               [12] 1481 	subb	a,r6
      0001A3 50 1F            [24] 1482 	jnc	00105$
                           0000C6  1483 	C$i2c.h$99$2$84 ==.
                                   1484 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:99: if(text[i] == (unsigned char)'\n') text[i] = 13;
      0001A5 EF               [12] 1485 	mov	a,r7
      0001A6 24 01            [12] 1486 	add	a,#_lcd_print_text_1_81
      0001A8 F5 82            [12] 1487 	mov	dpl,a
      0001AA E4               [12] 1488 	clr	a
      0001AB 34 00            [12] 1489 	addc	a,#(_lcd_print_text_1_81 >> 8)
      0001AD F5 83            [12] 1490 	mov	dph,a
      0001AF E0               [24] 1491 	movx	a,@dptr
      0001B0 FD               [12] 1492 	mov	r5,a
      0001B1 BD 0A 0D         [24] 1493 	cjne	r5,#0x0a,00108$
      0001B4 EF               [12] 1494 	mov	a,r7
      0001B5 24 01            [12] 1495 	add	a,#_lcd_print_text_1_81
      0001B7 F5 82            [12] 1496 	mov	dpl,a
      0001B9 E4               [12] 1497 	clr	a
      0001BA 34 00            [12] 1498 	addc	a,#(_lcd_print_text_1_81 >> 8)
      0001BC F5 83            [12] 1499 	mov	dph,a
      0001BE 74 0D            [12] 1500 	mov	a,#0x0d
      0001C0 F0               [24] 1501 	movx	@dptr,a
      0001C1                       1502 00108$:
                           0000E2  1503 	C$i2c.h$97$1$81 ==.
                                   1504 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:97: for(i=0; i<len; i++)
      0001C1 0F               [12] 1505 	inc	r7
      0001C2 80 DC            [24] 1506 	sjmp	00107$
      0001C4                       1507 00105$:
                           0000E5  1508 	C$i2c.h$102$1$81 ==.
                                   1509 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:102: i2c_write_data(0xC6, 0x00, text, len);
      0001C4 75 2D 01         [24] 1510 	mov	_i2c_write_data_PARM_3,#_lcd_print_text_1_81
      0001C7 75 2E 00         [24] 1511 	mov	(_i2c_write_data_PARM_3 + 1),#(_lcd_print_text_1_81 >> 8)
      0001CA 75 2F 00         [24] 1512 	mov	(_i2c_write_data_PARM_3 + 2),#0x00
      0001CD 75 2C 00         [24] 1513 	mov	_i2c_write_data_PARM_2,#0x00
      0001D0 8E 30            [24] 1514 	mov	_i2c_write_data_PARM_4,r6
      0001D2 75 82 C6         [24] 1515 	mov	dpl,#0xc6
      0001D5 12 04 67         [24] 1516 	lcall	_i2c_write_data
      0001D8                       1517 00109$:
      0001D8 D0 0F            [24] 1518 	pop	_bp
                           0000FB  1519 	C$i2c.h$103$1$81 ==.
                           0000FB  1520 	XG$lcd_print$0$0 ==.
      0001DA 22               [24] 1521 	ret
                                   1522 ;------------------------------------------------------------
                                   1523 ;Allocation info for local variables in function 'lcd_clear'
                                   1524 ;------------------------------------------------------------
                                   1525 ;NumBytes                  Allocated with name '_lcd_clear_NumBytes_1_85'
                                   1526 ;Cmd                       Allocated with name '_lcd_clear_Cmd_1_85'
                                   1527 ;------------------------------------------------------------
                           0000FC  1528 	G$lcd_clear$0$0 ==.
                           0000FC  1529 	C$i2c.h$106$1$81 ==.
                                   1530 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:106: void lcd_clear()
                                   1531 ;	-----------------------------------------
                                   1532 ;	 function lcd_clear
                                   1533 ;	-----------------------------------------
      0001DB                       1534 _lcd_clear:
                           0000FC  1535 	C$i2c.h$108$1$81 ==.
                                   1536 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:108: unsigned char NumBytes=0, Cmd[2];
      0001DB 75 27 00         [24] 1537 	mov	_lcd_clear_NumBytes_1_85,#0x00
                           0000FF  1538 	C$i2c.h$110$1$85 ==.
                                   1539 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:110: while(NumBytes < 64) i2c_read_data(0xC6, 0x00, &NumBytes, 1);
      0001DE                       1540 00101$:
      0001DE 74 C0            [12] 1541 	mov	a,#0x100 - 0x40
      0001E0 25 27            [12] 1542 	add	a,_lcd_clear_NumBytes_1_85
      0001E2 40 17            [24] 1543 	jc	00103$
      0001E4 75 32 27         [24] 1544 	mov	_i2c_read_data_PARM_3,#_lcd_clear_NumBytes_1_85
      0001E7 75 33 00         [24] 1545 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0001EA 75 34 40         [24] 1546 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0001ED 75 31 00         [24] 1547 	mov	_i2c_read_data_PARM_2,#0x00
      0001F0 75 35 01         [24] 1548 	mov	_i2c_read_data_PARM_4,#0x01
      0001F3 75 82 C6         [24] 1549 	mov	dpl,#0xc6
      0001F6 12 04 DD         [24] 1550 	lcall	_i2c_read_data
      0001F9 80 E3            [24] 1551 	sjmp	00101$
      0001FB                       1552 00103$:
                           00011C  1553 	C$i2c.h$112$1$85 ==.
                                   1554 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:112: Cmd[0] = 12;
      0001FB 75 28 0C         [24] 1555 	mov	_lcd_clear_Cmd_1_85,#0x0c
                           00011F  1556 	C$i2c.h$113$1$85 ==.
                                   1557 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:113: i2c_write_data(0xC6, 0x00, Cmd, 1);
      0001FE 75 2D 28         [24] 1558 	mov	_i2c_write_data_PARM_3,#_lcd_clear_Cmd_1_85
      000201 75 2E 00         [24] 1559 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000204 75 2F 40         [24] 1560 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000207 75 2C 00         [24] 1561 	mov	_i2c_write_data_PARM_2,#0x00
      00020A 75 30 01         [24] 1562 	mov	_i2c_write_data_PARM_4,#0x01
      00020D 75 82 C6         [24] 1563 	mov	dpl,#0xc6
      000210 12 04 67         [24] 1564 	lcall	_i2c_write_data
                           000134  1565 	C$i2c.h$114$1$85 ==.
                           000134  1566 	XG$lcd_clear$0$0 ==.
      000213 22               [24] 1567 	ret
                                   1568 ;------------------------------------------------------------
                                   1569 ;Allocation info for local variables in function 'read_keypad'
                                   1570 ;------------------------------------------------------------
                                   1571 ;i                         Allocated to registers r7 
                                   1572 ;Data                      Allocated with name '_read_keypad_Data_1_86'
                                   1573 ;------------------------------------------------------------
                           000135  1574 	G$read_keypad$0$0 ==.
                           000135  1575 	C$i2c.h$117$1$85 ==.
                                   1576 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:117: char read_keypad()
                                   1577 ;	-----------------------------------------
                                   1578 ;	 function read_keypad
                                   1579 ;	-----------------------------------------
      000214                       1580 _read_keypad:
                           000135  1581 	C$i2c.h$121$1$86 ==.
                                   1582 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:121: i2c_read_data(0xC6, 0x01, Data, 2); //Read I2C data on address 192, register 1, 2 bytes of data.
      000214 75 32 2A         [24] 1583 	mov	_i2c_read_data_PARM_3,#_read_keypad_Data_1_86
      000217 75 33 00         [24] 1584 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      00021A 75 34 40         [24] 1585 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00021D 75 31 01         [24] 1586 	mov	_i2c_read_data_PARM_2,#0x01
      000220 75 35 02         [24] 1587 	mov	_i2c_read_data_PARM_4,#0x02
      000223 75 82 C6         [24] 1588 	mov	dpl,#0xc6
      000226 12 04 DD         [24] 1589 	lcall	_i2c_read_data
                           00014A  1590 	C$i2c.h$122$1$86 ==.
                                   1591 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:122: if(Data[0] == 0xFF) return 0;  //No response on bus, no display
      000229 74 FF            [12] 1592 	mov	a,#0xff
      00022B B5 2A 05         [24] 1593 	cjne	a,_read_keypad_Data_1_86,00102$
      00022E 75 82 00         [24] 1594 	mov	dpl,#0x00
      000231 80 5F            [24] 1595 	sjmp	00116$
      000233                       1596 00102$:
                           000154  1597 	C$i2c.h$124$1$86 ==.
                                   1598 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:124: for(i=0; i<8; i++)             //loop 8 times
      000233 7F 00            [12] 1599 	mov	r7,#0x00
      000235 8F 06            [24] 1600 	mov	ar6,r7
      000237                       1601 00114$:
                           000158  1602 	C$i2c.h$126$2$87 ==.
                                   1603 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:126: if(Data[0] & (0x01 << i))  //find the ASCII value of the keypad read, if it is the current loop value
      000237 8E F0            [24] 1604 	mov	b,r6
      000239 05 F0            [12] 1605 	inc	b
      00023B 7C 01            [12] 1606 	mov	r4,#0x01
      00023D 7D 00            [12] 1607 	mov	r5,#0x00
      00023F 80 06            [24] 1608 	sjmp	00145$
      000241                       1609 00144$:
      000241 EC               [12] 1610 	mov	a,r4
      000242 2C               [12] 1611 	add	a,r4
      000243 FC               [12] 1612 	mov	r4,a
      000244 ED               [12] 1613 	mov	a,r5
      000245 33               [12] 1614 	rlc	a
      000246 FD               [12] 1615 	mov	r5,a
      000247                       1616 00145$:
      000247 D5 F0 F7         [24] 1617 	djnz	b,00144$
      00024A AA 2A            [24] 1618 	mov	r2,_read_keypad_Data_1_86
      00024C 7B 00            [12] 1619 	mov	r3,#0x00
      00024E EA               [12] 1620 	mov	a,r2
      00024F 52 04            [12] 1621 	anl	ar4,a
      000251 EB               [12] 1622 	mov	a,r3
      000252 52 05            [12] 1623 	anl	ar5,a
      000254 EC               [12] 1624 	mov	a,r4
      000255 4D               [12] 1625 	orl	a,r5
      000256 60 07            [24] 1626 	jz	00115$
                           000179  1627 	C$i2c.h$127$2$87 ==.
                                   1628 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:127: return i+49;
      000258 74 31            [12] 1629 	mov	a,#0x31
      00025A 2F               [12] 1630 	add	a,r7
      00025B F5 82            [12] 1631 	mov	dpl,a
      00025D 80 33            [24] 1632 	sjmp	00116$
      00025F                       1633 00115$:
                           000180  1634 	C$i2c.h$124$1$86 ==.
                                   1635 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:124: for(i=0; i<8; i++)             //loop 8 times
      00025F 0E               [12] 1636 	inc	r6
      000260 8E 07            [24] 1637 	mov	ar7,r6
      000262 BE 08 00         [24] 1638 	cjne	r6,#0x08,00147$
      000265                       1639 00147$:
      000265 40 D0            [24] 1640 	jc	00114$
                           000188  1641 	C$i2c.h$130$1$86 ==.
                                   1642 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:130: if(Data[1] & 0x01) return '9'; //if the value is equal to 9 return 9.
      000267 E5 2B            [12] 1643 	mov	a,(_read_keypad_Data_1_86 + 0x0001)
      000269 30 E0 05         [24] 1644 	jnb	acc.0,00107$
      00026C 75 82 39         [24] 1645 	mov	dpl,#0x39
      00026F 80 21            [24] 1646 	sjmp	00116$
      000271                       1647 00107$:
                           000192  1648 	C$i2c.h$132$1$86 ==.
                                   1649 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:132: if(Data[1] & 0x02) return '*'; //if the value is equal to the star.
      000271 E5 2B            [12] 1650 	mov	a,(_read_keypad_Data_1_86 + 0x0001)
      000273 30 E1 05         [24] 1651 	jnb	acc.1,00109$
      000276 75 82 2A         [24] 1652 	mov	dpl,#0x2a
      000279 80 17            [24] 1653 	sjmp	00116$
      00027B                       1654 00109$:
                           00019C  1655 	C$i2c.h$134$1$86 ==.
                                   1656 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:134: if(Data[1] & 0x04) return '0'; //if the value is equal to the 0 key
      00027B E5 2B            [12] 1657 	mov	a,(_read_keypad_Data_1_86 + 0x0001)
      00027D 30 E2 05         [24] 1658 	jnb	acc.2,00111$
      000280 75 82 30         [24] 1659 	mov	dpl,#0x30
      000283 80 0D            [24] 1660 	sjmp	00116$
      000285                       1661 00111$:
                           0001A6  1662 	C$i2c.h$136$1$86 ==.
                                   1663 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:136: if(Data[1] & 0x08) return '#'; //if the value is equal to the pound key
      000285 E5 2B            [12] 1664 	mov	a,(_read_keypad_Data_1_86 + 0x0001)
      000287 30 E3 05         [24] 1665 	jnb	acc.3,00113$
      00028A 75 82 23         [24] 1666 	mov	dpl,#0x23
      00028D 80 03            [24] 1667 	sjmp	00116$
      00028F                       1668 00113$:
                           0001B0  1669 	C$i2c.h$138$1$86 ==.
                                   1670 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:138: return 0xFF;                     //else return a numerical -1 (0xFF)
      00028F 75 82 FF         [24] 1671 	mov	dpl,#0xff
      000292                       1672 00116$:
                           0001B3  1673 	C$i2c.h$139$1$86 ==.
                           0001B3  1674 	XG$read_keypad$0$0 ==.
      000292 22               [24] 1675 	ret
                                   1676 ;------------------------------------------------------------
                                   1677 ;Allocation info for local variables in function 'kpd_input'
                                   1678 ;------------------------------------------------------------
                                   1679 ;mode                      Allocated to registers r7 
                                   1680 ;sum                       Allocated to registers r5 r6 
                                   1681 ;key                       Allocated to registers r3 
                                   1682 ;i                         Allocated to registers 
                                   1683 ;------------------------------------------------------------
                           0001B4  1684 	G$kpd_input$0$0 ==.
                           0001B4  1685 	C$i2c.h$151$1$86 ==.
                                   1686 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:151: unsigned int kpd_input(char mode)
                                   1687 ;	-----------------------------------------
                                   1688 ;	 function kpd_input
                                   1689 ;	-----------------------------------------
      000293                       1690 _kpd_input:
      000293 AF 82            [24] 1691 	mov	r7,dpl
                           0001B6  1692 	C$i2c.h$156$1$89 ==.
                                   1693 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:156: sum = 0;
                           0001B6  1694 	C$i2c.h$159$1$89 ==.
                                   1695 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:159: if(mode==0)lcd_print("\nType digits; end w/#");
      000295 E4               [12] 1696 	clr	a
      000296 FD               [12] 1697 	mov	r5,a
      000297 FE               [12] 1698 	mov	r6,a
      000298 EF               [12] 1699 	mov	a,r7
      000299 70 1D            [24] 1700 	jnz	00102$
      00029B C0 06            [24] 1701 	push	ar6
      00029D C0 05            [24] 1702 	push	ar5
      00029F 74 B8            [12] 1703 	mov	a,#___str_0
      0002A1 C0 E0            [24] 1704 	push	acc
      0002A3 74 10            [12] 1705 	mov	a,#(___str_0 >> 8)
      0002A5 C0 E0            [24] 1706 	push	acc
      0002A7 74 80            [12] 1707 	mov	a,#0x80
      0002A9 C0 E0            [24] 1708 	push	acc
      0002AB 12 01 56         [24] 1709 	lcall	_lcd_print
      0002AE 15 81            [12] 1710 	dec	sp
      0002B0 15 81            [12] 1711 	dec	sp
      0002B2 15 81            [12] 1712 	dec	sp
      0002B4 D0 05            [24] 1713 	pop	ar5
      0002B6 D0 06            [24] 1714 	pop	ar6
      0002B8                       1715 00102$:
                           0001D9  1716 	C$i2c.h$161$1$89 ==.
                                   1717 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:161: lcd_print("     %c%c%c%c%c",0x08,0x08,0x08,0x08,0x08);
      0002B8 C0 06            [24] 1718 	push	ar6
      0002BA C0 05            [24] 1719 	push	ar5
      0002BC 74 08            [12] 1720 	mov	a,#0x08
      0002BE C0 E0            [24] 1721 	push	acc
      0002C0 E4               [12] 1722 	clr	a
      0002C1 C0 E0            [24] 1723 	push	acc
      0002C3 74 08            [12] 1724 	mov	a,#0x08
      0002C5 C0 E0            [24] 1725 	push	acc
      0002C7 E4               [12] 1726 	clr	a
      0002C8 C0 E0            [24] 1727 	push	acc
      0002CA 74 08            [12] 1728 	mov	a,#0x08
      0002CC C0 E0            [24] 1729 	push	acc
      0002CE E4               [12] 1730 	clr	a
      0002CF C0 E0            [24] 1731 	push	acc
      0002D1 74 08            [12] 1732 	mov	a,#0x08
      0002D3 C0 E0            [24] 1733 	push	acc
      0002D5 E4               [12] 1734 	clr	a
      0002D6 C0 E0            [24] 1735 	push	acc
      0002D8 74 08            [12] 1736 	mov	a,#0x08
      0002DA C0 E0            [24] 1737 	push	acc
      0002DC E4               [12] 1738 	clr	a
      0002DD C0 E0            [24] 1739 	push	acc
      0002DF 74 CE            [12] 1740 	mov	a,#___str_1
      0002E1 C0 E0            [24] 1741 	push	acc
      0002E3 74 10            [12] 1742 	mov	a,#(___str_1 >> 8)
      0002E5 C0 E0            [24] 1743 	push	acc
      0002E7 74 80            [12] 1744 	mov	a,#0x80
      0002E9 C0 E0            [24] 1745 	push	acc
      0002EB 12 01 56         [24] 1746 	lcall	_lcd_print
      0002EE E5 81            [12] 1747 	mov	a,sp
      0002F0 24 F3            [12] 1748 	add	a,#0xf3
      0002F2 F5 81            [12] 1749 	mov	sp,a
                           000215  1750 	C$i2c.h$163$1$89 ==.
                                   1751 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:163: delay_time(500000);	//Add 20ms delay before reading i2c in loop
      0002F4 90 A1 20         [24] 1752 	mov	dptr,#0xa120
      0002F7 75 F0 07         [24] 1753 	mov	b,#0x07
      0002FA E4               [12] 1754 	clr	a
      0002FB 12 04 02         [24] 1755 	lcall	_delay_time
      0002FE D0 05            [24] 1756 	pop	ar5
      000300 D0 06            [24] 1757 	pop	ar6
                           000223  1758 	C$i2c.h$167$1$89 ==.
                                   1759 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:167: for(i=0; i<5; i++)
      000302 7F 00            [12] 1760 	mov	r7,#0x00
                           000225  1761 	C$i2c.h$169$3$92 ==.
                                   1762 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:169: while(((key=read_keypad()) == 0xFF) || (key == '*'))delay_time(10000);
      000304                       1763 00104$:
      000304 C0 07            [24] 1764 	push	ar7
      000306 C0 06            [24] 1765 	push	ar6
      000308 C0 05            [24] 1766 	push	ar5
      00030A 12 02 14         [24] 1767 	lcall	_read_keypad
      00030D AC 82            [24] 1768 	mov	r4,dpl
      00030F D0 05            [24] 1769 	pop	ar5
      000311 D0 06            [24] 1770 	pop	ar6
      000313 D0 07            [24] 1771 	pop	ar7
      000315 8C 03            [24] 1772 	mov	ar3,r4
      000317 BC FF 02         [24] 1773 	cjne	r4,#0xff,00146$
      00031A 80 03            [24] 1774 	sjmp	00105$
      00031C                       1775 00146$:
      00031C BB 2A 17         [24] 1776 	cjne	r3,#0x2a,00106$
      00031F                       1777 00105$:
      00031F 90 27 10         [24] 1778 	mov	dptr,#0x2710
      000322 E4               [12] 1779 	clr	a
      000323 F5 F0            [12] 1780 	mov	b,a
      000325 C0 07            [24] 1781 	push	ar7
      000327 C0 06            [24] 1782 	push	ar6
      000329 C0 05            [24] 1783 	push	ar5
      00032B 12 04 02         [24] 1784 	lcall	_delay_time
      00032E D0 05            [24] 1785 	pop	ar5
      000330 D0 06            [24] 1786 	pop	ar6
      000332 D0 07            [24] 1787 	pop	ar7
      000334 80 CE            [24] 1788 	sjmp	00104$
      000336                       1789 00106$:
                           000257  1790 	C$i2c.h$170$2$90 ==.
                                   1791 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:170: if(key == '#')
      000336 BB 23 2A         [24] 1792 	cjne	r3,#0x23,00114$
                           00025A  1793 	C$i2c.h$172$3$91 ==.
                                   1794 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:172: while(read_keypad() == '#')delay_time(10000);
      000339                       1795 00107$:
      000339 C0 06            [24] 1796 	push	ar6
      00033B C0 05            [24] 1797 	push	ar5
      00033D 12 02 14         [24] 1798 	lcall	_read_keypad
      000340 AC 82            [24] 1799 	mov	r4,dpl
      000342 D0 05            [24] 1800 	pop	ar5
      000344 D0 06            [24] 1801 	pop	ar6
      000346 BC 23 13         [24] 1802 	cjne	r4,#0x23,00109$
      000349 90 27 10         [24] 1803 	mov	dptr,#0x2710
      00034C E4               [12] 1804 	clr	a
      00034D F5 F0            [12] 1805 	mov	b,a
      00034F C0 06            [24] 1806 	push	ar6
      000351 C0 05            [24] 1807 	push	ar5
      000353 12 04 02         [24] 1808 	lcall	_delay_time
      000356 D0 05            [24] 1809 	pop	ar5
      000358 D0 06            [24] 1810 	pop	ar6
      00035A 80 DD            [24] 1811 	sjmp	00107$
      00035C                       1812 00109$:
                           00027D  1813 	C$i2c.h$173$3$91 ==.
                                   1814 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:173: return sum;
      00035C 8D 82            [24] 1815 	mov	dpl,r5
      00035E 8E 83            [24] 1816 	mov	dph,r6
      000360 02 04 01         [24] 1817 	ljmp	00119$
      000363                       1818 00114$:
                           000284  1819 	C$i2c.h$177$3$92 ==.
                                   1820 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:177: lcd_print("%c", key);
      000363 8B 02            [24] 1821 	mov	ar2,r3
      000365 7C 00            [12] 1822 	mov	r4,#0x00
      000367 C0 07            [24] 1823 	push	ar7
      000369 C0 06            [24] 1824 	push	ar6
      00036B C0 05            [24] 1825 	push	ar5
      00036D C0 04            [24] 1826 	push	ar4
      00036F C0 03            [24] 1827 	push	ar3
      000371 C0 02            [24] 1828 	push	ar2
      000373 C0 02            [24] 1829 	push	ar2
      000375 C0 04            [24] 1830 	push	ar4
      000377 74 DE            [12] 1831 	mov	a,#___str_2
      000379 C0 E0            [24] 1832 	push	acc
      00037B 74 10            [12] 1833 	mov	a,#(___str_2 >> 8)
      00037D C0 E0            [24] 1834 	push	acc
      00037F 74 80            [12] 1835 	mov	a,#0x80
      000381 C0 E0            [24] 1836 	push	acc
      000383 12 01 56         [24] 1837 	lcall	_lcd_print
      000386 E5 81            [12] 1838 	mov	a,sp
      000388 24 FB            [12] 1839 	add	a,#0xfb
      00038A F5 81            [12] 1840 	mov	sp,a
      00038C D0 02            [24] 1841 	pop	ar2
      00038E D0 03            [24] 1842 	pop	ar3
      000390 D0 04            [24] 1843 	pop	ar4
      000392 D0 05            [24] 1844 	pop	ar5
      000394 D0 06            [24] 1845 	pop	ar6
                           0002B7  1846 	C$i2c.h$178$1$89 ==.
                                   1847 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:178: sum = sum*10 + key - '0';
      000396 8D 11            [24] 1848 	mov	__mulint_PARM_2,r5
      000398 8E 12            [24] 1849 	mov	(__mulint_PARM_2 + 1),r6
      00039A 90 00 0A         [24] 1850 	mov	dptr,#0x000a
      00039D C0 04            [24] 1851 	push	ar4
      00039F C0 03            [24] 1852 	push	ar3
      0003A1 C0 02            [24] 1853 	push	ar2
      0003A3 12 09 61         [24] 1854 	lcall	__mulint
      0003A6 A8 82            [24] 1855 	mov	r0,dpl
      0003A8 A9 83            [24] 1856 	mov	r1,dph
      0003AA D0 02            [24] 1857 	pop	ar2
      0003AC D0 03            [24] 1858 	pop	ar3
      0003AE D0 04            [24] 1859 	pop	ar4
      0003B0 D0 07            [24] 1860 	pop	ar7
      0003B2 EA               [12] 1861 	mov	a,r2
      0003B3 28               [12] 1862 	add	a,r0
      0003B4 F8               [12] 1863 	mov	r0,a
      0003B5 EC               [12] 1864 	mov	a,r4
      0003B6 39               [12] 1865 	addc	a,r1
      0003B7 F9               [12] 1866 	mov	r1,a
      0003B8 E8               [12] 1867 	mov	a,r0
      0003B9 24 D0            [12] 1868 	add	a,#0xd0
      0003BB FD               [12] 1869 	mov	r5,a
      0003BC E9               [12] 1870 	mov	a,r1
      0003BD 34 FF            [12] 1871 	addc	a,#0xff
      0003BF FE               [12] 1872 	mov	r6,a
                           0002E1  1873 	C$i2c.h$179$3$92 ==.
                                   1874 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:179: while(read_keypad() == key)delay_time(10000); //wait for key to be released
      0003C0                       1875 00110$:
      0003C0 C0 07            [24] 1876 	push	ar7
      0003C2 C0 06            [24] 1877 	push	ar6
      0003C4 C0 05            [24] 1878 	push	ar5
      0003C6 C0 03            [24] 1879 	push	ar3
      0003C8 12 02 14         [24] 1880 	lcall	_read_keypad
      0003CB AC 82            [24] 1881 	mov	r4,dpl
      0003CD D0 03            [24] 1882 	pop	ar3
      0003CF D0 05            [24] 1883 	pop	ar5
      0003D1 D0 06            [24] 1884 	pop	ar6
      0003D3 D0 07            [24] 1885 	pop	ar7
      0003D5 EC               [12] 1886 	mov	a,r4
      0003D6 B5 03 1B         [24] 1887 	cjne	a,ar3,00118$
      0003D9 90 27 10         [24] 1888 	mov	dptr,#0x2710
      0003DC E4               [12] 1889 	clr	a
      0003DD F5 F0            [12] 1890 	mov	b,a
      0003DF C0 07            [24] 1891 	push	ar7
      0003E1 C0 06            [24] 1892 	push	ar6
      0003E3 C0 05            [24] 1893 	push	ar5
      0003E5 C0 03            [24] 1894 	push	ar3
      0003E7 12 04 02         [24] 1895 	lcall	_delay_time
      0003EA D0 03            [24] 1896 	pop	ar3
      0003EC D0 05            [24] 1897 	pop	ar5
      0003EE D0 06            [24] 1898 	pop	ar6
      0003F0 D0 07            [24] 1899 	pop	ar7
      0003F2 80 CC            [24] 1900 	sjmp	00110$
      0003F4                       1901 00118$:
                           000315  1902 	C$i2c.h$167$1$89 ==.
                                   1903 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:167: for(i=0; i<5; i++)
      0003F4 0F               [12] 1904 	inc	r7
      0003F5 BF 05 00         [24] 1905 	cjne	r7,#0x05,00155$
      0003F8                       1906 00155$:
      0003F8 50 03            [24] 1907 	jnc	00156$
      0003FA 02 03 04         [24] 1908 	ljmp	00104$
      0003FD                       1909 00156$:
                           00031E  1910 	C$i2c.h$182$1$89 ==.
                                   1911 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:182: return sum;
      0003FD 8D 82            [24] 1912 	mov	dpl,r5
      0003FF 8E 83            [24] 1913 	mov	dph,r6
      000401                       1914 00119$:
                           000322  1915 	C$i2c.h$183$1$89 ==.
                           000322  1916 	XG$kpd_input$0$0 ==.
      000401 22               [24] 1917 	ret
                                   1918 ;------------------------------------------------------------
                                   1919 ;Allocation info for local variables in function 'delay_time'
                                   1920 ;------------------------------------------------------------
                                   1921 ;time_end                  Allocated to registers r4 r5 r6 r7 
                                   1922 ;index                     Allocated to registers 
                                   1923 ;------------------------------------------------------------
                           000323  1924 	G$delay_time$0$0 ==.
                           000323  1925 	C$i2c.h$192$1$89 ==.
                                   1926 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:192: void delay_time (unsigned long time_end)
                                   1927 ;	-----------------------------------------
                                   1928 ;	 function delay_time
                                   1929 ;	-----------------------------------------
      000402                       1930 _delay_time:
      000402 AC 82            [24] 1931 	mov	r4,dpl
      000404 AD 83            [24] 1932 	mov	r5,dph
      000406 AE F0            [24] 1933 	mov	r6,b
      000408 FF               [12] 1934 	mov	r7,a
                           00032A  1935 	C$i2c.h$195$1$94 ==.
                                   1936 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:195: for (index = 0; index < time_end; index++); //for loop delay
      000409 78 00            [12] 1937 	mov	r0,#0x00
      00040B 79 00            [12] 1938 	mov	r1,#0x00
      00040D 7A 00            [12] 1939 	mov	r2,#0x00
      00040F 7B 00            [12] 1940 	mov	r3,#0x00
      000411                       1941 00103$:
      000411 C3               [12] 1942 	clr	c
      000412 E8               [12] 1943 	mov	a,r0
      000413 9C               [12] 1944 	subb	a,r4
      000414 E9               [12] 1945 	mov	a,r1
      000415 9D               [12] 1946 	subb	a,r5
      000416 EA               [12] 1947 	mov	a,r2
      000417 9E               [12] 1948 	subb	a,r6
      000418 EB               [12] 1949 	mov	a,r3
      000419 9F               [12] 1950 	subb	a,r7
      00041A 50 0F            [24] 1951 	jnc	00105$
      00041C 08               [12] 1952 	inc	r0
      00041D B8 00 09         [24] 1953 	cjne	r0,#0x00,00115$
      000420 09               [12] 1954 	inc	r1
      000421 B9 00 05         [24] 1955 	cjne	r1,#0x00,00115$
      000424 0A               [12] 1956 	inc	r2
      000425 BA 00 E9         [24] 1957 	cjne	r2,#0x00,00103$
      000428 0B               [12] 1958 	inc	r3
      000429                       1959 00115$:
      000429 80 E6            [24] 1960 	sjmp	00103$
      00042B                       1961 00105$:
                           00034C  1962 	C$i2c.h$196$1$94 ==.
                           00034C  1963 	XG$delay_time$0$0 ==.
      00042B 22               [24] 1964 	ret
                                   1965 ;------------------------------------------------------------
                                   1966 ;Allocation info for local variables in function 'i2c_start'
                                   1967 ;------------------------------------------------------------
                           00034D  1968 	G$i2c_start$0$0 ==.
                           00034D  1969 	C$i2c.h$199$1$94 ==.
                                   1970 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:199: void i2c_start(void)
                                   1971 ;	-----------------------------------------
                                   1972 ;	 function i2c_start
                                   1973 ;	-----------------------------------------
      00042C                       1974 _i2c_start:
                           00034D  1975 	C$i2c.h$201$1$96 ==.
                                   1976 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:201: while(BUSY);              //Wait until SMBus0 is free
      00042C                       1977 00101$:
      00042C 20 C7 FD         [24] 1978 	jb	_BUSY,00101$
                           000350  1979 	C$i2c.h$202$1$96 ==.
                                   1980 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:202: STA = 1;                  //Set Start Bit
      00042F D2 C5            [12] 1981 	setb	_STA
                           000352  1982 	C$i2c.h$203$1$96 ==.
                                   1983 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:203: while(!SI);               //Wait until start sent
      000431                       1984 00104$:
      000431 30 C3 FD         [24] 1985 	jnb	_SI,00104$
                           000355  1986 	C$i2c.h$204$1$96 ==.
                                   1987 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:204: STA = 0;                  //Clear start bit
      000434 C2 C5            [12] 1988 	clr	_STA
                           000357  1989 	C$i2c.h$205$1$96 ==.
                                   1990 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:205: SI = 0;                   //Clear SI
      000436 C2 C3            [12] 1991 	clr	_SI
                           000359  1992 	C$i2c.h$206$1$96 ==.
                           000359  1993 	XG$i2c_start$0$0 ==.
      000438 22               [24] 1994 	ret
                                   1995 ;------------------------------------------------------------
                                   1996 ;Allocation info for local variables in function 'i2c_write'
                                   1997 ;------------------------------------------------------------
                                   1998 ;output_data               Allocated to registers 
                                   1999 ;------------------------------------------------------------
                           00035A  2000 	G$i2c_write$0$0 ==.
                           00035A  2001 	C$i2c.h$209$1$96 ==.
                                   2002 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:209: void i2c_write(unsigned char output_data)
                                   2003 ;	-----------------------------------------
                                   2004 ;	 function i2c_write
                                   2005 ;	-----------------------------------------
      000439                       2006 _i2c_write:
      000439 85 82 C2         [24] 2007 	mov	_SMB0DAT,dpl
                           00035D  2008 	C$i2c.h$212$1$98 ==.
                                   2009 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:212: while(!SI);               //Wait until send is complete
      00043C                       2010 00101$:
                           00035D  2011 	C$i2c.h$213$1$98 ==.
                                   2012 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:213: SI = 0;                   //Clear SI
      00043C 10 C3 02         [24] 2013 	jbc	_SI,00112$
      00043F 80 FB            [24] 2014 	sjmp	00101$
      000441                       2015 00112$:
                           000362  2016 	C$i2c.h$214$1$98 ==.
                           000362  2017 	XG$i2c_write$0$0 ==.
      000441 22               [24] 2018 	ret
                                   2019 ;------------------------------------------------------------
                                   2020 ;Allocation info for local variables in function 'i2c_write_and_stop'
                                   2021 ;------------------------------------------------------------
                                   2022 ;output_data               Allocated to registers 
                                   2023 ;------------------------------------------------------------
                           000363  2024 	G$i2c_write_and_stop$0$0 ==.
                           000363  2025 	C$i2c.h$217$1$98 ==.
                                   2026 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:217: void i2c_write_and_stop(unsigned char output_data)
                                   2027 ;	-----------------------------------------
                                   2028 ;	 function i2c_write_and_stop
                                   2029 ;	-----------------------------------------
      000442                       2030 _i2c_write_and_stop:
      000442 85 82 C2         [24] 2031 	mov	_SMB0DAT,dpl
                           000366  2032 	C$i2c.h$220$1$100 ==.
                                   2033 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:220: STO = 1;                  //Set stop bit
      000445 D2 C4            [12] 2034 	setb	_STO
                           000368  2035 	C$i2c.h$221$1$100 ==.
                                   2036 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:221: while(!SI);               //Wait until send is complete
      000447                       2037 00101$:
                           000368  2038 	C$i2c.h$222$1$100 ==.
                                   2039 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:222: SI = 0;                   //clear SI
      000447 10 C3 02         [24] 2040 	jbc	_SI,00112$
      00044A 80 FB            [24] 2041 	sjmp	00101$
      00044C                       2042 00112$:
                           00036D  2043 	C$i2c.h$223$1$100 ==.
                           00036D  2044 	XG$i2c_write_and_stop$0$0 ==.
      00044C 22               [24] 2045 	ret
                                   2046 ;------------------------------------------------------------
                                   2047 ;Allocation info for local variables in function 'i2c_read'
                                   2048 ;------------------------------------------------------------
                                   2049 ;input_data                Allocated to registers 
                                   2050 ;------------------------------------------------------------
                           00036E  2051 	G$i2c_read$0$0 ==.
                           00036E  2052 	C$i2c.h$226$1$100 ==.
                                   2053 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:226: unsigned char i2c_read(void)
                                   2054 ;	-----------------------------------------
                                   2055 ;	 function i2c_read
                                   2056 ;	-----------------------------------------
      00044D                       2057 _i2c_read:
                           00036E  2058 	C$i2c.h$229$1$102 ==.
                                   2059 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:229: while(!SI);                //Wait until we have data to read
      00044D                       2060 00101$:
      00044D 30 C3 FD         [24] 2061 	jnb	_SI,00101$
                           000371  2062 	C$i2c.h$230$1$102 ==.
                                   2063 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:230: input_data = SMB0DAT;      //Read the data
      000450 85 C2 82         [24] 2064 	mov	dpl,_SMB0DAT
                           000374  2065 	C$i2c.h$231$1$102 ==.
                                   2066 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:231: SI = 0;                    //Clear SI
      000453 C2 C3            [12] 2067 	clr	_SI
                           000376  2068 	C$i2c.h$232$1$102 ==.
                                   2069 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:232: return input_data;         //Return the read data
                           000376  2070 	C$i2c.h$233$1$102 ==.
                           000376  2071 	XG$i2c_read$0$0 ==.
      000455 22               [24] 2072 	ret
                                   2073 ;------------------------------------------------------------
                                   2074 ;Allocation info for local variables in function 'i2c_read_and_stop'
                                   2075 ;------------------------------------------------------------
                                   2076 ;input_data                Allocated to registers r7 
                                   2077 ;------------------------------------------------------------
                           000377  2078 	G$i2c_read_and_stop$0$0 ==.
                           000377  2079 	C$i2c.h$236$1$102 ==.
                                   2080 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:236: unsigned char i2c_read_and_stop(void)
                                   2081 ;	-----------------------------------------
                                   2082 ;	 function i2c_read_and_stop
                                   2083 ;	-----------------------------------------
      000456                       2084 _i2c_read_and_stop:
                           000377  2085 	C$i2c.h$239$1$104 ==.
                                   2086 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:239: while(!SI);                //Wait until we have data to read
      000456                       2087 00101$:
      000456 30 C3 FD         [24] 2088 	jnb	_SI,00101$
                           00037A  2089 	C$i2c.h$240$1$104 ==.
                                   2090 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:240: input_data = SMB0DAT;      //Read the data
      000459 AF C2            [24] 2091 	mov	r7,_SMB0DAT
                           00037C  2092 	C$i2c.h$241$1$104 ==.
                                   2093 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:241: SI = 0;                    //Clear SI
      00045B C2 C3            [12] 2094 	clr	_SI
                           00037E  2095 	C$i2c.h$242$1$104 ==.
                                   2096 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:242: STO = 1;                   //Set stop bit
      00045D D2 C4            [12] 2097 	setb	_STO
                           000380  2098 	C$i2c.h$243$1$104 ==.
                                   2099 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:243: while(!SI);                //Wait for stop
      00045F                       2100 00104$:
                           000380  2101 	C$i2c.h$244$1$104 ==.
                                   2102 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:244: SI = 0;
      00045F 10 C3 02         [24] 2103 	jbc	_SI,00122$
      000462 80 FB            [24] 2104 	sjmp	00104$
      000464                       2105 00122$:
                           000385  2106 	C$i2c.h$245$1$104 ==.
                                   2107 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:245: return input_data;         //Return the read data
      000464 8F 82            [24] 2108 	mov	dpl,r7
                           000387  2109 	C$i2c.h$246$1$104 ==.
                           000387  2110 	XG$i2c_read_and_stop$0$0 ==.
      000466 22               [24] 2111 	ret
                                   2112 ;------------------------------------------------------------
                                   2113 ;Allocation info for local variables in function 'i2c_write_data'
                                   2114 ;------------------------------------------------------------
                                   2115 ;start_reg                 Allocated with name '_i2c_write_data_PARM_2'
                                   2116 ;buffer                    Allocated with name '_i2c_write_data_PARM_3'
                                   2117 ;num_bytes                 Allocated with name '_i2c_write_data_PARM_4'
                                   2118 ;addr                      Allocated to registers r7 
                                   2119 ;i                         Allocated to registers 
                                   2120 ;------------------------------------------------------------
                           000388  2121 	G$i2c_write_data$0$0 ==.
                           000388  2122 	C$i2c.h$249$1$104 ==.
                                   2123 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:249: void i2c_write_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2124 ;	-----------------------------------------
                                   2125 ;	 function i2c_write_data
                                   2126 ;	-----------------------------------------
      000467                       2127 _i2c_write_data:
      000467 AF 82            [24] 2128 	mov	r7,dpl
                           00038A  2129 	C$i2c.h$253$1$106 ==.
                                   2130 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:253: i2c_start();               //initiate I2C transfer
      000469 C0 07            [24] 2131 	push	ar7
      00046B 12 04 2C         [24] 2132 	lcall	_i2c_start
      00046E D0 07            [24] 2133 	pop	ar7
                           000391  2134 	C$i2c.h$254$1$106 ==.
                                   2135 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:254: i2c_write(addr & ~0x01);   //write the desired address to the bus
      000470 74 FE            [12] 2136 	mov	a,#0xfe
      000472 5F               [12] 2137 	anl	a,r7
      000473 F5 82            [12] 2138 	mov	dpl,a
      000475 12 04 39         [24] 2139 	lcall	_i2c_write
                           000399  2140 	C$i2c.h$255$1$106 ==.
                                   2141 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:255: i2c_write(start_reg);      //write the start register to the bus
      000478 85 2C 82         [24] 2142 	mov	dpl,_i2c_write_data_PARM_2
      00047B 12 04 39         [24] 2143 	lcall	_i2c_write
                           00039F  2144 	C$i2c.h$256$1$106 ==.
                                   2145 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:256: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      00047E 7F 00            [12] 2146 	mov	r7,#0x00
      000480                       2147 00103$:
      000480 AD 30            [24] 2148 	mov	r5,_i2c_write_data_PARM_4
      000482 7E 00            [12] 2149 	mov	r6,#0x00
      000484 1D               [12] 2150 	dec	r5
      000485 BD FF 01         [24] 2151 	cjne	r5,#0xff,00114$
      000488 1E               [12] 2152 	dec	r6
      000489                       2153 00114$:
      000489 8F 03            [24] 2154 	mov	ar3,r7
      00048B 7C 00            [12] 2155 	mov	r4,#0x00
      00048D C3               [12] 2156 	clr	c
      00048E EB               [12] 2157 	mov	a,r3
      00048F 9D               [12] 2158 	subb	a,r5
      000490 EC               [12] 2159 	mov	a,r4
      000491 64 80            [12] 2160 	xrl	a,#0x80
      000493 8E F0            [24] 2161 	mov	b,r6
      000495 63 F0 80         [24] 2162 	xrl	b,#0x80
      000498 95 F0            [12] 2163 	subb	a,b
      00049A 50 1F            [24] 2164 	jnc	00101$
                           0003BD  2165 	C$i2c.h$257$1$106 ==.
                                   2166 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:257: i2c_write(buffer[i]);
      00049C EF               [12] 2167 	mov	a,r7
      00049D 25 2D            [12] 2168 	add	a,_i2c_write_data_PARM_3
      00049F FC               [12] 2169 	mov	r4,a
      0004A0 E4               [12] 2170 	clr	a
      0004A1 35 2E            [12] 2171 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004A3 FD               [12] 2172 	mov	r5,a
      0004A4 AE 2F            [24] 2173 	mov	r6,(_i2c_write_data_PARM_3 + 2)
      0004A6 8C 82            [24] 2174 	mov	dpl,r4
      0004A8 8D 83            [24] 2175 	mov	dph,r5
      0004AA 8E F0            [24] 2176 	mov	b,r6
      0004AC 12 10 98         [24] 2177 	lcall	__gptrget
      0004AF F5 82            [12] 2178 	mov	dpl,a
      0004B1 C0 07            [24] 2179 	push	ar7
      0004B3 12 04 39         [24] 2180 	lcall	_i2c_write
      0004B6 D0 07            [24] 2181 	pop	ar7
                           0003D9  2182 	C$i2c.h$256$1$106 ==.
                                   2183 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:256: for(i=0; i<num_bytes-1; i++) //write the data to the register(s)
      0004B8 0F               [12] 2184 	inc	r7
      0004B9 80 C5            [24] 2185 	sjmp	00103$
      0004BB                       2186 00101$:
                           0003DC  2187 	C$i2c.h$258$1$106 ==.
                                   2188 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:258: i2c_write_and_stop(buffer[num_bytes-1]); //Stop transfer
      0004BB AE 30            [24] 2189 	mov	r6,_i2c_write_data_PARM_4
      0004BD 7F 00            [12] 2190 	mov	r7,#0x00
      0004BF 1E               [12] 2191 	dec	r6
      0004C0 BE FF 01         [24] 2192 	cjne	r6,#0xff,00116$
      0004C3 1F               [12] 2193 	dec	r7
      0004C4                       2194 00116$:
      0004C4 EE               [12] 2195 	mov	a,r6
      0004C5 25 2D            [12] 2196 	add	a,_i2c_write_data_PARM_3
      0004C7 FE               [12] 2197 	mov	r6,a
      0004C8 EF               [12] 2198 	mov	a,r7
      0004C9 35 2E            [12] 2199 	addc	a,(_i2c_write_data_PARM_3 + 1)
      0004CB FF               [12] 2200 	mov	r7,a
      0004CC AD 2F            [24] 2201 	mov	r5,(_i2c_write_data_PARM_3 + 2)
      0004CE 8E 82            [24] 2202 	mov	dpl,r6
      0004D0 8F 83            [24] 2203 	mov	dph,r7
      0004D2 8D F0            [24] 2204 	mov	b,r5
      0004D4 12 10 98         [24] 2205 	lcall	__gptrget
      0004D7 F5 82            [12] 2206 	mov	dpl,a
      0004D9 12 04 42         [24] 2207 	lcall	_i2c_write_and_stop
                           0003FD  2208 	C$i2c.h$259$1$106 ==.
                           0003FD  2209 	XG$i2c_write_data$0$0 ==.
      0004DC 22               [24] 2210 	ret
                                   2211 ;------------------------------------------------------------
                                   2212 ;Allocation info for local variables in function 'i2c_read_data'
                                   2213 ;------------------------------------------------------------
                                   2214 ;start_reg                 Allocated with name '_i2c_read_data_PARM_2'
                                   2215 ;buffer                    Allocated with name '_i2c_read_data_PARM_3'
                                   2216 ;num_bytes                 Allocated with name '_i2c_read_data_PARM_4'
                                   2217 ;addr                      Allocated to registers r7 
                                   2218 ;j                         Allocated to registers 
                                   2219 ;------------------------------------------------------------
                           0003FE  2220 	G$i2c_read_data$0$0 ==.
                           0003FE  2221 	C$i2c.h$262$1$106 ==.
                                   2222 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:262: void i2c_read_data(unsigned char addr, unsigned char start_reg, unsigned char *buffer, unsigned char num_bytes)
                                   2223 ;	-----------------------------------------
                                   2224 ;	 function i2c_read_data
                                   2225 ;	-----------------------------------------
      0004DD                       2226 _i2c_read_data:
      0004DD AF 82            [24] 2227 	mov	r7,dpl
                           000400  2228 	C$i2c.h$265$1$108 ==.
                                   2229 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:265: i2c_start();               //Start I2C transfer
      0004DF C0 07            [24] 2230 	push	ar7
      0004E1 12 04 2C         [24] 2231 	lcall	_i2c_start
      0004E4 D0 07            [24] 2232 	pop	ar7
                           000407  2233 	C$i2c.h$266$1$108 ==.
                                   2234 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:266: i2c_write(addr & ~0x01);   //Write address of device that will be written to, send 0
      0004E6 74 FE            [12] 2235 	mov	a,#0xfe
      0004E8 5F               [12] 2236 	anl	a,r7
      0004E9 F5 82            [12] 2237 	mov	dpl,a
      0004EB C0 07            [24] 2238 	push	ar7
      0004ED 12 04 39         [24] 2239 	lcall	_i2c_write
                           000411  2240 	C$i2c.h$267$1$108 ==.
                                   2241 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:267: i2c_write_and_stop(start_reg); //Write & stop the 1st register to be read
      0004F0 85 31 82         [24] 2242 	mov	dpl,_i2c_read_data_PARM_2
      0004F3 12 04 42         [24] 2243 	lcall	_i2c_write_and_stop
                           000417  2244 	C$i2c.h$268$1$108 ==.
                                   2245 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:268: i2c_start();               //Start I2C transfer
      0004F6 12 04 2C         [24] 2246 	lcall	_i2c_start
      0004F9 D0 07            [24] 2247 	pop	ar7
                           00041C  2248 	C$i2c.h$269$1$108 ==.
                                   2249 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:269: i2c_write(addr | 0x01);    //Write address again, this time indicating a read operation
      0004FB 74 01            [12] 2250 	mov	a,#0x01
      0004FD 4F               [12] 2251 	orl	a,r7
      0004FE F5 82            [12] 2252 	mov	dpl,a
      000500 12 04 39         [24] 2253 	lcall	_i2c_write
                           000424  2254 	C$i2c.h$270$1$108 ==.
                                   2255 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:270: for(j = 0; j < num_bytes - 1; j++)
      000503 7F 00            [12] 2256 	mov	r7,#0x00
      000505                       2257 00103$:
      000505 AD 35            [24] 2258 	mov	r5,_i2c_read_data_PARM_4
      000507 7E 00            [12] 2259 	mov	r6,#0x00
      000509 1D               [12] 2260 	dec	r5
      00050A BD FF 01         [24] 2261 	cjne	r5,#0xff,00114$
      00050D 1E               [12] 2262 	dec	r6
      00050E                       2263 00114$:
      00050E 8F 03            [24] 2264 	mov	ar3,r7
      000510 7C 00            [12] 2265 	mov	r4,#0x00
      000512 C3               [12] 2266 	clr	c
      000513 EB               [12] 2267 	mov	a,r3
      000514 9D               [12] 2268 	subb	a,r5
      000515 EC               [12] 2269 	mov	a,r4
      000516 64 80            [12] 2270 	xrl	a,#0x80
      000518 8E F0            [24] 2271 	mov	b,r6
      00051A 63 F0 80         [24] 2272 	xrl	b,#0x80
      00051D 95 F0            [12] 2273 	subb	a,b
      00051F 50 2E            [24] 2274 	jnc	00101$
                           000442  2275 	C$i2c.h$272$2$109 ==.
                                   2276 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:272: AA = 1;                //Set acknowledge bit
      000521 D2 C2            [12] 2277 	setb	_AA
                           000444  2278 	C$i2c.h$273$2$109 ==.
                                   2279 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:273: buffer[j] = i2c_read();//Read data, save it in buffer
      000523 EF               [12] 2280 	mov	a,r7
      000524 25 32            [12] 2281 	add	a,_i2c_read_data_PARM_3
      000526 FC               [12] 2282 	mov	r4,a
      000527 E4               [12] 2283 	clr	a
      000528 35 33            [12] 2284 	addc	a,(_i2c_read_data_PARM_3 + 1)
      00052A FD               [12] 2285 	mov	r5,a
      00052B AE 34            [24] 2286 	mov	r6,(_i2c_read_data_PARM_3 + 2)
      00052D C0 07            [24] 2287 	push	ar7
      00052F C0 06            [24] 2288 	push	ar6
      000531 C0 05            [24] 2289 	push	ar5
      000533 C0 04            [24] 2290 	push	ar4
      000535 12 04 4D         [24] 2291 	lcall	_i2c_read
      000538 AB 82            [24] 2292 	mov	r3,dpl
      00053A D0 04            [24] 2293 	pop	ar4
      00053C D0 05            [24] 2294 	pop	ar5
      00053E D0 06            [24] 2295 	pop	ar6
      000540 D0 07            [24] 2296 	pop	ar7
      000542 8C 82            [24] 2297 	mov	dpl,r4
      000544 8D 83            [24] 2298 	mov	dph,r5
      000546 8E F0            [24] 2299 	mov	b,r6
      000548 EB               [12] 2300 	mov	a,r3
      000549 12 09 46         [24] 2301 	lcall	__gptrput
                           00046D  2302 	C$i2c.h$270$1$108 ==.
                                   2303 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:270: for(j = 0; j < num_bytes - 1; j++)
      00054C 0F               [12] 2304 	inc	r7
      00054D 80 B6            [24] 2305 	sjmp	00103$
      00054F                       2306 00101$:
                           000470  2307 	C$i2c.h$275$1$108 ==.
                                   2308 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:275: AA = 0;
      00054F C2 C2            [12] 2309 	clr	_AA
                           000472  2310 	C$i2c.h$276$1$108 ==.
                                   2311 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:276: buffer[num_bytes - 1] = i2c_read_and_stop(); //Read the last byte and stop, save it in the buffer
      000551 AE 35            [24] 2312 	mov	r6,_i2c_read_data_PARM_4
      000553 7F 00            [12] 2313 	mov	r7,#0x00
      000555 1E               [12] 2314 	dec	r6
      000556 BE FF 01         [24] 2315 	cjne	r6,#0xff,00116$
      000559 1F               [12] 2316 	dec	r7
      00055A                       2317 00116$:
      00055A EE               [12] 2318 	mov	a,r6
      00055B 25 32            [12] 2319 	add	a,_i2c_read_data_PARM_3
      00055D FE               [12] 2320 	mov	r6,a
      00055E EF               [12] 2321 	mov	a,r7
      00055F 35 33            [12] 2322 	addc	a,(_i2c_read_data_PARM_3 + 1)
      000561 FF               [12] 2323 	mov	r7,a
      000562 AD 34            [24] 2324 	mov	r5,(_i2c_read_data_PARM_3 + 2)
      000564 C0 07            [24] 2325 	push	ar7
      000566 C0 06            [24] 2326 	push	ar6
      000568 C0 05            [24] 2327 	push	ar5
      00056A 12 04 56         [24] 2328 	lcall	_i2c_read_and_stop
      00056D AC 82            [24] 2329 	mov	r4,dpl
      00056F D0 05            [24] 2330 	pop	ar5
      000571 D0 06            [24] 2331 	pop	ar6
      000573 D0 07            [24] 2332 	pop	ar7
      000575 8E 82            [24] 2333 	mov	dpl,r6
      000577 8F 83            [24] 2334 	mov	dph,r7
      000579 8D F0            [24] 2335 	mov	b,r5
      00057B EC               [12] 2336 	mov	a,r4
      00057C 12 09 46         [24] 2337 	lcall	__gptrput
                           0004A0  2338 	C$i2c.h$277$1$108 ==.
                           0004A0  2339 	XG$i2c_read_data$0$0 ==.
      00057F 22               [24] 2340 	ret
                                   2341 ;------------------------------------------------------------
                                   2342 ;Allocation info for local variables in function 'Accel_Init'
                                   2343 ;------------------------------------------------------------
                           0004A1  2344 	G$Accel_Init$0$0 ==.
                           0004A1  2345 	C$i2c.h$286$1$108 ==.
                                   2346 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:286: void Accel_Init(void)
                                   2347 ;	-----------------------------------------
                                   2348 ;	 function Accel_Init
                                   2349 ;	-----------------------------------------
      000580                       2350 _Accel_Init:
                           0004A1  2351 	C$i2c.h$290$1$111 ==.
                                   2352 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:290: Data2[0]=0x23;	//normal power mode, 50Hz ODR, y & x axes enabled
      000580 75 22 23         [24] 2353 	mov	_Data2,#0x23
                           0004A4  2354 	C$i2c.h$292$1$111 ==.
                                   2355 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:292: Data2[1]=0x00;	//Default - no filtering
      000583 75 23 00         [24] 2356 	mov	(_Data2 + 0x0001),#0x00
                           0004A7  2357 	C$i2c.h$293$1$111 ==.
                                   2358 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:293: Data2[1]=0x10;	//filtered data selected, HPF = 1.0->0.125Hz
      000586 75 23 10         [24] 2359 	mov	(_Data2 + 0x0001),#0x10
                           0004AA  2360 	C$i2c.h$294$1$111 ==.
                                   2361 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:294: Data2[2]=0x00;	//default - no interrupts enabled
      000589 75 24 00         [24] 2362 	mov	(_Data2 + 0x0002),#0x00
                           0004AD  2363 	C$i2c.h$296$1$111 ==.
                                   2364 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:296: i2c_write_data(addr_accel, 0x20, Data2, 1);
      00058C 75 2D 22         [24] 2365 	mov	_i2c_write_data_PARM_3,#_Data2
      00058F 75 2E 00         [24] 2366 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000592 75 2F 40         [24] 2367 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000595 75 2C 20         [24] 2368 	mov	_i2c_write_data_PARM_2,#0x20
      000598 75 30 01         [24] 2369 	mov	_i2c_write_data_PARM_4,#0x01
      00059B 75 82 30         [24] 2370 	mov	dpl,#0x30
      00059E 12 04 67         [24] 2371 	lcall	_i2c_write_data
                           0004C2  2372 	C$i2c.h$302$1$111 ==.
                           0004C2  2373 	XG$Accel_Init$0$0 ==.
      0005A1 22               [24] 2374 	ret
                                   2375 ;------------------------------------------------------------
                                   2376 ;Allocation info for local variables in function 'Accel_Init_C'
                                   2377 ;------------------------------------------------------------
                           0004C3  2378 	G$Accel_Init_C$0$0 ==.
                           0004C3  2379 	C$i2c.h$305$1$111 ==.
                                   2380 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:305: void Accel_Init_C(void)
                                   2381 ;	-----------------------------------------
                                   2382 ;	 function Accel_Init_C
                                   2383 ;	-----------------------------------------
      0005A2                       2384 _Accel_Init_C:
                           0004C3  2385 	C$i2c.h$310$1$113 ==.
                                   2386 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:310: Data2[0]=0x04;	//set register address auto increment bit 
      0005A2 75 22 04         [24] 2387 	mov	_Data2,#0x04
                           0004C6  2388 	C$i2c.h$311$1$113 ==.
                                   2389 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:311: i2c_write_data(addr_accelC, 0x23, Data2, 1);
      0005A5 75 2D 22         [24] 2390 	mov	_i2c_write_data_PARM_3,#_Data2
      0005A8 75 2E 00         [24] 2391 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0005AB 75 2F 40         [24] 2392 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005AE 75 2C 23         [24] 2393 	mov	_i2c_write_data_PARM_2,#0x23
      0005B1 75 30 01         [24] 2394 	mov	_i2c_write_data_PARM_4,#0x01
      0005B4 75 82 3A         [24] 2395 	mov	dpl,#0x3a
      0005B7 12 04 67         [24] 2396 	lcall	_i2c_write_data
                           0004DB  2397 	C$i2c.h$313$1$113 ==.
                                   2398 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:313: Data2[0]=0x6B;	//R20 normal power mode, 800Hz ODR, y & x axes enabled
      0005BA 75 22 6B         [24] 2399 	mov	_Data2,#0x6b
                           0004DE  2400 	C$i2c.h$315$1$113 ==.
                                   2401 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:315: Data2[1]=0x00;	//R21 Default - no HP filtering
      0005BD 75 23 00         [24] 2402 	mov	(_Data2 + 0x0001),#0x00
                           0004E1  2403 	C$i2c.h$317$1$113 ==.
                                   2404 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:317: Data2[2]=0x00;	//R22 Default - no interrupts enabled
      0005C0 75 24 00         [24] 2405 	mov	(_Data2 + 0x0002),#0x00
                           0004E4  2406 	C$i2c.h$318$1$113 ==.
                                   2407 ;	C:/Program Files/SDCC/bin/../include/mcs51/i2c.h:318: i2c_write_data(addr_accelC, 0x20, Data2, 1);
      0005C3 75 2D 22         [24] 2408 	mov	_i2c_write_data_PARM_3,#_Data2
      0005C6 75 2E 00         [24] 2409 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      0005C9 75 2F 40         [24] 2410 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      0005CC 75 2C 20         [24] 2411 	mov	_i2c_write_data_PARM_2,#0x20
      0005CF 75 30 01         [24] 2412 	mov	_i2c_write_data_PARM_4,#0x01
      0005D2 75 82 3A         [24] 2413 	mov	dpl,#0x3a
      0005D5 12 04 67         [24] 2414 	lcall	_i2c_write_data
                           0004F9  2415 	C$i2c.h$320$1$113 ==.
                           0004F9  2416 	XG$Accel_Init_C$0$0 ==.
      0005D8 22               [24] 2417 	ret
                                   2418 ;------------------------------------------------------------
                                   2419 ;Allocation info for local variables in function 'main'
                                   2420 ;------------------------------------------------------------
                           0004FA  2421 	G$main$0$0 ==.
                           0004FA  2422 	C$lab3_3.c$64$1$113 ==.
                                   2423 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:64: void main(void){
                                   2424 ;	-----------------------------------------
                                   2425 ;	 function main
                                   2426 ;	-----------------------------------------
      0005D9                       2427 _main:
                           0004FA  2428 	C$lab3_3.c$66$1$125 ==.
                                   2429 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:66: Sys_Init();
      0005D9 12 01 16         [24] 2430 	lcall	_Sys_Init
                           0004FD  2431 	C$lab3_3.c$67$1$125 ==.
                                   2432 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:67: putchar(' '); //the quotes in this line may not format correctly
      0005DC 75 82 20         [24] 2433 	mov	dpl,#0x20
      0005DF 12 01 29         [24] 2434 	lcall	_putchar
                           000503  2435 	C$lab3_3.c$68$1$125 ==.
                                   2436 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:68: Port_Init();
      0005E2 12 06 DE         [24] 2437 	lcall	_Port_Init
                           000506  2438 	C$lab3_3.c$69$1$125 ==.
                                   2439 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:69: XBR0_Init();
      0005E5 12 06 E5         [24] 2440 	lcall	_XBR0_Init
                           000509  2441 	C$lab3_3.c$70$1$125 ==.
                                   2442 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:70: PCA_Init();
      0005E8 12 06 E9         [24] 2443 	lcall	_PCA_Init
                           00050C  2444 	C$lab3_3.c$71$1$125 ==.
                                   2445 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:71: SMB_Init();
      0005EB 12 06 FB         [24] 2446 	lcall	_SMB_Init
                           00050F  2447 	C$lab3_3.c$74$1$125 ==.
                                   2448 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:74: printf("\rEmbedded Control Steering Calibration & Motor Control\n");
      0005EE 74 E1            [12] 2449 	mov	a,#___str_3
      0005F0 C0 E0            [24] 2450 	push	acc
      0005F2 74 10            [12] 2451 	mov	a,#(___str_3 >> 8)
      0005F4 C0 E0            [24] 2452 	push	acc
      0005F6 74 80            [12] 2453 	mov	a,#0x80
      0005F8 C0 E0            [24] 2454 	push	acc
      0005FA 12 0A 9D         [24] 2455 	lcall	_printf
      0005FD 15 81            [12] 2456 	dec	sp
      0005FF 15 81            [12] 2457 	dec	sp
      000601 15 81            [12] 2458 	dec	sp
                           000524  2459 	C$lab3_3.c$75$1$125 ==.
                                   2460 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:75: printf("\rPut the slide switch in the \"on\" position\n");
      000603 74 19            [12] 2461 	mov	a,#___str_4
      000605 C0 E0            [24] 2462 	push	acc
      000607 74 11            [12] 2463 	mov	a,#(___str_4 >> 8)
      000609 C0 E0            [24] 2464 	push	acc
      00060B 74 80            [12] 2465 	mov	a,#0x80
      00060D C0 E0            [24] 2466 	push	acc
      00060F 12 0A 9D         [24] 2467 	lcall	_printf
      000612 15 81            [12] 2468 	dec	sp
      000614 15 81            [12] 2469 	dec	sp
      000616 15 81            [12] 2470 	dec	sp
                           000539  2471 	C$lab3_3.c$77$1$125 ==.
                                   2472 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:77: PW_s = PW_CENTER;
      000618 85 4D 5B         [24] 2473 	mov	_PW_s,_PW_CENTER
      00061B 85 4E 5C         [24] 2474 	mov	(_PW_s + 1),(_PW_CENTER + 1)
                           00053F  2475 	C$lab3_3.c$78$1$125 ==.
                                   2476 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:78: PW_m = PW_CENTER;
      00061E 85 4D 53         [24] 2477 	mov	_PW_m,_PW_CENTER
      000621 85 4E 54         [24] 2478 	mov	(_PW_m + 1),(_PW_CENTER + 1)
                           000545  2479 	C$lab3_3.c$81$1$125 ==.
                                   2480 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:81: PCA0CP2 = PW_CENTER;
      000624 85 4D EC         [24] 2481 	mov	((_PCA0CP2 >> 0) & 0xFF),_PW_CENTER
      000627 85 4E FC         [24] 2482 	mov	((_PCA0CP2 >> 8) & 0xFF),(_PW_CENTER + 1)
                           00054B  2483 	C$lab3_3.c$82$1$125 ==.
                                   2484 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:82: PCA0CP0 = PW_CENTER;
      00062A 85 4D EA         [24] 2485 	mov	((_PCA0CP0 >> 0) & 0xFF),_PW_CENTER
      00062D 85 4E FA         [24] 2486 	mov	((_PCA0CP0 >> 8) & 0xFF),(_PW_CENTER + 1)
                           000551  2487 	C$lab3_3.c$83$1$125 ==.
                                   2488 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:83: Counts = 0;
      000630 E4               [12] 2489 	clr	a
      000631 F5 60            [12] 2490 	mov	_Counts,a
      000633 F5 61            [12] 2491 	mov	(_Counts + 1),a
                           000556  2492 	C$lab3_3.c$84$1$125 ==.
                                   2493 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:84: while(Counts < 50){}
      000635                       2494 00101$:
      000635 C3               [12] 2495 	clr	c
      000636 E5 60            [12] 2496 	mov	a,_Counts
      000638 94 32            [12] 2497 	subb	a,#0x32
      00063A E5 61            [12] 2498 	mov	a,(_Counts + 1)
      00063C 64 80            [12] 2499 	xrl	a,#0x80
      00063E 94 80            [12] 2500 	subb	a,#0x80
      000640 40 F3            [24] 2501 	jc	00101$
                           000563  2502 	C$lab3_3.c$86$1$125 ==.
                                   2503 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:86: while(1){
      000642                       2504 00112$:
                           000563  2505 	C$lab3_3.c$87$2$127 ==.
                                   2506 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:87: if(SS){
      000642 20 B7 03         [24] 2507 	jb	_SS,00132$
      000645 02 06 CE         [24] 2508 	ljmp	00109$
      000648                       2509 00132$:
                           000569  2510 	C$lab3_3.c$88$3$128 ==.
                                   2511 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:88: if(new_heading){
      000648 E5 38            [12] 2512 	mov	a,_new_heading
      00064A 45 39            [12] 2513 	orl	a,(_new_heading + 1)
      00064C 60 30            [24] 2514 	jz	00105$
                           00056F  2515 	C$lab3_3.c$89$4$129 ==.
                                   2516 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:89: new_heading = 0;
      00064E E4               [12] 2517 	clr	a
      00064F F5 38            [12] 2518 	mov	_new_heading,a
      000651 F5 39            [12] 2519 	mov	(_new_heading + 1),a
                           000574  2520 	C$lab3_3.c$93$4$129 ==.
                                   2521 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:93: error = desired_heading - ReadCompass();
      000653 12 07 8A         [24] 2522 	lcall	_ReadCompass
      000656 AE 82            [24] 2523 	mov	r6,dpl
      000658 AF 83            [24] 2524 	mov	r7,dph
      00065A E5 3E            [12] 2525 	mov	a,_desired_heading
      00065C C3               [12] 2526 	clr	c
      00065D 9E               [12] 2527 	subb	a,r6
      00065E F5 40            [12] 2528 	mov	_error,a
      000660 E5 3F            [12] 2529 	mov	a,(_desired_heading + 1)
      000662 9F               [12] 2530 	subb	a,r7
      000663 F5 41            [12] 2531 	mov	(_error + 1),a
                           000586  2532 	C$lab3_3.c$94$4$129 ==.
                                   2533 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:94: printf("\rerror: %d\n", error);
      000665 C0 40            [24] 2534 	push	_error
      000667 C0 41            [24] 2535 	push	(_error + 1)
      000669 74 45            [12] 2536 	mov	a,#___str_5
      00066B C0 E0            [24] 2537 	push	acc
      00066D 74 11            [12] 2538 	mov	a,#(___str_5 >> 8)
      00066F C0 E0            [24] 2539 	push	acc
      000671 74 80            [12] 2540 	mov	a,#0x80
      000673 C0 E0            [24] 2541 	push	acc
      000675 12 0A 9D         [24] 2542 	lcall	_printf
      000678 E5 81            [12] 2543 	mov	a,sp
      00067A 24 FB            [12] 2544 	add	a,#0xfb
      00067C F5 81            [12] 2545 	mov	sp,a
      00067E                       2546 00105$:
                           00059F  2547 	C$lab3_3.c$96$3$128 ==.
                                   2548 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:96: if(new_range){
      00067E E5 47            [12] 2549 	mov	a,_new_range
      000680 45 48            [12] 2550 	orl	a,(_new_range + 1)
      000682 60 0E            [24] 2551 	jz	00107$
                           0005A5  2552 	C$lab3_3.c$97$4$130 ==.
                                   2553 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:97: new_range = 0;
      000684 E4               [12] 2554 	clr	a
      000685 F5 47            [12] 2555 	mov	_new_range,a
      000687 F5 48            [12] 2556 	mov	(_new_range + 1),a
                           0005AA  2557 	C$lab3_3.c$98$4$130 ==.
                                   2558 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:98: range_ = ReadRanger();
      000689 12 07 D6         [24] 2559 	lcall	_ReadRanger
      00068C 85 82 49         [24] 2560 	mov	_range_,dpl
      00068F 85 83 4A         [24] 2561 	mov	(_range_ + 1),dph
      000692                       2562 00107$:
                           0005B3  2563 	C$lab3_3.c$102$3$128 ==.
                                   2564 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:102: AdjustSpeed();
      000692 12 08 1E         [24] 2565 	lcall	_AdjustSpeed
                           0005B6  2566 	C$lab3_3.c$103$3$128 ==.
                                   2567 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:103: AdjustSteering();
      000695 12 08 92         [24] 2568 	lcall	_AdjustSteering
                           0005B9  2569 	C$lab3_3.c$105$3$128 ==.
                                   2570 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:105: printf("\rPW_s: %d\n", PW_s);
      000698 C0 5B            [24] 2571 	push	_PW_s
      00069A C0 5C            [24] 2572 	push	(_PW_s + 1)
      00069C 74 51            [12] 2573 	mov	a,#___str_6
      00069E C0 E0            [24] 2574 	push	acc
      0006A0 74 11            [12] 2575 	mov	a,#(___str_6 >> 8)
      0006A2 C0 E0            [24] 2576 	push	acc
      0006A4 74 80            [12] 2577 	mov	a,#0x80
      0006A6 C0 E0            [24] 2578 	push	acc
      0006A8 12 0A 9D         [24] 2579 	lcall	_printf
      0006AB E5 81            [12] 2580 	mov	a,sp
      0006AD 24 FB            [12] 2581 	add	a,#0xfb
      0006AF F5 81            [12] 2582 	mov	sp,a
                           0005D2  2583 	C$lab3_3.c$107$3$128 ==.
                                   2584 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:107: PCA0CP0 = 0xFFFF - PW_s;  //SERVO
      0006B1 74 FF            [12] 2585 	mov	a,#0xff
      0006B3 C3               [12] 2586 	clr	c
      0006B4 95 5B            [12] 2587 	subb	a,_PW_s
      0006B6 F5 EA            [12] 2588 	mov	((_PCA0CP0 >> 0) & 0xFF),a
      0006B8 74 FF            [12] 2589 	mov	a,#0xff
      0006BA 95 5C            [12] 2590 	subb	a,(_PW_s + 1)
      0006BC F5 FA            [12] 2591 	mov	((_PCA0CP0 >> 8) & 0xFF),a
                           0005DF  2592 	C$lab3_3.c$108$3$128 ==.
                                   2593 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:108: PCA0CP2 = 0xFFFF - PW_m;  //MOTOR
      0006BE 74 FF            [12] 2594 	mov	a,#0xff
      0006C0 C3               [12] 2595 	clr	c
      0006C1 95 53            [12] 2596 	subb	a,_PW_m
      0006C3 F5 EC            [12] 2597 	mov	((_PCA0CP2 >> 0) & 0xFF),a
      0006C5 74 FF            [12] 2598 	mov	a,#0xff
      0006C7 95 54            [12] 2599 	subb	a,(_PW_m + 1)
      0006C9 F5 FC            [12] 2600 	mov	((_PCA0CP2 >> 8) & 0xFF),a
      0006CB 02 06 42         [24] 2601 	ljmp	00112$
      0006CE                       2602 00109$:
                           0005EF  2603 	C$lab3_3.c$111$3$131 ==.
                                   2604 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:111: PCA0CP2 = PW_CENTER;
      0006CE 85 4D EC         [24] 2605 	mov	((_PCA0CP2 >> 0) & 0xFF),_PW_CENTER
      0006D1 85 4E FC         [24] 2606 	mov	((_PCA0CP2 >> 8) & 0xFF),(_PW_CENTER + 1)
                           0005F5  2607 	C$lab3_3.c$112$3$131 ==.
                                   2608 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:112: PCA0CP0 = PW_CENTER;
      0006D4 85 4D EA         [24] 2609 	mov	((_PCA0CP0 >> 0) & 0xFF),_PW_CENTER
      0006D7 85 4E FA         [24] 2610 	mov	((_PCA0CP0 >> 8) & 0xFF),(_PW_CENTER + 1)
      0006DA 02 06 42         [24] 2611 	ljmp	00112$
                           0005FE  2612 	C$lab3_3.c$117$1$125 ==.
                           0005FE  2613 	XG$main$0$0 ==.
      0006DD 22               [24] 2614 	ret
                                   2615 ;------------------------------------------------------------
                                   2616 ;Allocation info for local variables in function 'Port_Init'
                                   2617 ;------------------------------------------------------------
                           0005FF  2618 	G$Port_Init$0$0 ==.
                           0005FF  2619 	C$lab3_3.c$122$1$125 ==.
                                   2620 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:122: void Port_Init(){
                                   2621 ;	-----------------------------------------
                                   2622 ;	 function Port_Init
                                   2623 ;	-----------------------------------------
      0006DE                       2624 _Port_Init:
                           0005FF  2625 	C$lab3_3.c$123$1$132 ==.
                                   2626 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:123: P1MDOUT |= 0x01;
      0006DE 43 A5 01         [24] 2627 	orl	_P1MDOUT,#0x01
                           000602  2628 	C$lab3_3.c$124$1$132 ==.
                                   2629 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:124: P1MDOUT |= 0x04;
      0006E1 43 A5 04         [24] 2630 	orl	_P1MDOUT,#0x04
                           000605  2631 	C$lab3_3.c$125$1$132 ==.
                           000605  2632 	XG$Port_Init$0$0 ==.
      0006E4 22               [24] 2633 	ret
                                   2634 ;------------------------------------------------------------
                                   2635 ;Allocation info for local variables in function 'XBR0_Init'
                                   2636 ;------------------------------------------------------------
                           000606  2637 	G$XBR0_Init$0$0 ==.
                           000606  2638 	C$lab3_3.c$130$1$132 ==.
                                   2639 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:130: void XBR0_Init(){
                                   2640 ;	-----------------------------------------
                                   2641 ;	 function XBR0_Init
                                   2642 ;	-----------------------------------------
      0006E5                       2643 _XBR0_Init:
                           000606  2644 	C$lab3_3.c$131$1$133 ==.
                                   2645 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:131: XBR0 = 0x27;  //configure crossbar as directed in the laboratory
      0006E5 75 E1 27         [24] 2646 	mov	_XBR0,#0x27
                           000609  2647 	C$lab3_3.c$133$1$133 ==.
                           000609  2648 	XG$XBR0_Init$0$0 ==.
      0006E8 22               [24] 2649 	ret
                                   2650 ;------------------------------------------------------------
                                   2651 ;Allocation info for local variables in function 'PCA_Init'
                                   2652 ;------------------------------------------------------------
                           00060A  2653 	G$PCA_Init$0$0 ==.
                           00060A  2654 	C$lab3_3.c$138$1$133 ==.
                                   2655 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:138: void PCA_Init(void){
                                   2656 ;	-----------------------------------------
                                   2657 ;	 function PCA_Init
                                   2658 ;	-----------------------------------------
      0006E9                       2659 _PCA_Init:
                           00060A  2660 	C$lab3_3.c$139$1$135 ==.
                                   2661 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:139: PCA0CN |= 0x40;    /* Enable PCA counter */
      0006E9 43 D8 40         [24] 2662 	orl	_PCA0CN,#0x40
                           00060D  2663 	C$lab3_3.c$140$1$135 ==.
                                   2664 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:140: PCA0MD = 0x81;     /* SYSCLK/12, enable CF interrupts, suspend when idle */
      0006EC 75 D9 81         [24] 2665 	mov	_PCA0MD,#0x81
                           000610  2666 	C$lab3_3.c$141$1$135 ==.
                                   2667 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:141: PCA0CPM0 = 0xC2;   /* CCM0 in 16-bit compare mode */
      0006EF 75 DA C2         [24] 2668 	mov	_PCA0CPM0,#0xc2
                           000613  2669 	C$lab3_3.c$142$1$135 ==.
                                   2670 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:142: PCA0CPM2 = 0XC2;
      0006F2 75 DC C2         [24] 2671 	mov	_PCA0CPM2,#0xc2
                           000616  2672 	C$lab3_3.c$143$1$135 ==.
                                   2673 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:143: EIE1 |= 0x08;
      0006F5 43 E6 08         [24] 2674 	orl	_EIE1,#0x08
                           000619  2675 	C$lab3_3.c$144$1$135 ==.
                                   2676 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:144: EA = 1;
      0006F8 D2 AF            [12] 2677 	setb	_EA
                           00061B  2678 	C$lab3_3.c$145$1$135 ==.
                           00061B  2679 	XG$PCA_Init$0$0 ==.
      0006FA 22               [24] 2680 	ret
                                   2681 ;------------------------------------------------------------
                                   2682 ;Allocation info for local variables in function 'SMB_Init'
                                   2683 ;------------------------------------------------------------
                           00061C  2684 	G$SMB_Init$0$0 ==.
                           00061C  2685 	C$lab3_3.c$147$1$135 ==.
                                   2686 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:147: void SMB_Init(void){
                                   2687 ;	-----------------------------------------
                                   2688 ;	 function SMB_Init
                                   2689 ;	-----------------------------------------
      0006FB                       2690 _SMB_Init:
                           00061C  2691 	C$lab3_3.c$148$1$137 ==.
                                   2692 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:148: SMB0CR = 0x93;
      0006FB 75 CF 93         [24] 2693 	mov	_SMB0CR,#0x93
                           00061F  2694 	C$lab3_3.c$149$1$137 ==.
                                   2695 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:149: ENSMB = 1;
      0006FE D2 C6            [12] 2696 	setb	_ENSMB
                           000621  2697 	C$lab3_3.c$150$1$137 ==.
                           000621  2698 	XG$SMB_Init$0$0 ==.
      000700 22               [24] 2699 	ret
                                   2700 ;------------------------------------------------------------
                                   2701 ;Allocation info for local variables in function 'PCA_ISR'
                                   2702 ;------------------------------------------------------------
                           000622  2703 	G$PCA_ISR$0$0 ==.
                           000622  2704 	C$lab3_3.c$154$1$137 ==.
                                   2705 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:154: void PCA_ISR ( void ) __interrupt 9{
                                   2706 ;	-----------------------------------------
                                   2707 ;	 function PCA_ISR
                                   2708 ;	-----------------------------------------
      000701                       2709 _PCA_ISR:
      000701 C0 E0            [24] 2710 	push	acc
      000703 C0 D0            [24] 2711 	push	psw
                           000626  2712 	C$lab3_3.c$157$1$139 ==.
                                   2713 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:157: if(CF){
                           000626  2714 	C$lab3_3.c$158$2$140 ==.
                                   2715 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:158: CF = 0;
      000705 10 DF 02         [24] 2716 	jbc	_CF,00118$
      000708 80 40            [24] 2717 	sjmp	00106$
      00070A                       2718 00118$:
                           00062B  2719 	C$lab3_3.c$159$2$140 ==.
                                   2720 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:159: h_count++;
      00070A 05 36            [12] 2721 	inc	_h_count
      00070C E4               [12] 2722 	clr	a
      00070D B5 36 02         [24] 2723 	cjne	a,_h_count,00119$
      000710 05 37            [12] 2724 	inc	(_h_count + 1)
      000712                       2725 00119$:
                           000633  2726 	C$lab3_3.c$160$2$140 ==.
                                   2727 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:160: r_count++;
      000712 05 45            [12] 2728 	inc	_r_count
      000714 E4               [12] 2729 	clr	a
      000715 B5 45 02         [24] 2730 	cjne	a,_r_count,00120$
      000718 05 46            [12] 2731 	inc	(_r_count + 1)
      00071A                       2732 00120$:
                           00063B  2733 	C$lab3_3.c$161$2$140 ==.
                                   2734 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:161: if(h_count >= 3){
      00071A C3               [12] 2735 	clr	c
      00071B E5 36            [12] 2736 	mov	a,_h_count
      00071D 94 03            [12] 2737 	subb	a,#0x03
      00071F E5 37            [12] 2738 	mov	a,(_h_count + 1)
      000721 94 00            [12] 2739 	subb	a,#0x00
      000723 40 0A            [24] 2740 	jc	00102$
                           000646  2741 	C$lab3_3.c$162$3$141 ==.
                                   2742 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:162: new_heading = 1;
      000725 75 38 01         [24] 2743 	mov	_new_heading,#0x01
                           000649  2744 	C$lab3_3.c$163$3$141 ==.
                                   2745 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:163: h_count = 0;
      000728 E4               [12] 2746 	clr	a
      000729 F5 39            [12] 2747 	mov	(_new_heading + 1),a
      00072B F5 36            [12] 2748 	mov	_h_count,a
      00072D F5 37            [12] 2749 	mov	(_h_count + 1),a
      00072F                       2750 00102$:
                           000650  2751 	C$lab3_3.c$165$2$140 ==.
                                   2752 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:165: if(r_count >= 4){
      00072F C3               [12] 2753 	clr	c
      000730 E5 45            [12] 2754 	mov	a,_r_count
      000732 94 04            [12] 2755 	subb	a,#0x04
      000734 E5 46            [12] 2756 	mov	a,(_r_count + 1)
      000736 94 00            [12] 2757 	subb	a,#0x00
      000738 40 0A            [24] 2758 	jc	00104$
                           00065B  2759 	C$lab3_3.c$166$3$142 ==.
                                   2760 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:166: new_range = 1;
      00073A 75 47 01         [24] 2761 	mov	_new_range,#0x01
                           00065E  2762 	C$lab3_3.c$167$3$142 ==.
                                   2763 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:167: r_count = 0;
      00073D E4               [12] 2764 	clr	a
      00073E F5 48            [12] 2765 	mov	(_new_range + 1),a
      000740 F5 45            [12] 2766 	mov	_r_count,a
      000742 F5 46            [12] 2767 	mov	(_r_count + 1),a
      000744                       2768 00104$:
                           000665  2769 	C$lab3_3.c$169$2$140 ==.
                                   2770 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:169: PCA0 = 28614;
      000744 75 E9 C6         [24] 2771 	mov	((_PCA0 >> 0) & 0xFF),#0xc6
      000747 75 F9 6F         [24] 2772 	mov	((_PCA0 >> 8) & 0xFF),#0x6f
      00074A                       2773 00106$:
                           00066B  2774 	C$lab3_3.c$171$1$139 ==.
                                   2775 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:171: Counts++;
      00074A 05 60            [12] 2776 	inc	_Counts
      00074C E4               [12] 2777 	clr	a
      00074D B5 60 02         [24] 2778 	cjne	a,_Counts,00123$
      000750 05 61            [12] 2779 	inc	(_Counts + 1)
      000752                       2780 00123$:
                           000673  2781 	C$lab3_3.c$172$1$139 ==.
                                   2782 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:172: PCA0CN &= 0xC0; //Handle other PCA interrupt sources
      000752 53 D8 C0         [24] 2783 	anl	_PCA0CN,#0xc0
      000755 D0 D0            [24] 2784 	pop	psw
      000757 D0 E0            [24] 2785 	pop	acc
                           00067A  2786 	C$lab3_3.c$173$1$139 ==.
                           00067A  2787 	XG$PCA_ISR$0$0 ==.
      000759 32               [24] 2788 	reti
                                   2789 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2790 ;	eliminated unneeded push/pop dpl
                                   2791 ;	eliminated unneeded push/pop dph
                                   2792 ;	eliminated unneeded push/pop b
                                   2793 ;------------------------------------------------------------
                                   2794 ;Allocation info for local variables in function 'wait'
                                   2795 ;------------------------------------------------------------
                           00067B  2796 	G$wait$0$0 ==.
                           00067B  2797 	C$lab3_3.c$175$1$139 ==.
                                   2798 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:175: void wait(void){
                                   2799 ;	-----------------------------------------
                                   2800 ;	 function wait
                                   2801 ;	-----------------------------------------
      00075A                       2802 _wait:
                           00067B  2803 	C$lab3_3.c$176$1$144 ==.
                                   2804 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:176: Counts = 0;
      00075A E4               [12] 2805 	clr	a
      00075B F5 60            [12] 2806 	mov	_Counts,a
      00075D F5 61            [12] 2807 	mov	(_Counts + 1),a
                           000680  2808 	C$lab3_3.c$177$1$144 ==.
                                   2809 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:177: PCA0CP2 = 0xFFFF - PW_CENTER;
      00075F 14               [12] 2810 	dec	a
      000760 C3               [12] 2811 	clr	c
      000761 95 4D            [12] 2812 	subb	a,_PW_CENTER
      000763 F5 EC            [12] 2813 	mov	((_PCA0CP2 >> 0) & 0xFF),a
      000765 74 FF            [12] 2814 	mov	a,#0xff
      000767 95 4E            [12] 2815 	subb	a,(_PW_CENTER + 1)
      000769 F5 FC            [12] 2816 	mov	((_PCA0CP2 >> 8) & 0xFF),a
                           00068C  2817 	C$lab3_3.c$178$1$144 ==.
                                   2818 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:178: while(Counts*65536 < 147456); 		//wait 80 ms
      00076B                       2819 00101$:
      00076B AC 60            [24] 2820 	mov	r4,_Counts
      00076D E5 61            [12] 2821 	mov	a,(_Counts + 1)
      00076F FD               [12] 2822 	mov	r5,a
      000770 33               [12] 2823 	rlc	a
      000771 95 E0            [12] 2824 	subb	a,acc
      000773 8D 07            [24] 2825 	mov	ar7,r5
      000775 8C 06            [24] 2826 	mov	ar6,r4
      000777 7D 00            [12] 2827 	mov	r5,#0x00
      000779 7C 00            [12] 2828 	mov	r4,#0x00
      00077B C3               [12] 2829 	clr	c
      00077C ED               [12] 2830 	mov	a,r5
      00077D 94 40            [12] 2831 	subb	a,#0x40
      00077F EE               [12] 2832 	mov	a,r6
      000780 94 02            [12] 2833 	subb	a,#0x02
      000782 EF               [12] 2834 	mov	a,r7
      000783 64 80            [12] 2835 	xrl	a,#0x80
      000785 94 80            [12] 2836 	subb	a,#0x80
      000787 40 E2            [24] 2837 	jc	00101$
                           0006AA  2838 	C$lab3_3.c$179$1$144 ==.
                           0006AA  2839 	XG$wait$0$0 ==.
      000789 22               [24] 2840 	ret
                                   2841 ;------------------------------------------------------------
                                   2842 ;Allocation info for local variables in function 'ReadCompass'
                                   2843 ;------------------------------------------------------------
                           0006AB  2844 	G$ReadCompass$0$0 ==.
                           0006AB  2845 	C$lab3_3.c$181$1$144 ==.
                                   2846 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:181: unsigned int ReadCompass(){
                                   2847 ;	-----------------------------------------
                                   2848 ;	 function ReadCompass
                                   2849 ;	-----------------------------------------
      00078A                       2850 _ReadCompass:
                           0006AB  2851 	C$lab3_3.c$182$1$145 ==.
                                   2852 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:182: addr = 0xC0; // the address of the sensor, 0xC0 for the compass
      00078A 75 5D C0         [24] 2853 	mov	_addr,#0xc0
                           0006AE  2854 	C$lab3_3.c$183$1$145 ==.
                                   2855 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:183: heading_ = 0;
      00078D E4               [12] 2856 	clr	a
      00078E F5 3C            [12] 2857 	mov	_heading_,a
      000790 F5 3D            [12] 2858 	mov	(_heading_ + 1),a
                           0006B3  2859 	C$lab3_3.c$184$1$145 ==.
                                   2860 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:184: i2c_read_data(addr, 2, Data, 2);  // read two byte, starting at reg 2
      000792 75 32 5E         [24] 2861 	mov	_i2c_read_data_PARM_3,#_Data
                                   2862 ;	1-genFromRTrack replaced	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      000795 F5 33            [12] 2863 	mov	(_i2c_read_data_PARM_3 + 1),a
      000797 75 34 40         [24] 2864 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      00079A 75 31 02         [24] 2865 	mov	_i2c_read_data_PARM_2,#0x02
      00079D 75 35 02         [24] 2866 	mov	_i2c_read_data_PARM_4,#0x02
      0007A0 75 82 C0         [24] 2867 	mov	dpl,#0xc0
      0007A3 12 04 DD         [24] 2868 	lcall	_i2c_read_data
                           0006C7  2869 	C$lab3_3.c$185$1$145 ==.
                                   2870 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:185: heading_ =(((unsigned int)Data[0] << 8) | Data[1]);  //combine the two values
      0007A6 AF 5E            [24] 2871 	mov	r7,_Data
      0007A8 7E 00            [12] 2872 	mov	r6,#0x00
      0007AA AC 5F            [24] 2873 	mov	r4,(_Data + 0x0001)
      0007AC 7D 00            [12] 2874 	mov	r5,#0x00
      0007AE EC               [12] 2875 	mov	a,r4
      0007AF 4E               [12] 2876 	orl	a,r6
      0007B0 F5 3C            [12] 2877 	mov	_heading_,a
      0007B2 ED               [12] 2878 	mov	a,r5
      0007B3 4F               [12] 2879 	orl	a,r7
      0007B4 F5 3D            [12] 2880 	mov	(_heading_ + 1),a
                           0006D7  2881 	C$lab3_3.c$186$1$145 ==.
                                   2882 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:186: printf("in READCOMPASS heading_: %d\n", heading_);
      0007B6 C0 3C            [24] 2883 	push	_heading_
      0007B8 C0 3D            [24] 2884 	push	(_heading_ + 1)
      0007BA 74 5C            [12] 2885 	mov	a,#___str_7
      0007BC C0 E0            [24] 2886 	push	acc
      0007BE 74 11            [12] 2887 	mov	a,#(___str_7 >> 8)
      0007C0 C0 E0            [24] 2888 	push	acc
      0007C2 74 80            [12] 2889 	mov	a,#0x80
      0007C4 C0 E0            [24] 2890 	push	acc
      0007C6 12 0A 9D         [24] 2891 	lcall	_printf
      0007C9 E5 81            [12] 2892 	mov	a,sp
      0007CB 24 FB            [12] 2893 	add	a,#0xfb
      0007CD F5 81            [12] 2894 	mov	sp,a
                           0006F0  2895 	C$lab3_3.c$187$1$145 ==.
                                   2896 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:187: return heading_;             // the heading returned in degrees between 0 and 359
      0007CF 85 3C 82         [24] 2897 	mov	dpl,_heading_
      0007D2 85 3D 83         [24] 2898 	mov	dph,(_heading_ + 1)
                           0006F6  2899 	C$lab3_3.c$188$1$145 ==.
                           0006F6  2900 	XG$ReadCompass$0$0 ==.
      0007D5 22               [24] 2901 	ret
                                   2902 ;------------------------------------------------------------
                                   2903 ;Allocation info for local variables in function 'ReadRanger'
                                   2904 ;------------------------------------------------------------
                                   2905 ;Data                      Allocated with name '_ReadRanger_Data_1_146'
                                   2906 ;range                     Allocated to registers r6 r7 
                                   2907 ;addr                      Allocated to registers 
                                   2908 ;------------------------------------------------------------
                           0006F7  2909 	G$ReadRanger$0$0 ==.
                           0006F7  2910 	C$lab3_3.c$190$1$145 ==.
                                   2911 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:190: unsigned int ReadRanger(){
                                   2912 ;	-----------------------------------------
                                   2913 ;	 function ReadRanger
                                   2914 ;	-----------------------------------------
      0007D6                       2915 _ReadRanger:
                           0006F7  2916 	C$lab3_3.c$194$1$146 ==.
                                   2917 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:194: i2c_read_data(addr, 2, Data, 2); // read two bytes, starting at reg 2
      0007D6 75 32 62         [24] 2918 	mov	_i2c_read_data_PARM_3,#_ReadRanger_Data_1_146
      0007D9 75 33 00         [24] 2919 	mov	(_i2c_read_data_PARM_3 + 1),#0x00
      0007DC 75 34 40         [24] 2920 	mov	(_i2c_read_data_PARM_3 + 2),#0x40
      0007DF 75 31 02         [24] 2921 	mov	_i2c_read_data_PARM_2,#0x02
      0007E2 75 35 02         [24] 2922 	mov	_i2c_read_data_PARM_4,#0x02
      0007E5 75 82 E0         [24] 2923 	mov	dpl,#0xe0
      0007E8 12 04 DD         [24] 2924 	lcall	_i2c_read_data
                           00070C  2925 	C$lab3_3.c$195$1$146 ==.
                                   2926 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:195: range = (((unsigned int)Data[0] << 8) | Data[1]);
      0007EB AF 62            [24] 2927 	mov	r7,_ReadRanger_Data_1_146
      0007ED 7E 00            [12] 2928 	mov	r6,#0x00
      0007EF AC 63            [24] 2929 	mov	r4,(_ReadRanger_Data_1_146 + 0x0001)
      0007F1 7D 00            [12] 2930 	mov	r5,#0x00
      0007F3 EC               [12] 2931 	mov	a,r4
      0007F4 42 06            [12] 2932 	orl	ar6,a
      0007F6 ED               [12] 2933 	mov	a,r5
      0007F7 42 07            [12] 2934 	orl	ar7,a
                           00071A  2935 	C$lab3_3.c$196$1$146 ==.
                                   2936 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:196: Data[0] = 0x51;
      0007F9 75 62 51         [24] 2937 	mov	_ReadRanger_Data_1_146,#0x51
                           00071D  2938 	C$lab3_3.c$197$1$146 ==.
                                   2939 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:197: i2c_write_data(addr, 0, Data, 1);
      0007FC 75 2D 62         [24] 2940 	mov	_i2c_write_data_PARM_3,#_ReadRanger_Data_1_146
      0007FF 75 2E 00         [24] 2941 	mov	(_i2c_write_data_PARM_3 + 1),#0x00
      000802 75 2F 40         [24] 2942 	mov	(_i2c_write_data_PARM_3 + 2),#0x40
      000805 75 2C 00         [24] 2943 	mov	_i2c_write_data_PARM_2,#0x00
      000808 75 30 01         [24] 2944 	mov	_i2c_write_data_PARM_4,#0x01
      00080B 75 82 E0         [24] 2945 	mov	dpl,#0xe0
      00080E C0 07            [24] 2946 	push	ar7
      000810 C0 06            [24] 2947 	push	ar6
      000812 12 04 67         [24] 2948 	lcall	_i2c_write_data
      000815 D0 06            [24] 2949 	pop	ar6
      000817 D0 07            [24] 2950 	pop	ar7
                           00073A  2951 	C$lab3_3.c$198$1$146 ==.
                                   2952 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:198: return range;
      000819 8E 82            [24] 2953 	mov	dpl,r6
      00081B 8F 83            [24] 2954 	mov	dph,r7
                           00073E  2955 	C$lab3_3.c$199$1$146 ==.
                           00073E  2956 	XG$ReadRanger$0$0 ==.
      00081D 22               [24] 2957 	ret
                                   2958 ;------------------------------------------------------------
                                   2959 ;Allocation info for local variables in function 'AdjustSpeed'
                                   2960 ;------------------------------------------------------------
                           00073F  2961 	G$AdjustSpeed$0$0 ==.
                           00073F  2962 	C$lab3_3.c$202$1$146 ==.
                                   2963 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:202: void AdjustSpeed(void){
                                   2964 ;	-----------------------------------------
                                   2965 ;	 function AdjustSpeed
                                   2966 ;	-----------------------------------------
      00081E                       2967 _AdjustSpeed:
                           00073F  2968 	C$lab3_3.c$203$1$148 ==.
                                   2969 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:203: if(range_ < 10){
      00081E C3               [12] 2970 	clr	c
      00081F E5 49            [12] 2971 	mov	a,_range_
      000821 94 0A            [12] 2972 	subb	a,#0x0a
      000823 E5 4A            [12] 2973 	mov	a,(_range_ + 1)
      000825 94 00            [12] 2974 	subb	a,#0x00
      000827 50 08            [24] 2975 	jnc	00108$
                           00074A  2976 	C$lab3_3.c$204$2$149 ==.
                                   2977 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:204: PW_m = PW_MAX_m;
      000829 85 51 53         [24] 2978 	mov	_PW_m,_PW_MAX_m
      00082C 85 52 54         [24] 2979 	mov	(_PW_m + 1),(_PW_MAX_m + 1)
      00082F 80 2C            [24] 2980 	sjmp	00109$
      000831                       2981 00108$:
                           000752  2982 	C$lab3_3.c$206$1$148 ==.
                                   2983 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:206: else if(range_ >= 40 && range_ <= 50){
      000831 C3               [12] 2984 	clr	c
      000832 E5 49            [12] 2985 	mov	a,_range_
      000834 94 28            [12] 2986 	subb	a,#0x28
      000836 E5 4A            [12] 2987 	mov	a,(_range_ + 1)
      000838 94 00            [12] 2988 	subb	a,#0x00
      00083A 40 11            [24] 2989 	jc	00104$
      00083C 74 32            [12] 2990 	mov	a,#0x32
      00083E 95 49            [12] 2991 	subb	a,_range_
      000840 E4               [12] 2992 	clr	a
      000841 95 4A            [12] 2993 	subb	a,(_range_ + 1)
      000843 40 08            [24] 2994 	jc	00104$
                           000766  2995 	C$lab3_3.c$207$2$150 ==.
                                   2996 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:207: PW_m = PW_CENTER;
      000845 85 4D 53         [24] 2997 	mov	_PW_m,_PW_CENTER
      000848 85 4E 54         [24] 2998 	mov	(_PW_m + 1),(_PW_CENTER + 1)
      00084B 80 10            [24] 2999 	sjmp	00109$
      00084D                       3000 00104$:
                           00076E  3001 	C$lab3_3.c$209$1$148 ==.
                                   3002 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:209: else if(range_ > 90){
      00084D C3               [12] 3003 	clr	c
      00084E 74 5A            [12] 3004 	mov	a,#0x5a
      000850 95 49            [12] 3005 	subb	a,_range_
      000852 E4               [12] 3006 	clr	a
      000853 95 4A            [12] 3007 	subb	a,(_range_ + 1)
      000855 50 06            [24] 3008 	jnc	00109$
                           000778  3009 	C$lab3_3.c$210$2$151 ==.
                                   3010 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:210: PW_m = PW_MIN_m;
      000857 85 4F 53         [24] 3011 	mov	_PW_m,_PW_MIN_m
      00085A 85 50 54         [24] 3012 	mov	(_PW_m + 1),(_PW_MIN_m + 1)
      00085D                       3013 00109$:
                           00077E  3014 	C$lab3_3.c$212$1$148 ==.
                                   3015 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:212: PW_m = PW_MAX_m - 18 * range_;
      00085D 85 49 11         [24] 3016 	mov	__mulint_PARM_2,_range_
      000860 85 4A 12         [24] 3017 	mov	(__mulint_PARM_2 + 1),(_range_ + 1)
      000863 90 00 12         [24] 3018 	mov	dptr,#0x0012
      000866 12 09 61         [24] 3019 	lcall	__mulint
      000869 AE 82            [24] 3020 	mov	r6,dpl
      00086B AF 83            [24] 3021 	mov	r7,dph
      00086D E5 51            [12] 3022 	mov	a,_PW_MAX_m
      00086F C3               [12] 3023 	clr	c
      000870 9E               [12] 3024 	subb	a,r6
      000871 F5 53            [12] 3025 	mov	_PW_m,a
      000873 E5 52            [12] 3026 	mov	a,(_PW_MAX_m + 1)
      000875 9F               [12] 3027 	subb	a,r7
      000876 F5 54            [12] 3028 	mov	(_PW_m + 1),a
                           000799  3029 	C$lab3_3.c$213$1$148 ==.
                                   3030 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:213: printf("\rAdjust Speed: %d\n", PW_m);
      000878 C0 53            [24] 3031 	push	_PW_m
      00087A C0 54            [24] 3032 	push	(_PW_m + 1)
      00087C 74 79            [12] 3033 	mov	a,#___str_8
      00087E C0 E0            [24] 3034 	push	acc
      000880 74 11            [12] 3035 	mov	a,#(___str_8 >> 8)
      000882 C0 E0            [24] 3036 	push	acc
      000884 74 80            [12] 3037 	mov	a,#0x80
      000886 C0 E0            [24] 3038 	push	acc
      000888 12 0A 9D         [24] 3039 	lcall	_printf
      00088B E5 81            [12] 3040 	mov	a,sp
      00088D 24 FB            [12] 3041 	add	a,#0xfb
      00088F F5 81            [12] 3042 	mov	sp,a
                           0007B2  3043 	C$lab3_3.c$214$1$148 ==.
                           0007B2  3044 	XG$AdjustSpeed$0$0 ==.
      000891 22               [24] 3045 	ret
                                   3046 ;------------------------------------------------------------
                                   3047 ;Allocation info for local variables in function 'AdjustSteering'
                                   3048 ;------------------------------------------------------------
                           0007B3  3049 	G$AdjustSteering$0$0 ==.
                           0007B3  3050 	C$lab3_3.c$216$1$148 ==.
                                   3051 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:216: void AdjustSteering(void){
                                   3052 ;	-----------------------------------------
                                   3053 ;	 function AdjustSteering
                                   3054 ;	-----------------------------------------
      000892                       3055 _AdjustSteering:
                           0007B3  3056 	C$lab3_3.c$217$1$153 ==.
                                   3057 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:217: if (error > 1800){
      000892 C3               [12] 3058 	clr	c
      000893 74 08            [12] 3059 	mov	a,#0x08
      000895 95 40            [12] 3060 	subb	a,_error
      000897 74 87            [12] 3061 	mov	a,#(0x07 ^ 0x80)
      000899 85 41 F0         [24] 3062 	mov	b,(_error + 1)
      00089C 63 F0 80         [24] 3063 	xrl	b,#0x80
      00089F 95 F0            [12] 3064 	subb	a,b
      0008A1 50 0E            [24] 3065 	jnc	00104$
                           0007C4  3066 	C$lab3_3.c$218$2$154 ==.
                                   3067 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:218: error = error - 3600;
      0008A3 E5 40            [12] 3068 	mov	a,_error
      0008A5 24 F0            [12] 3069 	add	a,#0xf0
      0008A7 F5 40            [12] 3070 	mov	_error,a
      0008A9 E5 41            [12] 3071 	mov	a,(_error + 1)
      0008AB 34 F1            [12] 3072 	addc	a,#0xf1
      0008AD F5 41            [12] 3073 	mov	(_error + 1),a
      0008AF 80 19            [24] 3074 	sjmp	00105$
      0008B1                       3075 00104$:
                           0007D2  3076 	C$lab3_3.c$220$1$153 ==.
                                   3077 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:220: else if (error < -1800){
      0008B1 C3               [12] 3078 	clr	c
      0008B2 E5 40            [12] 3079 	mov	a,_error
      0008B4 94 F8            [12] 3080 	subb	a,#0xf8
      0008B6 E5 41            [12] 3081 	mov	a,(_error + 1)
      0008B8 64 80            [12] 3082 	xrl	a,#0x80
      0008BA 94 78            [12] 3083 	subb	a,#0x78
      0008BC 50 0C            [24] 3084 	jnc	00105$
                           0007DF  3085 	C$lab3_3.c$221$2$155 ==.
                                   3086 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:221: error = error + 3600;
      0008BE 74 10            [12] 3087 	mov	a,#0x10
      0008C0 25 40            [12] 3088 	add	a,_error
      0008C2 F5 40            [12] 3089 	mov	_error,a
      0008C4 74 0E            [12] 3090 	mov	a,#0x0e
      0008C6 35 41            [12] 3091 	addc	a,(_error + 1)
      0008C8 F5 41            [12] 3092 	mov	(_error + 1),a
      0008CA                       3093 00105$:
                           0007EB  3094 	C$lab3_3.c$223$1$153 ==.
                                   3095 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:223: printf("\rAdjustSteering error: %d\n", error);
      0008CA C0 40            [24] 3096 	push	_error
      0008CC C0 41            [24] 3097 	push	(_error + 1)
      0008CE 74 8C            [12] 3098 	mov	a,#___str_9
      0008D0 C0 E0            [24] 3099 	push	acc
      0008D2 74 11            [12] 3100 	mov	a,#(___str_9 >> 8)
      0008D4 C0 E0            [24] 3101 	push	acc
      0008D6 74 80            [12] 3102 	mov	a,#0x80
      0008D8 C0 E0            [24] 3103 	push	acc
      0008DA 12 0A 9D         [24] 3104 	lcall	_printf
      0008DD E5 81            [12] 3105 	mov	a,sp
      0008DF 24 FB            [12] 3106 	add	a,#0xfb
      0008E1 F5 81            [12] 3107 	mov	sp,a
                           000804  3108 	C$lab3_3.c$224$1$153 ==.
                                   3109 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:224: temp_servo_pw = gain * (error) + PW_CENTER_s;
      0008E3 AE 42            [24] 3110 	mov	r6,_gain
      0008E5 7F 00            [12] 3111 	mov	r7,#0x00
      0008E7 85 40 11         [24] 3112 	mov	__mulint_PARM_2,_error
      0008EA 85 41 12         [24] 3113 	mov	(__mulint_PARM_2 + 1),(_error + 1)
      0008ED 8E 82            [24] 3114 	mov	dpl,r6
      0008EF 8F 83            [24] 3115 	mov	dph,r7
      0008F1 12 09 61         [24] 3116 	lcall	__mulint
      0008F4 AE 82            [24] 3117 	mov	r6,dpl
      0008F6 AF 83            [24] 3118 	mov	r7,dph
      0008F8 E5 55            [12] 3119 	mov	a,_PW_CENTER_s
      0008FA 2E               [12] 3120 	add	a,r6
      0008FB F5 43            [12] 3121 	mov	_temp_servo_pw,a
      0008FD E5 56            [12] 3122 	mov	a,(_PW_CENTER_s + 1)
      0008FF 3F               [12] 3123 	addc	a,r7
      000900 F5 44            [12] 3124 	mov	(_temp_servo_pw + 1),a
                           000823  3125 	C$lab3_3.c$226$1$153 ==.
                                   3126 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:226: PW_s = temp_servo_pw;
      000902 85 43 5B         [24] 3127 	mov	_PW_s,_temp_servo_pw
      000905 85 44 5C         [24] 3128 	mov	(_PW_s + 1),(_temp_servo_pw + 1)
                           000829  3129 	C$lab3_3.c$227$1$153 ==.
                                   3130 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:227: if(PW_s > PW_MAX_s){
      000908 C3               [12] 3131 	clr	c
      000909 E5 59            [12] 3132 	mov	a,_PW_MAX_s
      00090B 95 5B            [12] 3133 	subb	a,_PW_s
      00090D E5 5A            [12] 3134 	mov	a,(_PW_MAX_s + 1)
      00090F 95 5C            [12] 3135 	subb	a,(_PW_s + 1)
      000911 50 08            [24] 3136 	jnc	00109$
                           000834  3137 	C$lab3_3.c$228$2$156 ==.
                                   3138 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:228: PW_s = PW_MAX_s;
      000913 85 59 5B         [24] 3139 	mov	_PW_s,_PW_MAX_s
      000916 85 5A 5C         [24] 3140 	mov	(_PW_s + 1),(_PW_MAX_s + 1)
      000919 80 11            [24] 3141 	sjmp	00110$
      00091B                       3142 00109$:
                           00083C  3143 	C$lab3_3.c$230$1$153 ==.
                                   3144 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:230: else if(PW_s < PW_MIN_s){
      00091B C3               [12] 3145 	clr	c
      00091C E5 5B            [12] 3146 	mov	a,_PW_s
      00091E 95 57            [12] 3147 	subb	a,_PW_MIN_s
      000920 E5 5C            [12] 3148 	mov	a,(_PW_s + 1)
      000922 95 58            [12] 3149 	subb	a,(_PW_MIN_s + 1)
      000924 50 06            [24] 3150 	jnc	00110$
                           000847  3151 	C$lab3_3.c$231$2$157 ==.
                                   3152 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:231: PW_s = PW_MIN_s;
      000926 85 57 5B         [24] 3153 	mov	_PW_s,_PW_MIN_s
      000929 85 58 5C         [24] 3154 	mov	(_PW_s + 1),(_PW_MIN_s + 1)
      00092C                       3155 00110$:
                           00084D  3156 	C$lab3_3.c$233$1$153 ==.
                                   3157 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-3\lab3-3.c:233: printf("\rAdjust Steering: %d\n", PW_s);
      00092C C0 5B            [24] 3158 	push	_PW_s
      00092E C0 5C            [24] 3159 	push	(_PW_s + 1)
      000930 74 A7            [12] 3160 	mov	a,#___str_10
      000932 C0 E0            [24] 3161 	push	acc
      000934 74 11            [12] 3162 	mov	a,#(___str_10 >> 8)
      000936 C0 E0            [24] 3163 	push	acc
      000938 74 80            [12] 3164 	mov	a,#0x80
      00093A C0 E0            [24] 3165 	push	acc
      00093C 12 0A 9D         [24] 3166 	lcall	_printf
      00093F E5 81            [12] 3167 	mov	a,sp
      000941 24 FB            [12] 3168 	add	a,#0xfb
      000943 F5 81            [12] 3169 	mov	sp,a
                           000866  3170 	C$lab3_3.c$234$1$153 ==.
                           000866  3171 	XG$AdjustSteering$0$0 ==.
      000945 22               [24] 3172 	ret
                                   3173 	.area CSEG    (CODE)
                                   3174 	.area CONST   (CODE)
                           000000  3175 Flab3_3$__str_0$0$0 == .
      0010B8                       3176 ___str_0:
      0010B8 0A                    3177 	.db 0x0a
      0010B9 54 79 70 65 20 64 69  3178 	.ascii "Type digits; end w/#"
             67 69 74 73 3B 20 65
             6E 64 20 77 2F 23
      0010CD 00                    3179 	.db 0x00
                           000016  3180 Flab3_3$__str_1$0$0 == .
      0010CE                       3181 ___str_1:
      0010CE 20 20 20 20 20 25 63  3182 	.ascii "     %c%c%c%c%c"
             25 63 25 63 25 63 25
             63
      0010DD 00                    3183 	.db 0x00
                           000026  3184 Flab3_3$__str_2$0$0 == .
      0010DE                       3185 ___str_2:
      0010DE 25 63                 3186 	.ascii "%c"
      0010E0 00                    3187 	.db 0x00
                           000029  3188 Flab3_3$__str_3$0$0 == .
      0010E1                       3189 ___str_3:
      0010E1 0D                    3190 	.db 0x0d
      0010E2 45 6D 62 65 64 64 65  3191 	.ascii "Embedded Control Steering Calibration & Motor Control"
             64 20 43 6F 6E 74 72
             6F 6C 20 53 74 65 65
             72 69 6E 67 20 43 61
             6C 69 62 72 61 74 69
             6F 6E 20 26 20 4D 6F
             74 6F 72 20 43 6F 6E
             74 72 6F 6C
      001117 0A                    3192 	.db 0x0a
      001118 00                    3193 	.db 0x00
                           000061  3194 Flab3_3$__str_4$0$0 == .
      001119                       3195 ___str_4:
      001119 0D                    3196 	.db 0x0d
      00111A 50 75 74 20 74 68 65  3197 	.ascii "Put the slide switch in the "
             20 73 6C 69 64 65 20
             73 77 69 74 63 68 20
             69 6E 20 74 68 65 20
      001136 22                    3198 	.db 0x22
      001137 6F 6E                 3199 	.ascii "on"
      001139 22                    3200 	.db 0x22
      00113A 20 70 6F 73 69 74 69  3201 	.ascii " position"
             6F 6E
      001143 0A                    3202 	.db 0x0a
      001144 00                    3203 	.db 0x00
                           00008D  3204 Flab3_3$__str_5$0$0 == .
      001145                       3205 ___str_5:
      001145 0D                    3206 	.db 0x0d
      001146 65 72 72 6F 72 3A 20  3207 	.ascii "error: %d"
             25 64
      00114F 0A                    3208 	.db 0x0a
      001150 00                    3209 	.db 0x00
                           000099  3210 Flab3_3$__str_6$0$0 == .
      001151                       3211 ___str_6:
      001151 0D                    3212 	.db 0x0d
      001152 50 57 5F 73 3A 20 25  3213 	.ascii "PW_s: %d"
             64
      00115A 0A                    3214 	.db 0x0a
      00115B 00                    3215 	.db 0x00
                           0000A4  3216 Flab3_3$__str_7$0$0 == .
      00115C                       3217 ___str_7:
      00115C 69 6E 20 52 45 41 44  3218 	.ascii "in READCOMPASS heading_: %d"
             43 4F 4D 50 41 53 53
             20 68 65 61 64 69 6E
             67 5F 3A 20 25 64
      001177 0A                    3219 	.db 0x0a
      001178 00                    3220 	.db 0x00
                           0000C1  3221 Flab3_3$__str_8$0$0 == .
      001179                       3222 ___str_8:
      001179 0D                    3223 	.db 0x0d
      00117A 41 64 6A 75 73 74 20  3224 	.ascii "Adjust Speed: %d"
             53 70 65 65 64 3A 20
             25 64
      00118A 0A                    3225 	.db 0x0a
      00118B 00                    3226 	.db 0x00
                           0000D4  3227 Flab3_3$__str_9$0$0 == .
      00118C                       3228 ___str_9:
      00118C 0D                    3229 	.db 0x0d
      00118D 41 64 6A 75 73 74 53  3230 	.ascii "AdjustSteering error: %d"
             74 65 65 72 69 6E 67
             20 65 72 72 6F 72 3A
             20 25 64
      0011A5 0A                    3231 	.db 0x0a
      0011A6 00                    3232 	.db 0x00
                           0000EF  3233 Flab3_3$__str_10$0$0 == .
      0011A7                       3234 ___str_10:
      0011A7 0D                    3235 	.db 0x0d
      0011A8 41 64 6A 75 73 74 20  3236 	.ascii "Adjust Steering: %d"
             53 74 65 65 72 69 6E
             67 3A 20 25 64
      0011BB 0A                    3237 	.db 0x0a
      0011BC 00                    3238 	.db 0x00
                                   3239 	.area XINIT   (CODE)
                                   3240 	.area CABS    (ABS,CODE)
