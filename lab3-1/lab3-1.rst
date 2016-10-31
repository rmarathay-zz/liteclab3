                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module lab3_1
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _main
                                     12 	.globl _putchar
                                     13 	.globl _getchar
                                     14 	.globl _printf
                                     15 	.globl _getchar_nw
                                     16 	.globl _Sys_Init
                                     17 	.globl _UART0_Init
                                     18 	.globl _SYSCLK_Init
                                     19 	.globl _SPIF
                                     20 	.globl _WCOL
                                     21 	.globl _MODF
                                     22 	.globl _RXOVRN
                                     23 	.globl _TXBSY
                                     24 	.globl _SLVSEL
                                     25 	.globl _MSTEN
                                     26 	.globl _SPIEN
                                     27 	.globl _AD0EN
                                     28 	.globl _ADCEN
                                     29 	.globl _AD0TM
                                     30 	.globl _ADCTM
                                     31 	.globl _AD0INT
                                     32 	.globl _ADCINT
                                     33 	.globl _AD0BUSY
                                     34 	.globl _ADBUSY
                                     35 	.globl _AD0CM1
                                     36 	.globl _ADSTM1
                                     37 	.globl _AD0CM0
                                     38 	.globl _ADSTM0
                                     39 	.globl _AD0WINT
                                     40 	.globl _ADWINT
                                     41 	.globl _AD0LJST
                                     42 	.globl _ADLJST
                                     43 	.globl _CF
                                     44 	.globl _CR
                                     45 	.globl _CCF4
                                     46 	.globl _CCF3
                                     47 	.globl _CCF2
                                     48 	.globl _CCF1
                                     49 	.globl _CCF0
                                     50 	.globl _CY
                                     51 	.globl _AC
                                     52 	.globl _F0
                                     53 	.globl _RS1
                                     54 	.globl _RS0
                                     55 	.globl _OV
                                     56 	.globl _F1
                                     57 	.globl _P
                                     58 	.globl _TF2
                                     59 	.globl _EXF2
                                     60 	.globl _RCLK
                                     61 	.globl _TCLK
                                     62 	.globl _EXEN2
                                     63 	.globl _TR2
                                     64 	.globl _CT2
                                     65 	.globl _CPRL2
                                     66 	.globl _BUSY
                                     67 	.globl _ENSMB
                                     68 	.globl _STA
                                     69 	.globl _STO
                                     70 	.globl _SI
                                     71 	.globl _AA
                                     72 	.globl _SMBFTE
                                     73 	.globl _SMBTOE
                                     74 	.globl _PT2
                                     75 	.globl _PS
                                     76 	.globl _PS0
                                     77 	.globl _PT1
                                     78 	.globl _PX1
                                     79 	.globl _PT0
                                     80 	.globl _PX0
                                     81 	.globl _P3_7
                                     82 	.globl _P3_6
                                     83 	.globl _P3_5
                                     84 	.globl _P3_4
                                     85 	.globl _P3_3
                                     86 	.globl _P3_2
                                     87 	.globl _P3_1
                                     88 	.globl _P3_0
                                     89 	.globl _EA
                                     90 	.globl _ET2
                                     91 	.globl _ES
                                     92 	.globl _ES0
                                     93 	.globl _ET1
                                     94 	.globl _EX1
                                     95 	.globl _ET0
                                     96 	.globl _EX0
                                     97 	.globl _P2_7
                                     98 	.globl _P2_6
                                     99 	.globl _P2_5
                                    100 	.globl _P2_4
                                    101 	.globl _P2_3
                                    102 	.globl _P2_2
                                    103 	.globl _P2_1
                                    104 	.globl _P2_0
                                    105 	.globl _S0MODE
                                    106 	.globl _SM00
                                    107 	.globl _SM0
                                    108 	.globl _SM10
                                    109 	.globl _SM1
                                    110 	.globl _MCE0
                                    111 	.globl _SM20
                                    112 	.globl _SM2
                                    113 	.globl _REN0
                                    114 	.globl _REN
                                    115 	.globl _TB80
                                    116 	.globl _TB8
                                    117 	.globl _RB80
                                    118 	.globl _RB8
                                    119 	.globl _TI0
                                    120 	.globl _TI
                                    121 	.globl _RI0
                                    122 	.globl _RI
                                    123 	.globl _P1_7
                                    124 	.globl _P1_6
                                    125 	.globl _P1_5
                                    126 	.globl _P1_4
                                    127 	.globl _P1_3
                                    128 	.globl _P1_2
                                    129 	.globl _P1_1
                                    130 	.globl _P1_0
                                    131 	.globl _TF1
                                    132 	.globl _TR1
                                    133 	.globl _TF0
                                    134 	.globl _TR0
                                    135 	.globl _IE1
                                    136 	.globl _IT1
                                    137 	.globl _IE0
                                    138 	.globl _IT0
                                    139 	.globl _P0_7
                                    140 	.globl _P0_6
                                    141 	.globl _P0_5
                                    142 	.globl _P0_4
                                    143 	.globl _P0_3
                                    144 	.globl _P0_2
                                    145 	.globl _P0_1
                                    146 	.globl _P0_0
                                    147 	.globl _PCA0CP4
                                    148 	.globl _PCA0CP3
                                    149 	.globl _PCA0CP2
                                    150 	.globl _PCA0CP1
                                    151 	.globl _PCA0CP0
                                    152 	.globl _PCA0
                                    153 	.globl _DAC1
                                    154 	.globl _DAC0
                                    155 	.globl _ADC0LT
                                    156 	.globl _ADC0GT
                                    157 	.globl _ADC0
                                    158 	.globl _RCAP4
                                    159 	.globl _TMR4
                                    160 	.globl _TMR3RL
                                    161 	.globl _TMR3
                                    162 	.globl _RCAP2
                                    163 	.globl _TMR2
                                    164 	.globl _TMR1
                                    165 	.globl _TMR0
                                    166 	.globl _WDTCN
                                    167 	.globl _PCA0CPH4
                                    168 	.globl _PCA0CPH3
                                    169 	.globl _PCA0CPH2
                                    170 	.globl _PCA0CPH1
                                    171 	.globl _PCA0CPH0
                                    172 	.globl _PCA0H
                                    173 	.globl _SPI0CN
                                    174 	.globl _EIP2
                                    175 	.globl _EIP1
                                    176 	.globl _TH4
                                    177 	.globl _TL4
                                    178 	.globl _SADDR1
                                    179 	.globl _SBUF1
                                    180 	.globl _SCON1
                                    181 	.globl _B
                                    182 	.globl _RSTSRC
                                    183 	.globl _PCA0CPL4
                                    184 	.globl _PCA0CPL3
                                    185 	.globl _PCA0CPL2
                                    186 	.globl _PCA0CPL1
                                    187 	.globl _PCA0CPL0
                                    188 	.globl _PCA0L
                                    189 	.globl _ADC0CN
                                    190 	.globl _EIE2
                                    191 	.globl _EIE1
                                    192 	.globl _RCAP4H
                                    193 	.globl _RCAP4L
                                    194 	.globl _XBR2
                                    195 	.globl _XBR1
                                    196 	.globl _XBR0
                                    197 	.globl _ACC
                                    198 	.globl _PCA0CPM4
                                    199 	.globl _PCA0CPM3
                                    200 	.globl _PCA0CPM2
                                    201 	.globl _PCA0CPM1
                                    202 	.globl _PCA0CPM0
                                    203 	.globl _PCA0MD
                                    204 	.globl _PCA0CN
                                    205 	.globl _DAC1CN
                                    206 	.globl _DAC1H
                                    207 	.globl _DAC1L
                                    208 	.globl _DAC0CN
                                    209 	.globl _DAC0H
                                    210 	.globl _DAC0L
                                    211 	.globl _REF0CN
                                    212 	.globl _PSW
                                    213 	.globl _SMB0CR
                                    214 	.globl _TH2
                                    215 	.globl _TL2
                                    216 	.globl _RCAP2H
                                    217 	.globl _RCAP2L
                                    218 	.globl _T4CON
                                    219 	.globl _T2CON
                                    220 	.globl _ADC0LTH
                                    221 	.globl _ADC0LTL
                                    222 	.globl _ADC0GTH
                                    223 	.globl _ADC0GTL
                                    224 	.globl _SMB0ADR
                                    225 	.globl _SMB0DAT
                                    226 	.globl _SMB0STA
                                    227 	.globl _SMB0CN
                                    228 	.globl _ADC0H
                                    229 	.globl _ADC0L
                                    230 	.globl _P1MDIN
                                    231 	.globl _ADC0CF
                                    232 	.globl _AMX0SL
                                    233 	.globl _AMX0CF
                                    234 	.globl _SADEN0
                                    235 	.globl _IP
                                    236 	.globl _FLACL
                                    237 	.globl _FLSCL
                                    238 	.globl _P74OUT
                                    239 	.globl _OSCICN
                                    240 	.globl _OSCXCN
                                    241 	.globl _P3
                                    242 	.globl __XPAGE
                                    243 	.globl _EMI0CN
                                    244 	.globl _SADEN1
                                    245 	.globl _P3IF
                                    246 	.globl _AMX1SL
                                    247 	.globl _ADC1CF
                                    248 	.globl _ADC1CN
                                    249 	.globl _SADDR0
                                    250 	.globl _IE
                                    251 	.globl _P3MDOUT
                                    252 	.globl _PRT3CF
                                    253 	.globl _P2MDOUT
                                    254 	.globl _PRT2CF
                                    255 	.globl _P1MDOUT
                                    256 	.globl _PRT1CF
                                    257 	.globl _P0MDOUT
                                    258 	.globl _PRT0CF
                                    259 	.globl _EMI0CF
                                    260 	.globl _EMI0TC
                                    261 	.globl _P2
                                    262 	.globl _CPT1CN
                                    263 	.globl _CPT0CN
                                    264 	.globl _SPI0CKR
                                    265 	.globl _ADC1
                                    266 	.globl _SPI0DAT
                                    267 	.globl _SPI0CFG
                                    268 	.globl _SBUF0
                                    269 	.globl _SBUF
                                    270 	.globl _SCON0
                                    271 	.globl _SCON
                                    272 	.globl _P7
                                    273 	.globl _TMR3H
                                    274 	.globl _TMR3L
                                    275 	.globl _TMR3RLH
                                    276 	.globl _TMR3RLL
                                    277 	.globl _TMR3CN
                                    278 	.globl _P1
                                    279 	.globl _PSCTL
                                    280 	.globl _CKCON
                                    281 	.globl _TH1
                                    282 	.globl _TH0
                                    283 	.globl _TL1
                                    284 	.globl _TL0
                                    285 	.globl _TMOD
                                    286 	.globl _TCON
                                    287 	.globl _PCON
                                    288 	.globl _P6
                                    289 	.globl _P5
                                    290 	.globl _P4
                                    291 	.globl _DPH
                                    292 	.globl _DPL
                                    293 	.globl _SP
                                    294 	.globl _P0
                                    295 	.globl _aligned_alloc_PARM_2
                                    296 	.globl _counter
                                    297 	.globl _flag
                                    298 	.globl _PW_m
                                    299 	.globl _PW_s
                                    300 	.globl _PW_MAX_m
                                    301 	.globl _PW_MIN_m
                                    302 	.globl _PW_MAX_s
                                    303 	.globl _PW_MIN_s
                                    304 	.globl _PW_CENTER
                                    305 	.globl _Port_Init
                                    306 	.globl _XBR0_Init
                                    307 	.globl _PCA_Init
                                    308 	.globl _PCA_ISR
                                    309 	.globl _Steering_Servo
                                    310 	.globl _Motor_Control
                                    311 ;--------------------------------------------------------
                                    312 ; special function registers
                                    313 ;--------------------------------------------------------
                                    314 	.area RSEG    (ABS,DATA)
      000000                        315 	.org 0x0000
                           000080   316 G$P0$0$0 == 0x0080
                           000080   317 _P0	=	0x0080
                           000081   318 G$SP$0$0 == 0x0081
                           000081   319 _SP	=	0x0081
                           000082   320 G$DPL$0$0 == 0x0082
                           000082   321 _DPL	=	0x0082
                           000083   322 G$DPH$0$0 == 0x0083
                           000083   323 _DPH	=	0x0083
                           000084   324 G$P4$0$0 == 0x0084
                           000084   325 _P4	=	0x0084
                           000085   326 G$P5$0$0 == 0x0085
                           000085   327 _P5	=	0x0085
                           000086   328 G$P6$0$0 == 0x0086
                           000086   329 _P6	=	0x0086
                           000087   330 G$PCON$0$0 == 0x0087
                           000087   331 _PCON	=	0x0087
                           000088   332 G$TCON$0$0 == 0x0088
                           000088   333 _TCON	=	0x0088
                           000089   334 G$TMOD$0$0 == 0x0089
                           000089   335 _TMOD	=	0x0089
                           00008A   336 G$TL0$0$0 == 0x008a
                           00008A   337 _TL0	=	0x008a
                           00008B   338 G$TL1$0$0 == 0x008b
                           00008B   339 _TL1	=	0x008b
                           00008C   340 G$TH0$0$0 == 0x008c
                           00008C   341 _TH0	=	0x008c
                           00008D   342 G$TH1$0$0 == 0x008d
                           00008D   343 _TH1	=	0x008d
                           00008E   344 G$CKCON$0$0 == 0x008e
                           00008E   345 _CKCON	=	0x008e
                           00008F   346 G$PSCTL$0$0 == 0x008f
                           00008F   347 _PSCTL	=	0x008f
                           000090   348 G$P1$0$0 == 0x0090
                           000090   349 _P1	=	0x0090
                           000091   350 G$TMR3CN$0$0 == 0x0091
                           000091   351 _TMR3CN	=	0x0091
                           000092   352 G$TMR3RLL$0$0 == 0x0092
                           000092   353 _TMR3RLL	=	0x0092
                           000093   354 G$TMR3RLH$0$0 == 0x0093
                           000093   355 _TMR3RLH	=	0x0093
                           000094   356 G$TMR3L$0$0 == 0x0094
                           000094   357 _TMR3L	=	0x0094
                           000095   358 G$TMR3H$0$0 == 0x0095
                           000095   359 _TMR3H	=	0x0095
                           000096   360 G$P7$0$0 == 0x0096
                           000096   361 _P7	=	0x0096
                           000098   362 G$SCON$0$0 == 0x0098
                           000098   363 _SCON	=	0x0098
                           000098   364 G$SCON0$0$0 == 0x0098
                           000098   365 _SCON0	=	0x0098
                           000099   366 G$SBUF$0$0 == 0x0099
                           000099   367 _SBUF	=	0x0099
                           000099   368 G$SBUF0$0$0 == 0x0099
                           000099   369 _SBUF0	=	0x0099
                           00009A   370 G$SPI0CFG$0$0 == 0x009a
                           00009A   371 _SPI0CFG	=	0x009a
                           00009B   372 G$SPI0DAT$0$0 == 0x009b
                           00009B   373 _SPI0DAT	=	0x009b
                           00009C   374 G$ADC1$0$0 == 0x009c
                           00009C   375 _ADC1	=	0x009c
                           00009D   376 G$SPI0CKR$0$0 == 0x009d
                           00009D   377 _SPI0CKR	=	0x009d
                           00009E   378 G$CPT0CN$0$0 == 0x009e
                           00009E   379 _CPT0CN	=	0x009e
                           00009F   380 G$CPT1CN$0$0 == 0x009f
                           00009F   381 _CPT1CN	=	0x009f
                           0000A0   382 G$P2$0$0 == 0x00a0
                           0000A0   383 _P2	=	0x00a0
                           0000A1   384 G$EMI0TC$0$0 == 0x00a1
                           0000A1   385 _EMI0TC	=	0x00a1
                           0000A3   386 G$EMI0CF$0$0 == 0x00a3
                           0000A3   387 _EMI0CF	=	0x00a3
                           0000A4   388 G$PRT0CF$0$0 == 0x00a4
                           0000A4   389 _PRT0CF	=	0x00a4
                           0000A4   390 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   391 _P0MDOUT	=	0x00a4
                           0000A5   392 G$PRT1CF$0$0 == 0x00a5
                           0000A5   393 _PRT1CF	=	0x00a5
                           0000A5   394 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   395 _P1MDOUT	=	0x00a5
                           0000A6   396 G$PRT2CF$0$0 == 0x00a6
                           0000A6   397 _PRT2CF	=	0x00a6
                           0000A6   398 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   399 _P2MDOUT	=	0x00a6
                           0000A7   400 G$PRT3CF$0$0 == 0x00a7
                           0000A7   401 _PRT3CF	=	0x00a7
                           0000A7   402 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   403 _P3MDOUT	=	0x00a7
                           0000A8   404 G$IE$0$0 == 0x00a8
                           0000A8   405 _IE	=	0x00a8
                           0000A9   406 G$SADDR0$0$0 == 0x00a9
                           0000A9   407 _SADDR0	=	0x00a9
                           0000AA   408 G$ADC1CN$0$0 == 0x00aa
                           0000AA   409 _ADC1CN	=	0x00aa
                           0000AB   410 G$ADC1CF$0$0 == 0x00ab
                           0000AB   411 _ADC1CF	=	0x00ab
                           0000AC   412 G$AMX1SL$0$0 == 0x00ac
                           0000AC   413 _AMX1SL	=	0x00ac
                           0000AD   414 G$P3IF$0$0 == 0x00ad
                           0000AD   415 _P3IF	=	0x00ad
                           0000AE   416 G$SADEN1$0$0 == 0x00ae
                           0000AE   417 _SADEN1	=	0x00ae
                           0000AF   418 G$EMI0CN$0$0 == 0x00af
                           0000AF   419 _EMI0CN	=	0x00af
                           0000AF   420 G$_XPAGE$0$0 == 0x00af
                           0000AF   421 __XPAGE	=	0x00af
                           0000B0   422 G$P3$0$0 == 0x00b0
                           0000B0   423 _P3	=	0x00b0
                           0000B1   424 G$OSCXCN$0$0 == 0x00b1
                           0000B1   425 _OSCXCN	=	0x00b1
                           0000B2   426 G$OSCICN$0$0 == 0x00b2
                           0000B2   427 _OSCICN	=	0x00b2
                           0000B5   428 G$P74OUT$0$0 == 0x00b5
                           0000B5   429 _P74OUT	=	0x00b5
                           0000B6   430 G$FLSCL$0$0 == 0x00b6
                           0000B6   431 _FLSCL	=	0x00b6
                           0000B7   432 G$FLACL$0$0 == 0x00b7
                           0000B7   433 _FLACL	=	0x00b7
                           0000B8   434 G$IP$0$0 == 0x00b8
                           0000B8   435 _IP	=	0x00b8
                           0000B9   436 G$SADEN0$0$0 == 0x00b9
                           0000B9   437 _SADEN0	=	0x00b9
                           0000BA   438 G$AMX0CF$0$0 == 0x00ba
                           0000BA   439 _AMX0CF	=	0x00ba
                           0000BB   440 G$AMX0SL$0$0 == 0x00bb
                           0000BB   441 _AMX0SL	=	0x00bb
                           0000BC   442 G$ADC0CF$0$0 == 0x00bc
                           0000BC   443 _ADC0CF	=	0x00bc
                           0000BD   444 G$P1MDIN$0$0 == 0x00bd
                           0000BD   445 _P1MDIN	=	0x00bd
                           0000BE   446 G$ADC0L$0$0 == 0x00be
                           0000BE   447 _ADC0L	=	0x00be
                           0000BF   448 G$ADC0H$0$0 == 0x00bf
                           0000BF   449 _ADC0H	=	0x00bf
                           0000C0   450 G$SMB0CN$0$0 == 0x00c0
                           0000C0   451 _SMB0CN	=	0x00c0
                           0000C1   452 G$SMB0STA$0$0 == 0x00c1
                           0000C1   453 _SMB0STA	=	0x00c1
                           0000C2   454 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   455 _SMB0DAT	=	0x00c2
                           0000C3   456 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   457 _SMB0ADR	=	0x00c3
                           0000C4   458 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   459 _ADC0GTL	=	0x00c4
                           0000C5   460 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   461 _ADC0GTH	=	0x00c5
                           0000C6   462 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   463 _ADC0LTL	=	0x00c6
                           0000C7   464 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   465 _ADC0LTH	=	0x00c7
                           0000C8   466 G$T2CON$0$0 == 0x00c8
                           0000C8   467 _T2CON	=	0x00c8
                           0000C9   468 G$T4CON$0$0 == 0x00c9
                           0000C9   469 _T4CON	=	0x00c9
                           0000CA   470 G$RCAP2L$0$0 == 0x00ca
                           0000CA   471 _RCAP2L	=	0x00ca
                           0000CB   472 G$RCAP2H$0$0 == 0x00cb
                           0000CB   473 _RCAP2H	=	0x00cb
                           0000CC   474 G$TL2$0$0 == 0x00cc
                           0000CC   475 _TL2	=	0x00cc
                           0000CD   476 G$TH2$0$0 == 0x00cd
                           0000CD   477 _TH2	=	0x00cd
                           0000CF   478 G$SMB0CR$0$0 == 0x00cf
                           0000CF   479 _SMB0CR	=	0x00cf
                           0000D0   480 G$PSW$0$0 == 0x00d0
                           0000D0   481 _PSW	=	0x00d0
                           0000D1   482 G$REF0CN$0$0 == 0x00d1
                           0000D1   483 _REF0CN	=	0x00d1
                           0000D2   484 G$DAC0L$0$0 == 0x00d2
                           0000D2   485 _DAC0L	=	0x00d2
                           0000D3   486 G$DAC0H$0$0 == 0x00d3
                           0000D3   487 _DAC0H	=	0x00d3
                           0000D4   488 G$DAC0CN$0$0 == 0x00d4
                           0000D4   489 _DAC0CN	=	0x00d4
                           0000D5   490 G$DAC1L$0$0 == 0x00d5
                           0000D5   491 _DAC1L	=	0x00d5
                           0000D6   492 G$DAC1H$0$0 == 0x00d6
                           0000D6   493 _DAC1H	=	0x00d6
                           0000D7   494 G$DAC1CN$0$0 == 0x00d7
                           0000D7   495 _DAC1CN	=	0x00d7
                           0000D8   496 G$PCA0CN$0$0 == 0x00d8
                           0000D8   497 _PCA0CN	=	0x00d8
                           0000D9   498 G$PCA0MD$0$0 == 0x00d9
                           0000D9   499 _PCA0MD	=	0x00d9
                           0000DA   500 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   501 _PCA0CPM0	=	0x00da
                           0000DB   502 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   503 _PCA0CPM1	=	0x00db
                           0000DC   504 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   505 _PCA0CPM2	=	0x00dc
                           0000DD   506 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   507 _PCA0CPM3	=	0x00dd
                           0000DE   508 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   509 _PCA0CPM4	=	0x00de
                           0000E0   510 G$ACC$0$0 == 0x00e0
                           0000E0   511 _ACC	=	0x00e0
                           0000E1   512 G$XBR0$0$0 == 0x00e1
                           0000E1   513 _XBR0	=	0x00e1
                           0000E2   514 G$XBR1$0$0 == 0x00e2
                           0000E2   515 _XBR1	=	0x00e2
                           0000E3   516 G$XBR2$0$0 == 0x00e3
                           0000E3   517 _XBR2	=	0x00e3
                           0000E4   518 G$RCAP4L$0$0 == 0x00e4
                           0000E4   519 _RCAP4L	=	0x00e4
                           0000E5   520 G$RCAP4H$0$0 == 0x00e5
                           0000E5   521 _RCAP4H	=	0x00e5
                           0000E6   522 G$EIE1$0$0 == 0x00e6
                           0000E6   523 _EIE1	=	0x00e6
                           0000E7   524 G$EIE2$0$0 == 0x00e7
                           0000E7   525 _EIE2	=	0x00e7
                           0000E8   526 G$ADC0CN$0$0 == 0x00e8
                           0000E8   527 _ADC0CN	=	0x00e8
                           0000E9   528 G$PCA0L$0$0 == 0x00e9
                           0000E9   529 _PCA0L	=	0x00e9
                           0000EA   530 G$PCA0CPL0$0$0 == 0x00ea
                           0000EA   531 _PCA0CPL0	=	0x00ea
                           0000EB   532 G$PCA0CPL1$0$0 == 0x00eb
                           0000EB   533 _PCA0CPL1	=	0x00eb
                           0000EC   534 G$PCA0CPL2$0$0 == 0x00ec
                           0000EC   535 _PCA0CPL2	=	0x00ec
                           0000ED   536 G$PCA0CPL3$0$0 == 0x00ed
                           0000ED   537 _PCA0CPL3	=	0x00ed
                           0000EE   538 G$PCA0CPL4$0$0 == 0x00ee
                           0000EE   539 _PCA0CPL4	=	0x00ee
                           0000EF   540 G$RSTSRC$0$0 == 0x00ef
                           0000EF   541 _RSTSRC	=	0x00ef
                           0000F0   542 G$B$0$0 == 0x00f0
                           0000F0   543 _B	=	0x00f0
                           0000F1   544 G$SCON1$0$0 == 0x00f1
                           0000F1   545 _SCON1	=	0x00f1
                           0000F2   546 G$SBUF1$0$0 == 0x00f2
                           0000F2   547 _SBUF1	=	0x00f2
                           0000F3   548 G$SADDR1$0$0 == 0x00f3
                           0000F3   549 _SADDR1	=	0x00f3
                           0000F4   550 G$TL4$0$0 == 0x00f4
                           0000F4   551 _TL4	=	0x00f4
                           0000F5   552 G$TH4$0$0 == 0x00f5
                           0000F5   553 _TH4	=	0x00f5
                           0000F6   554 G$EIP1$0$0 == 0x00f6
                           0000F6   555 _EIP1	=	0x00f6
                           0000F7   556 G$EIP2$0$0 == 0x00f7
                           0000F7   557 _EIP2	=	0x00f7
                           0000F8   558 G$SPI0CN$0$0 == 0x00f8
                           0000F8   559 _SPI0CN	=	0x00f8
                           0000F9   560 G$PCA0H$0$0 == 0x00f9
                           0000F9   561 _PCA0H	=	0x00f9
                           0000FA   562 G$PCA0CPH0$0$0 == 0x00fa
                           0000FA   563 _PCA0CPH0	=	0x00fa
                           0000FB   564 G$PCA0CPH1$0$0 == 0x00fb
                           0000FB   565 _PCA0CPH1	=	0x00fb
                           0000FC   566 G$PCA0CPH2$0$0 == 0x00fc
                           0000FC   567 _PCA0CPH2	=	0x00fc
                           0000FD   568 G$PCA0CPH3$0$0 == 0x00fd
                           0000FD   569 _PCA0CPH3	=	0x00fd
                           0000FE   570 G$PCA0CPH4$0$0 == 0x00fe
                           0000FE   571 _PCA0CPH4	=	0x00fe
                           0000FF   572 G$WDTCN$0$0 == 0x00ff
                           0000FF   573 _WDTCN	=	0x00ff
                           008C8A   574 G$TMR0$0$0 == 0x8c8a
                           008C8A   575 _TMR0	=	0x8c8a
                           008D8B   576 G$TMR1$0$0 == 0x8d8b
                           008D8B   577 _TMR1	=	0x8d8b
                           00CDCC   578 G$TMR2$0$0 == 0xcdcc
                           00CDCC   579 _TMR2	=	0xcdcc
                           00CBCA   580 G$RCAP2$0$0 == 0xcbca
                           00CBCA   581 _RCAP2	=	0xcbca
                           009594   582 G$TMR3$0$0 == 0x9594
                           009594   583 _TMR3	=	0x9594
                           009392   584 G$TMR3RL$0$0 == 0x9392
                           009392   585 _TMR3RL	=	0x9392
                           00F5F4   586 G$TMR4$0$0 == 0xf5f4
                           00F5F4   587 _TMR4	=	0xf5f4
                           00E5E4   588 G$RCAP4$0$0 == 0xe5e4
                           00E5E4   589 _RCAP4	=	0xe5e4
                           00BFBE   590 G$ADC0$0$0 == 0xbfbe
                           00BFBE   591 _ADC0	=	0xbfbe
                           00C5C4   592 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   593 _ADC0GT	=	0xc5c4
                           00C7C6   594 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   595 _ADC0LT	=	0xc7c6
                           00D3D2   596 G$DAC0$0$0 == 0xd3d2
                           00D3D2   597 _DAC0	=	0xd3d2
                           00D6D5   598 G$DAC1$0$0 == 0xd6d5
                           00D6D5   599 _DAC1	=	0xd6d5
                           00F9E9   600 G$PCA0$0$0 == 0xf9e9
                           00F9E9   601 _PCA0	=	0xf9e9
                           00FAEA   602 G$PCA0CP0$0$0 == 0xfaea
                           00FAEA   603 _PCA0CP0	=	0xfaea
                           00FBEB   604 G$PCA0CP1$0$0 == 0xfbeb
                           00FBEB   605 _PCA0CP1	=	0xfbeb
                           00FCEC   606 G$PCA0CP2$0$0 == 0xfcec
                           00FCEC   607 _PCA0CP2	=	0xfcec
                           00FDED   608 G$PCA0CP3$0$0 == 0xfded
                           00FDED   609 _PCA0CP3	=	0xfded
                           00FEEE   610 G$PCA0CP4$0$0 == 0xfeee
                           00FEEE   611 _PCA0CP4	=	0xfeee
                                    612 ;--------------------------------------------------------
                                    613 ; special function bits
                                    614 ;--------------------------------------------------------
                                    615 	.area RSEG    (ABS,DATA)
      000000                        616 	.org 0x0000
                           000080   617 G$P0_0$0$0 == 0x0080
                           000080   618 _P0_0	=	0x0080
                           000081   619 G$P0_1$0$0 == 0x0081
                           000081   620 _P0_1	=	0x0081
                           000082   621 G$P0_2$0$0 == 0x0082
                           000082   622 _P0_2	=	0x0082
                           000083   623 G$P0_3$0$0 == 0x0083
                           000083   624 _P0_3	=	0x0083
                           000084   625 G$P0_4$0$0 == 0x0084
                           000084   626 _P0_4	=	0x0084
                           000085   627 G$P0_5$0$0 == 0x0085
                           000085   628 _P0_5	=	0x0085
                           000086   629 G$P0_6$0$0 == 0x0086
                           000086   630 _P0_6	=	0x0086
                           000087   631 G$P0_7$0$0 == 0x0087
                           000087   632 _P0_7	=	0x0087
                           000088   633 G$IT0$0$0 == 0x0088
                           000088   634 _IT0	=	0x0088
                           000089   635 G$IE0$0$0 == 0x0089
                           000089   636 _IE0	=	0x0089
                           00008A   637 G$IT1$0$0 == 0x008a
                           00008A   638 _IT1	=	0x008a
                           00008B   639 G$IE1$0$0 == 0x008b
                           00008B   640 _IE1	=	0x008b
                           00008C   641 G$TR0$0$0 == 0x008c
                           00008C   642 _TR0	=	0x008c
                           00008D   643 G$TF0$0$0 == 0x008d
                           00008D   644 _TF0	=	0x008d
                           00008E   645 G$TR1$0$0 == 0x008e
                           00008E   646 _TR1	=	0x008e
                           00008F   647 G$TF1$0$0 == 0x008f
                           00008F   648 _TF1	=	0x008f
                           000090   649 G$P1_0$0$0 == 0x0090
                           000090   650 _P1_0	=	0x0090
                           000091   651 G$P1_1$0$0 == 0x0091
                           000091   652 _P1_1	=	0x0091
                           000092   653 G$P1_2$0$0 == 0x0092
                           000092   654 _P1_2	=	0x0092
                           000093   655 G$P1_3$0$0 == 0x0093
                           000093   656 _P1_3	=	0x0093
                           000094   657 G$P1_4$0$0 == 0x0094
                           000094   658 _P1_4	=	0x0094
                           000095   659 G$P1_5$0$0 == 0x0095
                           000095   660 _P1_5	=	0x0095
                           000096   661 G$P1_6$0$0 == 0x0096
                           000096   662 _P1_6	=	0x0096
                           000097   663 G$P1_7$0$0 == 0x0097
                           000097   664 _P1_7	=	0x0097
                           000098   665 G$RI$0$0 == 0x0098
                           000098   666 _RI	=	0x0098
                           000098   667 G$RI0$0$0 == 0x0098
                           000098   668 _RI0	=	0x0098
                           000099   669 G$TI$0$0 == 0x0099
                           000099   670 _TI	=	0x0099
                           000099   671 G$TI0$0$0 == 0x0099
                           000099   672 _TI0	=	0x0099
                           00009A   673 G$RB8$0$0 == 0x009a
                           00009A   674 _RB8	=	0x009a
                           00009A   675 G$RB80$0$0 == 0x009a
                           00009A   676 _RB80	=	0x009a
                           00009B   677 G$TB8$0$0 == 0x009b
                           00009B   678 _TB8	=	0x009b
                           00009B   679 G$TB80$0$0 == 0x009b
                           00009B   680 _TB80	=	0x009b
                           00009C   681 G$REN$0$0 == 0x009c
                           00009C   682 _REN	=	0x009c
                           00009C   683 G$REN0$0$0 == 0x009c
                           00009C   684 _REN0	=	0x009c
                           00009D   685 G$SM2$0$0 == 0x009d
                           00009D   686 _SM2	=	0x009d
                           00009D   687 G$SM20$0$0 == 0x009d
                           00009D   688 _SM20	=	0x009d
                           00009D   689 G$MCE0$0$0 == 0x009d
                           00009D   690 _MCE0	=	0x009d
                           00009E   691 G$SM1$0$0 == 0x009e
                           00009E   692 _SM1	=	0x009e
                           00009E   693 G$SM10$0$0 == 0x009e
                           00009E   694 _SM10	=	0x009e
                           00009F   695 G$SM0$0$0 == 0x009f
                           00009F   696 _SM0	=	0x009f
                           00009F   697 G$SM00$0$0 == 0x009f
                           00009F   698 _SM00	=	0x009f
                           00009F   699 G$S0MODE$0$0 == 0x009f
                           00009F   700 _S0MODE	=	0x009f
                           0000A0   701 G$P2_0$0$0 == 0x00a0
                           0000A0   702 _P2_0	=	0x00a0
                           0000A1   703 G$P2_1$0$0 == 0x00a1
                           0000A1   704 _P2_1	=	0x00a1
                           0000A2   705 G$P2_2$0$0 == 0x00a2
                           0000A2   706 _P2_2	=	0x00a2
                           0000A3   707 G$P2_3$0$0 == 0x00a3
                           0000A3   708 _P2_3	=	0x00a3
                           0000A4   709 G$P2_4$0$0 == 0x00a4
                           0000A4   710 _P2_4	=	0x00a4
                           0000A5   711 G$P2_5$0$0 == 0x00a5
                           0000A5   712 _P2_5	=	0x00a5
                           0000A6   713 G$P2_6$0$0 == 0x00a6
                           0000A6   714 _P2_6	=	0x00a6
                           0000A7   715 G$P2_7$0$0 == 0x00a7
                           0000A7   716 _P2_7	=	0x00a7
                           0000A8   717 G$EX0$0$0 == 0x00a8
                           0000A8   718 _EX0	=	0x00a8
                           0000A9   719 G$ET0$0$0 == 0x00a9
                           0000A9   720 _ET0	=	0x00a9
                           0000AA   721 G$EX1$0$0 == 0x00aa
                           0000AA   722 _EX1	=	0x00aa
                           0000AB   723 G$ET1$0$0 == 0x00ab
                           0000AB   724 _ET1	=	0x00ab
                           0000AC   725 G$ES0$0$0 == 0x00ac
                           0000AC   726 _ES0	=	0x00ac
                           0000AC   727 G$ES$0$0 == 0x00ac
                           0000AC   728 _ES	=	0x00ac
                           0000AD   729 G$ET2$0$0 == 0x00ad
                           0000AD   730 _ET2	=	0x00ad
                           0000AF   731 G$EA$0$0 == 0x00af
                           0000AF   732 _EA	=	0x00af
                           0000B0   733 G$P3_0$0$0 == 0x00b0
                           0000B0   734 _P3_0	=	0x00b0
                           0000B1   735 G$P3_1$0$0 == 0x00b1
                           0000B1   736 _P3_1	=	0x00b1
                           0000B2   737 G$P3_2$0$0 == 0x00b2
                           0000B2   738 _P3_2	=	0x00b2
                           0000B3   739 G$P3_3$0$0 == 0x00b3
                           0000B3   740 _P3_3	=	0x00b3
                           0000B4   741 G$P3_4$0$0 == 0x00b4
                           0000B4   742 _P3_4	=	0x00b4
                           0000B5   743 G$P3_5$0$0 == 0x00b5
                           0000B5   744 _P3_5	=	0x00b5
                           0000B6   745 G$P3_6$0$0 == 0x00b6
                           0000B6   746 _P3_6	=	0x00b6
                           0000B7   747 G$P3_7$0$0 == 0x00b7
                           0000B7   748 _P3_7	=	0x00b7
                           0000B8   749 G$PX0$0$0 == 0x00b8
                           0000B8   750 _PX0	=	0x00b8
                           0000B9   751 G$PT0$0$0 == 0x00b9
                           0000B9   752 _PT0	=	0x00b9
                           0000BA   753 G$PX1$0$0 == 0x00ba
                           0000BA   754 _PX1	=	0x00ba
                           0000BB   755 G$PT1$0$0 == 0x00bb
                           0000BB   756 _PT1	=	0x00bb
                           0000BC   757 G$PS0$0$0 == 0x00bc
                           0000BC   758 _PS0	=	0x00bc
                           0000BC   759 G$PS$0$0 == 0x00bc
                           0000BC   760 _PS	=	0x00bc
                           0000BD   761 G$PT2$0$0 == 0x00bd
                           0000BD   762 _PT2	=	0x00bd
                           0000C0   763 G$SMBTOE$0$0 == 0x00c0
                           0000C0   764 _SMBTOE	=	0x00c0
                           0000C1   765 G$SMBFTE$0$0 == 0x00c1
                           0000C1   766 _SMBFTE	=	0x00c1
                           0000C2   767 G$AA$0$0 == 0x00c2
                           0000C2   768 _AA	=	0x00c2
                           0000C3   769 G$SI$0$0 == 0x00c3
                           0000C3   770 _SI	=	0x00c3
                           0000C4   771 G$STO$0$0 == 0x00c4
                           0000C4   772 _STO	=	0x00c4
                           0000C5   773 G$STA$0$0 == 0x00c5
                           0000C5   774 _STA	=	0x00c5
                           0000C6   775 G$ENSMB$0$0 == 0x00c6
                           0000C6   776 _ENSMB	=	0x00c6
                           0000C7   777 G$BUSY$0$0 == 0x00c7
                           0000C7   778 _BUSY	=	0x00c7
                           0000C8   779 G$CPRL2$0$0 == 0x00c8
                           0000C8   780 _CPRL2	=	0x00c8
                           0000C9   781 G$CT2$0$0 == 0x00c9
                           0000C9   782 _CT2	=	0x00c9
                           0000CA   783 G$TR2$0$0 == 0x00ca
                           0000CA   784 _TR2	=	0x00ca
                           0000CB   785 G$EXEN2$0$0 == 0x00cb
                           0000CB   786 _EXEN2	=	0x00cb
                           0000CC   787 G$TCLK$0$0 == 0x00cc
                           0000CC   788 _TCLK	=	0x00cc
                           0000CD   789 G$RCLK$0$0 == 0x00cd
                           0000CD   790 _RCLK	=	0x00cd
                           0000CE   791 G$EXF2$0$0 == 0x00ce
                           0000CE   792 _EXF2	=	0x00ce
                           0000CF   793 G$TF2$0$0 == 0x00cf
                           0000CF   794 _TF2	=	0x00cf
                           0000D0   795 G$P$0$0 == 0x00d0
                           0000D0   796 _P	=	0x00d0
                           0000D1   797 G$F1$0$0 == 0x00d1
                           0000D1   798 _F1	=	0x00d1
                           0000D2   799 G$OV$0$0 == 0x00d2
                           0000D2   800 _OV	=	0x00d2
                           0000D3   801 G$RS0$0$0 == 0x00d3
                           0000D3   802 _RS0	=	0x00d3
                           0000D4   803 G$RS1$0$0 == 0x00d4
                           0000D4   804 _RS1	=	0x00d4
                           0000D5   805 G$F0$0$0 == 0x00d5
                           0000D5   806 _F0	=	0x00d5
                           0000D6   807 G$AC$0$0 == 0x00d6
                           0000D6   808 _AC	=	0x00d6
                           0000D7   809 G$CY$0$0 == 0x00d7
                           0000D7   810 _CY	=	0x00d7
                           0000D8   811 G$CCF0$0$0 == 0x00d8
                           0000D8   812 _CCF0	=	0x00d8
                           0000D9   813 G$CCF1$0$0 == 0x00d9
                           0000D9   814 _CCF1	=	0x00d9
                           0000DA   815 G$CCF2$0$0 == 0x00da
                           0000DA   816 _CCF2	=	0x00da
                           0000DB   817 G$CCF3$0$0 == 0x00db
                           0000DB   818 _CCF3	=	0x00db
                           0000DC   819 G$CCF4$0$0 == 0x00dc
                           0000DC   820 _CCF4	=	0x00dc
                           0000DE   821 G$CR$0$0 == 0x00de
                           0000DE   822 _CR	=	0x00de
                           0000DF   823 G$CF$0$0 == 0x00df
                           0000DF   824 _CF	=	0x00df
                           0000E8   825 G$ADLJST$0$0 == 0x00e8
                           0000E8   826 _ADLJST	=	0x00e8
                           0000E8   827 G$AD0LJST$0$0 == 0x00e8
                           0000E8   828 _AD0LJST	=	0x00e8
                           0000E9   829 G$ADWINT$0$0 == 0x00e9
                           0000E9   830 _ADWINT	=	0x00e9
                           0000E9   831 G$AD0WINT$0$0 == 0x00e9
                           0000E9   832 _AD0WINT	=	0x00e9
                           0000EA   833 G$ADSTM0$0$0 == 0x00ea
                           0000EA   834 _ADSTM0	=	0x00ea
                           0000EA   835 G$AD0CM0$0$0 == 0x00ea
                           0000EA   836 _AD0CM0	=	0x00ea
                           0000EB   837 G$ADSTM1$0$0 == 0x00eb
                           0000EB   838 _ADSTM1	=	0x00eb
                           0000EB   839 G$AD0CM1$0$0 == 0x00eb
                           0000EB   840 _AD0CM1	=	0x00eb
                           0000EC   841 G$ADBUSY$0$0 == 0x00ec
                           0000EC   842 _ADBUSY	=	0x00ec
                           0000EC   843 G$AD0BUSY$0$0 == 0x00ec
                           0000EC   844 _AD0BUSY	=	0x00ec
                           0000ED   845 G$ADCINT$0$0 == 0x00ed
                           0000ED   846 _ADCINT	=	0x00ed
                           0000ED   847 G$AD0INT$0$0 == 0x00ed
                           0000ED   848 _AD0INT	=	0x00ed
                           0000EE   849 G$ADCTM$0$0 == 0x00ee
                           0000EE   850 _ADCTM	=	0x00ee
                           0000EE   851 G$AD0TM$0$0 == 0x00ee
                           0000EE   852 _AD0TM	=	0x00ee
                           0000EF   853 G$ADCEN$0$0 == 0x00ef
                           0000EF   854 _ADCEN	=	0x00ef
                           0000EF   855 G$AD0EN$0$0 == 0x00ef
                           0000EF   856 _AD0EN	=	0x00ef
                           0000F8   857 G$SPIEN$0$0 == 0x00f8
                           0000F8   858 _SPIEN	=	0x00f8
                           0000F9   859 G$MSTEN$0$0 == 0x00f9
                           0000F9   860 _MSTEN	=	0x00f9
                           0000FA   861 G$SLVSEL$0$0 == 0x00fa
                           0000FA   862 _SLVSEL	=	0x00fa
                           0000FB   863 G$TXBSY$0$0 == 0x00fb
                           0000FB   864 _TXBSY	=	0x00fb
                           0000FC   865 G$RXOVRN$0$0 == 0x00fc
                           0000FC   866 _RXOVRN	=	0x00fc
                           0000FD   867 G$MODF$0$0 == 0x00fd
                           0000FD   868 _MODF	=	0x00fd
                           0000FE   869 G$WCOL$0$0 == 0x00fe
                           0000FE   870 _WCOL	=	0x00fe
                           0000FF   871 G$SPIF$0$0 == 0x00ff
                           0000FF   872 _SPIF	=	0x00ff
                                    873 ;--------------------------------------------------------
                                    874 ; overlayable register banks
                                    875 ;--------------------------------------------------------
                                    876 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                        877 	.ds 8
                                    878 ;--------------------------------------------------------
                                    879 ; internal ram data
                                    880 ;--------------------------------------------------------
                                    881 	.area DSEG    (DATA)
                           000000   882 G$PW_CENTER$0$0==.
      000008                        883 _PW_CENTER::
      000008                        884 	.ds 2
                           000002   885 G$PW_MIN_s$0$0==.
      00000A                        886 _PW_MIN_s::
      00000A                        887 	.ds 2
                           000004   888 G$PW_MAX_s$0$0==.
      00000C                        889 _PW_MAX_s::
      00000C                        890 	.ds 2
                           000006   891 G$PW_MIN_m$0$0==.
      00000E                        892 _PW_MIN_m::
      00000E                        893 	.ds 2
                           000008   894 G$PW_MAX_m$0$0==.
      000010                        895 _PW_MAX_m::
      000010                        896 	.ds 2
                           00000A   897 G$PW_s$0$0==.
      000012                        898 _PW_s::
      000012                        899 	.ds 2
                           00000C   900 G$PW_m$0$0==.
      000014                        901 _PW_m::
      000014                        902 	.ds 2
                           00000E   903 G$flag$0$0==.
      000016                        904 _flag::
      000016                        905 	.ds 2
                           000010   906 G$counter$0$0==.
      000018                        907 _counter::
      000018                        908 	.ds 2
                           000012   909 Llab3_1.aligned_alloc$size$1$39==.
      00001A                        910 _aligned_alloc_PARM_2:
      00001A                        911 	.ds 2
                                    912 ;--------------------------------------------------------
                                    913 ; overlayable items in internal ram 
                                    914 ;--------------------------------------------------------
                                    915 	.area	OSEG    (OVR,DATA)
                                    916 	.area	OSEG    (OVR,DATA)
                                    917 ;--------------------------------------------------------
                                    918 ; Stack segment in internal ram 
                                    919 ;--------------------------------------------------------
                                    920 	.area	SSEG
      000048                        921 __start__stack:
      000048                        922 	.ds	1
                                    923 
                                    924 ;--------------------------------------------------------
                                    925 ; indirectly addressable internal ram data
                                    926 ;--------------------------------------------------------
                                    927 	.area ISEG    (DATA)
                                    928 ;--------------------------------------------------------
                                    929 ; absolute internal ram data
                                    930 ;--------------------------------------------------------
                                    931 	.area IABS    (ABS,DATA)
                                    932 	.area IABS    (ABS,DATA)
                                    933 ;--------------------------------------------------------
                                    934 ; bit data
                                    935 ;--------------------------------------------------------
                                    936 	.area BSEG    (BIT)
                                    937 ;--------------------------------------------------------
                                    938 ; paged external ram data
                                    939 ;--------------------------------------------------------
                                    940 	.area PSEG    (PAG,XDATA)
                                    941 ;--------------------------------------------------------
                                    942 ; external ram data
                                    943 ;--------------------------------------------------------
                                    944 	.area XSEG    (XDATA)
                                    945 ;--------------------------------------------------------
                                    946 ; absolute external ram data
                                    947 ;--------------------------------------------------------
                                    948 	.area XABS    (ABS,XDATA)
                                    949 ;--------------------------------------------------------
                                    950 ; external initialized ram data
                                    951 ;--------------------------------------------------------
                                    952 	.area XISEG   (XDATA)
                                    953 	.area HOME    (CODE)
                                    954 	.area GSINIT0 (CODE)
                                    955 	.area GSINIT1 (CODE)
                                    956 	.area GSINIT2 (CODE)
                                    957 	.area GSINIT3 (CODE)
                                    958 	.area GSINIT4 (CODE)
                                    959 	.area GSINIT5 (CODE)
                                    960 	.area GSINIT  (CODE)
                                    961 	.area GSFINAL (CODE)
                                    962 	.area CSEG    (CODE)
                                    963 ;--------------------------------------------------------
                                    964 ; interrupt vector 
                                    965 ;--------------------------------------------------------
                                    966 	.area HOME    (CODE)
      000000                        967 __interrupt_vect:
      000000 02 00 51         [24]  968 	ljmp	__sdcc_gsinit_startup
      000003 32               [24]  969 	reti
      000004                        970 	.ds	7
      00000B 32               [24]  971 	reti
      00000C                        972 	.ds	7
      000013 32               [24]  973 	reti
      000014                        974 	.ds	7
      00001B 32               [24]  975 	reti
      00001C                        976 	.ds	7
      000023 32               [24]  977 	reti
      000024                        978 	.ds	7
      00002B 32               [24]  979 	reti
      00002C                        980 	.ds	7
      000033 32               [24]  981 	reti
      000034                        982 	.ds	7
      00003B 32               [24]  983 	reti
      00003C                        984 	.ds	7
      000043 32               [24]  985 	reti
      000044                        986 	.ds	7
      00004B 02 01 BB         [24]  987 	ljmp	_PCA_ISR
                                    988 ;--------------------------------------------------------
                                    989 ; global & static initialisations
                                    990 ;--------------------------------------------------------
                                    991 	.area HOME    (CODE)
                                    992 	.area GSINIT  (CODE)
                                    993 	.area GSFINAL (CODE)
                                    994 	.area GSINIT  (CODE)
                                    995 	.globl __sdcc_gsinit_startup
                                    996 	.globl __sdcc_program_startup
                                    997 	.globl __start__stack
                                    998 	.globl __mcs51_genXINIT
                                    999 	.globl __mcs51_genXRAMCLEAR
                                   1000 	.globl __mcs51_genRAMCLEAR
                           000000  1001 	C$lab3_1.c$25$1$67 ==.
                                   1002 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:25: unsigned int PW_CENTER = 2769;
      0000AA 75 08 D1         [24] 1003 	mov	_PW_CENTER,#0xd1
      0000AD 75 09 0A         [24] 1004 	mov	(_PW_CENTER + 1),#0x0a
                           000006  1005 	C$lab3_1.c$26$1$67 ==.
                                   1006 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:26: unsigned int PW_MIN_s = 1661;
      0000B0 75 0A 7D         [24] 1007 	mov	_PW_MIN_s,#0x7d
      0000B3 75 0B 06         [24] 1008 	mov	(_PW_MIN_s + 1),#0x06
                           00000C  1009 	C$lab3_1.c$27$1$67 ==.
                                   1010 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:27: unsigned int PW_MAX_s = 3877;
      0000B6 75 0C 25         [24] 1011 	mov	_PW_MAX_s,#0x25
      0000B9 75 0D 0F         [24] 1012 	mov	(_PW_MAX_s + 1),#0x0f
                           000012  1013 	C$lab3_1.c$28$1$67 ==.
                                   1014 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:28: unsigned int PW_MIN_m = 2027;
      0000BC 75 0E EB         [24] 1015 	mov	_PW_MIN_m,#0xeb
      0000BF 75 0F 07         [24] 1016 	mov	(_PW_MIN_m + 1),#0x07
                           000018  1017 	C$lab3_1.c$29$1$67 ==.
                                   1018 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:29: unsigned int PW_MAX_m = 3504;
      0000C2 75 10 B0         [24] 1019 	mov	_PW_MAX_m,#0xb0
      0000C5 75 11 0D         [24] 1020 	mov	(_PW_MAX_m + 1),#0x0d
                           00001E  1021 	C$lab3_1.c$32$1$67 ==.
                                   1022 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:32: unsigned int flag = 0;
      0000C8 E4               [12] 1023 	clr	a
      0000C9 F5 16            [12] 1024 	mov	_flag,a
      0000CB F5 17            [12] 1025 	mov	(_flag + 1),a
                           000023  1026 	C$lab3_1.c$33$1$67 ==.
                                   1027 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:33: unsigned int counter = 0;
      0000CD F5 18            [12] 1028 	mov	_counter,a
      0000CF F5 19            [12] 1029 	mov	(_counter + 1),a
                                   1030 	.area GSFINAL (CODE)
      0000D1 02 00 4E         [24] 1031 	ljmp	__sdcc_program_startup
                                   1032 ;--------------------------------------------------------
                                   1033 ; Home
                                   1034 ;--------------------------------------------------------
                                   1035 	.area HOME    (CODE)
                                   1036 	.area HOME    (CODE)
      00004E                       1037 __sdcc_program_startup:
      00004E 02 01 4B         [24] 1038 	ljmp	_main
                                   1039 ;	return from main will return to caller
                                   1040 ;--------------------------------------------------------
                                   1041 ; code
                                   1042 ;--------------------------------------------------------
                                   1043 	.area CSEG    (CODE)
                                   1044 ;------------------------------------------------------------
                                   1045 ;Allocation info for local variables in function 'SYSCLK_Init'
                                   1046 ;------------------------------------------------------------
                                   1047 ;i                         Allocated to registers r6 r7 
                                   1048 ;------------------------------------------------------------
                           000000  1049 	G$SYSCLK_Init$0$0 ==.
                           000000  1050 	C$c8051_SDCC.h$42$0$0 ==.
                                   1051 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:42: void SYSCLK_Init(void)
                                   1052 ;	-----------------------------------------
                                   1053 ;	 function SYSCLK_Init
                                   1054 ;	-----------------------------------------
      0000D4                       1055 _SYSCLK_Init:
                           000007  1056 	ar7 = 0x07
                           000006  1057 	ar6 = 0x06
                           000005  1058 	ar5 = 0x05
                           000004  1059 	ar4 = 0x04
                           000003  1060 	ar3 = 0x03
                           000002  1061 	ar2 = 0x02
                           000001  1062 	ar1 = 0x01
                           000000  1063 	ar0 = 0x00
                           000000  1064 	C$c8051_SDCC.h$46$1$2 ==.
                                   1065 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:46: OSCXCN = 0x67;                      // start external oscillator with
      0000D4 75 B1 67         [24] 1066 	mov	_OSCXCN,#0x67
                           000003  1067 	C$c8051_SDCC.h$49$1$2 ==.
                                   1068 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:49: for (i=0; i < 256; i++);            // wait for oscillator to start
      0000D7 7E 00            [12] 1069 	mov	r6,#0x00
      0000D9 7F 01            [12] 1070 	mov	r7,#0x01
      0000DB                       1071 00107$:
      0000DB EE               [12] 1072 	mov	a,r6
      0000DC 24 FF            [12] 1073 	add	a,#0xff
      0000DE FC               [12] 1074 	mov	r4,a
      0000DF EF               [12] 1075 	mov	a,r7
      0000E0 34 FF            [12] 1076 	addc	a,#0xff
      0000E2 FD               [12] 1077 	mov	r5,a
      0000E3 8C 06            [24] 1078 	mov	ar6,r4
      0000E5 8D 07            [24] 1079 	mov	ar7,r5
      0000E7 EC               [12] 1080 	mov	a,r4
      0000E8 4D               [12] 1081 	orl	a,r5
      0000E9 70 F0            [24] 1082 	jnz	00107$
                           000017  1083 	C$c8051_SDCC.h$51$1$2 ==.
                                   1084 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:51: while (!(OSCXCN & 0x80));           // Wait for crystal osc. to settle
      0000EB                       1085 00102$:
      0000EB E5 B1            [12] 1086 	mov	a,_OSCXCN
      0000ED 30 E7 FB         [24] 1087 	jnb	acc.7,00102$
                           00001C  1088 	C$c8051_SDCC.h$53$1$2 ==.
                                   1089 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:53: OSCICN = 0x88;                      // select external oscillator as SYSCLK
      0000F0 75 B2 88         [24] 1090 	mov	_OSCICN,#0x88
                           00001F  1091 	C$c8051_SDCC.h$56$1$2 ==.
                           00001F  1092 	XG$SYSCLK_Init$0$0 ==.
      0000F3 22               [24] 1093 	ret
                                   1094 ;------------------------------------------------------------
                                   1095 ;Allocation info for local variables in function 'UART0_Init'
                                   1096 ;------------------------------------------------------------
                           000020  1097 	G$UART0_Init$0$0 ==.
                           000020  1098 	C$c8051_SDCC.h$64$1$2 ==.
                                   1099 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:64: void UART0_Init(void)
                                   1100 ;	-----------------------------------------
                                   1101 ;	 function UART0_Init
                                   1102 ;	-----------------------------------------
      0000F4                       1103 _UART0_Init:
                           000020  1104 	C$c8051_SDCC.h$66$1$4 ==.
                                   1105 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:66: SCON0  = 0x50;                      // SCON0: mode 1, 8-bit UART, enable RX
      0000F4 75 98 50         [24] 1106 	mov	_SCON0,#0x50
                           000023  1107 	C$c8051_SDCC.h$67$1$4 ==.
                                   1108 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:67: TMOD   = 0x20;                      // TMOD: timer 1, mode 2, 8-bit reload
      0000F7 75 89 20         [24] 1109 	mov	_TMOD,#0x20
                           000026  1110 	C$c8051_SDCC.h$68$1$4 ==.
                                   1111 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:68: TH1    = 0xFF&-(SYSCLK/BAUDRATE/16);     // set Timer1 reload value for baudrate
      0000FA 75 8D DC         [24] 1112 	mov	_TH1,#0xdc
                           000029  1113 	C$c8051_SDCC.h$69$1$4 ==.
                                   1114 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:69: TR1    = 1;                         // start Timer1
      0000FD D2 8E            [12] 1115 	setb	_TR1
                           00002B  1116 	C$c8051_SDCC.h$70$1$4 ==.
                                   1117 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:70: CKCON |= 0x10;                      // Timer1 uses SYSCLK as time base
      0000FF 43 8E 10         [24] 1118 	orl	_CKCON,#0x10
                           00002E  1119 	C$c8051_SDCC.h$71$1$4 ==.
                                   1120 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:71: PCON  |= 0x80;                      // SMOD00 = 1 (disable baud rate 
      000102 43 87 80         [24] 1121 	orl	_PCON,#0x80
                           000031  1122 	C$c8051_SDCC.h$73$1$4 ==.
                                   1123 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:73: TI0    = 1;                         // Indicate TX0 ready
      000105 D2 99            [12] 1124 	setb	_TI0
                           000033  1125 	C$c8051_SDCC.h$74$1$4 ==.
                                   1126 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:74: P0MDOUT |= 0x01;                    // Set TX0 to push/pull
      000107 43 A4 01         [24] 1127 	orl	_P0MDOUT,#0x01
                           000036  1128 	C$c8051_SDCC.h$75$1$4 ==.
                           000036  1129 	XG$UART0_Init$0$0 ==.
      00010A 22               [24] 1130 	ret
                                   1131 ;------------------------------------------------------------
                                   1132 ;Allocation info for local variables in function 'Sys_Init'
                                   1133 ;------------------------------------------------------------
                           000037  1134 	G$Sys_Init$0$0 ==.
                           000037  1135 	C$c8051_SDCC.h$83$1$4 ==.
                                   1136 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:83: void Sys_Init(void)
                                   1137 ;	-----------------------------------------
                                   1138 ;	 function Sys_Init
                                   1139 ;	-----------------------------------------
      00010B                       1140 _Sys_Init:
                           000037  1141 	C$c8051_SDCC.h$85$1$6 ==.
                                   1142 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:85: WDTCN = 0xde;			// disable watchdog timer
      00010B 75 FF DE         [24] 1143 	mov	_WDTCN,#0xde
                           00003A  1144 	C$c8051_SDCC.h$86$1$6 ==.
                                   1145 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:86: WDTCN = 0xad;
      00010E 75 FF AD         [24] 1146 	mov	_WDTCN,#0xad
                           00003D  1147 	C$c8051_SDCC.h$88$1$6 ==.
                                   1148 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:88: SYSCLK_Init();			// initialize oscillator
      000111 12 00 D4         [24] 1149 	lcall	_SYSCLK_Init
                           000040  1150 	C$c8051_SDCC.h$89$1$6 ==.
                                   1151 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:89: UART0_Init();			// initialize UART0
      000114 12 00 F4         [24] 1152 	lcall	_UART0_Init
                           000043  1153 	C$c8051_SDCC.h$91$1$6 ==.
                                   1154 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:91: XBR0 |= 0x04;
      000117 43 E1 04         [24] 1155 	orl	_XBR0,#0x04
                           000046  1156 	C$c8051_SDCC.h$92$1$6 ==.
                                   1157 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:92: XBR2 |= 0x40;                    	// Enable crossbar and weak pull-ups
      00011A 43 E3 40         [24] 1158 	orl	_XBR2,#0x40
                           000049  1159 	C$c8051_SDCC.h$93$1$6 ==.
                           000049  1160 	XG$Sys_Init$0$0 ==.
      00011D 22               [24] 1161 	ret
                                   1162 ;------------------------------------------------------------
                                   1163 ;Allocation info for local variables in function 'putchar'
                                   1164 ;------------------------------------------------------------
                                   1165 ;c                         Allocated to registers r7 
                                   1166 ;------------------------------------------------------------
                           00004A  1167 	G$putchar$0$0 ==.
                           00004A  1168 	C$c8051_SDCC.h$98$1$6 ==.
                                   1169 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:98: void putchar(char c)
                                   1170 ;	-----------------------------------------
                                   1171 ;	 function putchar
                                   1172 ;	-----------------------------------------
      00011E                       1173 _putchar:
      00011E AF 82            [24] 1174 	mov	r7,dpl
                           00004C  1175 	C$c8051_SDCC.h$100$1$8 ==.
                                   1176 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:100: while (!TI0); 
      000120                       1177 00101$:
                           00004C  1178 	C$c8051_SDCC.h$101$1$8 ==.
                                   1179 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:101: TI0 = 0;
      000120 10 99 02         [24] 1180 	jbc	_TI0,00112$
      000123 80 FB            [24] 1181 	sjmp	00101$
      000125                       1182 00112$:
                           000051  1183 	C$c8051_SDCC.h$102$1$8 ==.
                                   1184 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:102: SBUF0 = c;
      000125 8F 99            [24] 1185 	mov	_SBUF0,r7
                           000053  1186 	C$c8051_SDCC.h$103$1$8 ==.
                           000053  1187 	XG$putchar$0$0 ==.
      000127 22               [24] 1188 	ret
                                   1189 ;------------------------------------------------------------
                                   1190 ;Allocation info for local variables in function 'getchar'
                                   1191 ;------------------------------------------------------------
                                   1192 ;c                         Allocated to registers 
                                   1193 ;------------------------------------------------------------
                           000054  1194 	G$getchar$0$0 ==.
                           000054  1195 	C$c8051_SDCC.h$108$1$8 ==.
                                   1196 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:108: char getchar(void)
                                   1197 ;	-----------------------------------------
                                   1198 ;	 function getchar
                                   1199 ;	-----------------------------------------
      000128                       1200 _getchar:
                           000054  1201 	C$c8051_SDCC.h$111$1$10 ==.
                                   1202 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:111: while (!RI0);
      000128                       1203 00101$:
                           000054  1204 	C$c8051_SDCC.h$112$1$10 ==.
                                   1205 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:112: RI0 = 0;
      000128 10 98 02         [24] 1206 	jbc	_RI0,00112$
      00012B 80 FB            [24] 1207 	sjmp	00101$
      00012D                       1208 00112$:
                           000059  1209 	C$c8051_SDCC.h$113$1$10 ==.
                                   1210 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:113: c = SBUF0;
      00012D 85 99 82         [24] 1211 	mov	dpl,_SBUF0
                           00005C  1212 	C$c8051_SDCC.h$114$1$10 ==.
                                   1213 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:114: putchar(c);                          // echo to terminal
      000130 12 01 1E         [24] 1214 	lcall	_putchar
                           00005F  1215 	C$c8051_SDCC.h$115$1$10 ==.
                                   1216 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:115: return SBUF0;
      000133 85 99 82         [24] 1217 	mov	dpl,_SBUF0
                           000062  1218 	C$c8051_SDCC.h$116$1$10 ==.
                           000062  1219 	XG$getchar$0$0 ==.
      000136 22               [24] 1220 	ret
                                   1221 ;------------------------------------------------------------
                                   1222 ;Allocation info for local variables in function 'getchar_nw'
                                   1223 ;------------------------------------------------------------
                                   1224 ;c                         Allocated to registers 
                                   1225 ;------------------------------------------------------------
                           000063  1226 	G$getchar_nw$0$0 ==.
                           000063  1227 	C$c8051_SDCC.h$121$1$10 ==.
                                   1228 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:121: char getchar_nw(void)
                                   1229 ;	-----------------------------------------
                                   1230 ;	 function getchar_nw
                                   1231 ;	-----------------------------------------
      000137                       1232 _getchar_nw:
                           000063  1233 	C$c8051_SDCC.h$124$1$12 ==.
                                   1234 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:124: if (!RI0) return 0xFF;
      000137 20 98 05         [24] 1235 	jb	_RI0,00102$
      00013A 75 82 FF         [24] 1236 	mov	dpl,#0xff
      00013D 80 0B            [24] 1237 	sjmp	00104$
      00013F                       1238 00102$:
                           00006B  1239 	C$c8051_SDCC.h$127$2$13 ==.
                                   1240 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:127: RI0 = 0;
      00013F C2 98            [12] 1241 	clr	_RI0
                           00006D  1242 	C$c8051_SDCC.h$128$2$13 ==.
                                   1243 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:128: c = SBUF0;
      000141 85 99 82         [24] 1244 	mov	dpl,_SBUF0
                           000070  1245 	C$c8051_SDCC.h$129$2$13 ==.
                                   1246 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:129: putchar(c);                          // echo to terminal
      000144 12 01 1E         [24] 1247 	lcall	_putchar
                           000073  1248 	C$c8051_SDCC.h$130$2$13 ==.
                                   1249 ;	C:/Program Files/SDCC/bin/../include/mcs51/c8051_SDCC.h:130: return SBUF0;
      000147 85 99 82         [24] 1250 	mov	dpl,_SBUF0
      00014A                       1251 00104$:
                           000076  1252 	C$c8051_SDCC.h$132$1$12 ==.
                           000076  1253 	XG$getchar_nw$0$0 ==.
      00014A 22               [24] 1254 	ret
                                   1255 ;------------------------------------------------------------
                                   1256 ;Allocation info for local variables in function 'main'
                                   1257 ;------------------------------------------------------------
                           000077  1258 	G$main$0$0 ==.
                           000077  1259 	C$lab3_1.c$38$1$12 ==.
                                   1260 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:38: void main(void){
                                   1261 ;	-----------------------------------------
                                   1262 ;	 function main
                                   1263 ;	-----------------------------------------
      00014B                       1264 _main:
                           000077  1265 	C$lab3_1.c$40$1$53 ==.
                                   1266 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:40: Sys_Init();
      00014B 12 01 0B         [24] 1267 	lcall	_Sys_Init
                           00007A  1268 	C$lab3_1.c$41$1$53 ==.
                                   1269 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:41: putchar(' '); //the quotes in this line may not format correctly
      00014E 75 82 20         [24] 1270 	mov	dpl,#0x20
      000151 12 01 1E         [24] 1271 	lcall	_putchar
                           000080  1272 	C$lab3_1.c$42$1$53 ==.
                                   1273 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:42: Port_Init();
      000154 12 01 A1         [24] 1274 	lcall	_Port_Init
                           000083  1275 	C$lab3_1.c$43$1$53 ==.
                                   1276 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:43: XBR0_Init();
      000157 12 01 A5         [24] 1277 	lcall	_XBR0_Init
                           000086  1278 	C$lab3_1.c$44$1$53 ==.
                                   1279 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:44: PCA_Init();
      00015A 12 01 A9         [24] 1280 	lcall	_PCA_Init
                           000089  1281 	C$lab3_1.c$47$1$53 ==.
                                   1282 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:47: printf("Embedded Control Steering Calibration\n");
      00015D 74 2D            [12] 1283 	mov	a,#___str_0
      00015F C0 E0            [24] 1284 	push	acc
      000161 74 09            [12] 1285 	mov	a,#(___str_0 >> 8)
      000163 C0 E0            [24] 1286 	push	acc
      000165 74 80            [12] 1287 	mov	a,#0x80
      000167 C0 E0            [24] 1288 	push	acc
      000169 12 03 12         [24] 1289 	lcall	_printf
      00016C 15 81            [12] 1290 	dec	sp
      00016E 15 81            [12] 1291 	dec	sp
      000170 15 81            [12] 1292 	dec	sp
                           00009E  1293 	C$lab3_1.c$49$1$53 ==.
                                   1294 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:49: PW_s = PW_CENTER;
      000172 85 08 12         [24] 1295 	mov	_PW_s,_PW_CENTER
      000175 85 09 13         [24] 1296 	mov	(_PW_s + 1),(_PW_CENTER + 1)
                           0000A4  1297 	C$lab3_1.c$50$1$53 ==.
                                   1298 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:50: PW_m = PW_CENTER;
      000178 85 08 14         [24] 1299 	mov	_PW_m,_PW_CENTER
      00017B 85 09 15         [24] 1300 	mov	(_PW_m + 1),(_PW_CENTER + 1)
                           0000AA  1301 	C$lab3_1.c$51$1$53 ==.
                                   1302 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:51: PCA0CP0 = 0xFFFF - PW_m;
      00017E 74 FF            [12] 1303 	mov	a,#0xff
      000180 C3               [12] 1304 	clr	c
      000181 95 14            [12] 1305 	subb	a,_PW_m
      000183 F5 EA            [12] 1306 	mov	((_PCA0CP0 >> 0) & 0xFF),a
      000185 74 FF            [12] 1307 	mov	a,#0xff
      000187 95 15            [12] 1308 	subb	a,(_PW_m + 1)
      000189 F5 FA            [12] 1309 	mov	((_PCA0CP0 >> 8) & 0xFF),a
                           0000B7  1310 	C$lab3_1.c$52$1$53 ==.
                                   1311 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:52: PCA0CP0 = 0xFFFF - PW_s;
      00018B 74 FF            [12] 1312 	mov	a,#0xff
      00018D C3               [12] 1313 	clr	c
      00018E 95 12            [12] 1314 	subb	a,_PW_s
      000190 F5 EA            [12] 1315 	mov	((_PCA0CP0 >> 0) & 0xFF),a
      000192 74 FF            [12] 1316 	mov	a,#0xff
      000194 95 13            [12] 1317 	subb	a,(_PW_s + 1)
      000196 F5 FA            [12] 1318 	mov	((_PCA0CP0 >> 8) & 0xFF),a
                           0000C4  1319 	C$lab3_1.c$55$1$53 ==.
                                   1320 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:55: while(1){
      000198                       1321 00102$:
                           0000C4  1322 	C$lab3_1.c$56$2$54 ==.
                                   1323 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:56: Steering_Servo();
      000198 12 01 DA         [24] 1324 	lcall	_Steering_Servo
                           0000C7  1325 	C$lab3_1.c$57$2$54 ==.
                                   1326 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:57: Motor_Control();
      00019B 12 02 47         [24] 1327 	lcall	_Motor_Control
      00019E 80 F8            [24] 1328 	sjmp	00102$
                           0000CC  1329 	C$lab3_1.c$59$1$53 ==.
                           0000CC  1330 	XG$main$0$0 ==.
      0001A0 22               [24] 1331 	ret
                                   1332 ;------------------------------------------------------------
                                   1333 ;Allocation info for local variables in function 'Port_Init'
                                   1334 ;------------------------------------------------------------
                           0000CD  1335 	G$Port_Init$0$0 ==.
                           0000CD  1336 	C$lab3_1.c$64$1$53 ==.
                                   1337 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:64: void Port_Init(){
                                   1338 ;	-----------------------------------------
                                   1339 ;	 function Port_Init
                                   1340 ;	-----------------------------------------
      0001A1                       1341 _Port_Init:
                           0000CD  1342 	C$lab3_1.c$67$1$55 ==.
                                   1343 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:67: P1MDOUT |= 0x14;  //set output pin for CEX2 in push-pull mode
      0001A1 43 A5 14         [24] 1344 	orl	_P1MDOUT,#0x14
                           0000D0  1345 	C$lab3_1.c$68$1$55 ==.
                           0000D0  1346 	XG$Port_Init$0$0 ==.
      0001A4 22               [24] 1347 	ret
                                   1348 ;------------------------------------------------------------
                                   1349 ;Allocation info for local variables in function 'XBR0_Init'
                                   1350 ;------------------------------------------------------------
                           0000D1  1351 	G$XBR0_Init$0$0 ==.
                           0000D1  1352 	C$lab3_1.c$73$1$55 ==.
                                   1353 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:73: void XBR0_Init(){
                                   1354 ;	-----------------------------------------
                                   1355 ;	 function XBR0_Init
                                   1356 ;	-----------------------------------------
      0001A5                       1357 _XBR0_Init:
                           0000D1  1358 	C$lab3_1.c$74$1$56 ==.
                                   1359 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:74: XBR0 = 0x27;  //configure crossbar as directed in the laboratory
      0001A5 75 E1 27         [24] 1360 	mov	_XBR0,#0x27
                           0000D4  1361 	C$lab3_1.c$76$1$56 ==.
                           0000D4  1362 	XG$XBR0_Init$0$0 ==.
      0001A8 22               [24] 1363 	ret
                                   1364 ;------------------------------------------------------------
                                   1365 ;Allocation info for local variables in function 'PCA_Init'
                                   1366 ;------------------------------------------------------------
                           0000D5  1367 	G$PCA_Init$0$0 ==.
                           0000D5  1368 	C$lab3_1.c$81$1$56 ==.
                                   1369 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:81: void PCA_Init(void){
                                   1370 ;	-----------------------------------------
                                   1371 ;	 function PCA_Init
                                   1372 ;	-----------------------------------------
      0001A9                       1373 _PCA_Init:
                           0000D5  1374 	C$lab3_1.c$82$1$58 ==.
                                   1375 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:82: PCA0CN |= 0x40;    /* Enable PCA counter */
      0001A9 43 D8 40         [24] 1376 	orl	_PCA0CN,#0x40
                           0000D8  1377 	C$lab3_1.c$83$1$58 ==.
                                   1378 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:83: PCA0MD = 0x81;     /* SYSCLK/12, enable CF interrupts, suspend when idle */
      0001AC 75 D9 81         [24] 1379 	mov	_PCA0MD,#0x81
                           0000DB  1380 	C$lab3_1.c$84$1$58 ==.
                                   1381 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:84: PCA0CPM0 = 0xC2;   /* CCM0 in 16-bit compare mode */
      0001AF 75 DA C2         [24] 1382 	mov	_PCA0CPM0,#0xc2
                           0000DE  1383 	C$lab3_1.c$85$1$58 ==.
                                   1384 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:85: PCA0CPM2 = 0XC2;
      0001B2 75 DC C2         [24] 1385 	mov	_PCA0CPM2,#0xc2
                           0000E1  1386 	C$lab3_1.c$86$1$58 ==.
                                   1387 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:86: EIE1 |= 0x08;
      0001B5 43 E6 08         [24] 1388 	orl	_EIE1,#0x08
                           0000E4  1389 	C$lab3_1.c$87$1$58 ==.
                                   1390 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:87: EA = 1;
      0001B8 D2 AF            [12] 1391 	setb	_EA
                           0000E6  1392 	C$lab3_1.c$88$1$58 ==.
                           0000E6  1393 	XG$PCA_Init$0$0 ==.
      0001BA 22               [24] 1394 	ret
                                   1395 ;------------------------------------------------------------
                                   1396 ;Allocation info for local variables in function 'PCA_ISR'
                                   1397 ;------------------------------------------------------------
                           0000E7  1398 	G$PCA_ISR$0$0 ==.
                           0000E7  1399 	C$lab3_1.c$92$1$58 ==.
                                   1400 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:92: void PCA_ISR ( void ) __interrupt 9{
                                   1401 ;	-----------------------------------------
                                   1402 ;	 function PCA_ISR
                                   1403 ;	-----------------------------------------
      0001BB                       1404 _PCA_ISR:
      0001BB C0 E0            [24] 1405 	push	acc
      0001BD C0 D0            [24] 1406 	push	psw
                           0000EB  1407 	C$lab3_1.c$95$1$60 ==.
                                   1408 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:95: if(CF){
                           0000EB  1409 	C$lab3_1.c$96$2$61 ==.
                                   1410 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:96: CF = 0;
      0001BF 10 DF 02         [24] 1411 	jbc	_CF,00108$
      0001C2 80 06            [24] 1412 	sjmp	00102$
      0001C4                       1413 00108$:
                           0000F0  1414 	C$lab3_1.c$97$2$61 ==.
                                   1415 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:97: PCA0 = 28614; // CHECK THIS
      0001C4 75 E9 C6         [24] 1416 	mov	((_PCA0 >> 0) & 0xFF),#0xc6
      0001C7 75 F9 6F         [24] 1417 	mov	((_PCA0 >> 8) & 0xFF),#0x6f
      0001CA                       1418 00102$:
                           0000F6  1419 	C$lab3_1.c$99$1$60 ==.
                                   1420 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:99: counter++;
      0001CA 05 18            [12] 1421 	inc	_counter
      0001CC E4               [12] 1422 	clr	a
      0001CD B5 18 02         [24] 1423 	cjne	a,_counter,00109$
      0001D0 05 19            [12] 1424 	inc	(_counter + 1)
      0001D2                       1425 00109$:
                           0000FE  1426 	C$lab3_1.c$101$1$60 ==.
                                   1427 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:101: PCA0CN &= 0xC0; //Handle other PCA interrupt sources
      0001D2 53 D8 C0         [24] 1428 	anl	_PCA0CN,#0xc0
      0001D5 D0 D0            [24] 1429 	pop	psw
      0001D7 D0 E0            [24] 1430 	pop	acc
                           000105  1431 	C$lab3_1.c$102$1$60 ==.
                           000105  1432 	XG$PCA_ISR$0$0 ==.
      0001D9 32               [24] 1433 	reti
                                   1434 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1435 ;	eliminated unneeded push/pop dpl
                                   1436 ;	eliminated unneeded push/pop dph
                                   1437 ;	eliminated unneeded push/pop b
                                   1438 ;------------------------------------------------------------
                                   1439 ;Allocation info for local variables in function 'Steering_Servo'
                                   1440 ;------------------------------------------------------------
                                   1441 ;input                     Allocated to registers r7 
                                   1442 ;------------------------------------------------------------
                           000106  1443 	G$Steering_Servo$0$0 ==.
                           000106  1444 	C$lab3_1.c$104$1$60 ==.
                                   1445 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:104: void Steering_Servo(){
                                   1446 ;	-----------------------------------------
                                   1447 ;	 function Steering_Servo
                                   1448 ;	-----------------------------------------
      0001DA                       1449 _Steering_Servo:
                           000106  1450 	C$lab3_1.c$107$1$62 ==.
                                   1451 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:107: input = getchar();
      0001DA 12 01 28         [24] 1452 	lcall	_getchar
      0001DD AF 82            [24] 1453 	mov	r7,dpl
                           00010B  1454 	C$lab3_1.c$108$1$62 ==.
                                   1455 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:108: if(input == 'r')  // single character input to increase the pulsewidth
      0001DF BF 72 1E         [24] 1456 	cjne	r7,#0x72,00108$
                           00010E  1457 	C$lab3_1.c$110$2$63 ==.
                                   1458 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:110: PW_s = PW_s + 10;
      0001E2 74 0A            [12] 1459 	mov	a,#0x0a
      0001E4 25 12            [12] 1460 	add	a,_PW_s
      0001E6 F5 12            [12] 1461 	mov	_PW_s,a
      0001E8 E4               [12] 1462 	clr	a
      0001E9 35 13            [12] 1463 	addc	a,(_PW_s + 1)
      0001EB F5 13            [12] 1464 	mov	(_PW_s + 1),a
                           000119  1465 	C$lab3_1.c$111$2$63 ==.
                                   1466 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:111: if(PW_s > PW_MAX_s){ // check if less than pulsewidth minimum
      0001ED C3               [12] 1467 	clr	c
      0001EE E5 0C            [12] 1468 	mov	a,_PW_MAX_s
      0001F0 95 12            [12] 1469 	subb	a,_PW_s
      0001F2 E5 0D            [12] 1470 	mov	a,(_PW_MAX_s + 1)
      0001F4 95 13            [12] 1471 	subb	a,(_PW_s + 1)
      0001F6 50 28            [24] 1472 	jnc	00109$
                           000124  1473 	C$lab3_1.c$112$3$64 ==.
                                   1474 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:112: PW_s = PW_MAX_s;    // set SERVO_PW to a minimum value
      0001F8 85 0C 12         [24] 1475 	mov	_PW_s,_PW_MAX_s
      0001FB 85 0D 13         [24] 1476 	mov	(_PW_s + 1),(_PW_MAX_s + 1)
      0001FE 80 20            [24] 1477 	sjmp	00109$
      000200                       1478 00108$:
                           00012C  1479 	C$lab3_1.c$115$1$62 ==.
                                   1480 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:115: else if(input == 'l')  // single character input to decrease the pulsewidth
      000200 BF 6C 1D         [24] 1481 	cjne	r7,#0x6c,00109$
                           00012F  1482 	C$lab3_1.c$117$2$65 ==.
                                   1483 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:117: PW_s = PW_s - 10;
      000203 E5 12            [12] 1484 	mov	a,_PW_s
      000205 24 F6            [12] 1485 	add	a,#0xf6
      000207 F5 12            [12] 1486 	mov	_PW_s,a
      000209 E5 13            [12] 1487 	mov	a,(_PW_s + 1)
      00020B 34 FF            [12] 1488 	addc	a,#0xff
      00020D F5 13            [12] 1489 	mov	(_PW_s + 1),a
                           00013B  1490 	C$lab3_1.c$118$2$65 ==.
                                   1491 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:118: if(PW_s < PW_MIN_s){ // check if pulsewidth maximum exceeded
      00020F C3               [12] 1492 	clr	c
      000210 E5 12            [12] 1493 	mov	a,_PW_s
      000212 95 0A            [12] 1494 	subb	a,_PW_MIN_s
      000214 E5 13            [12] 1495 	mov	a,(_PW_s + 1)
      000216 95 0B            [12] 1496 	subb	a,(_PW_MIN_s + 1)
      000218 50 06            [24] 1497 	jnc	00109$
                           000146  1498 	C$lab3_1.c$119$3$66 ==.
                                   1499 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:119: PW_s = PW_MIN_s;     // set PW to a maximum value
      00021A 85 0A 12         [24] 1500 	mov	_PW_s,_PW_MIN_s
      00021D 85 0B 13         [24] 1501 	mov	(_PW_s + 1),(_PW_MIN_s + 1)
      000220                       1502 00109$:
                           00014C  1503 	C$lab3_1.c$122$1$62 ==.
                                   1504 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:122: printf("\rServo PW: %u\n", PW_s);
      000220 C0 12            [24] 1505 	push	_PW_s
      000222 C0 13            [24] 1506 	push	(_PW_s + 1)
      000224 74 54            [12] 1507 	mov	a,#___str_1
      000226 C0 E0            [24] 1508 	push	acc
      000228 74 09            [12] 1509 	mov	a,#(___str_1 >> 8)
      00022A C0 E0            [24] 1510 	push	acc
      00022C 74 80            [12] 1511 	mov	a,#0x80
      00022E C0 E0            [24] 1512 	push	acc
      000230 12 03 12         [24] 1513 	lcall	_printf
      000233 E5 81            [12] 1514 	mov	a,sp
      000235 24 FB            [12] 1515 	add	a,#0xfb
      000237 F5 81            [12] 1516 	mov	sp,a
                           000165  1517 	C$lab3_1.c$123$1$62 ==.
                                   1518 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:123: PCA0CP0 = 0xFFFF - PW_s;
      000239 74 FF            [12] 1519 	mov	a,#0xff
      00023B C3               [12] 1520 	clr	c
      00023C 95 12            [12] 1521 	subb	a,_PW_s
      00023E F5 EA            [12] 1522 	mov	((_PCA0CP0 >> 0) & 0xFF),a
      000240 74 FF            [12] 1523 	mov	a,#0xff
      000242 95 13            [12] 1524 	subb	a,(_PW_s + 1)
      000244 F5 FA            [12] 1525 	mov	((_PCA0CP0 >> 8) & 0xFF),a
                           000172  1526 	C$lab3_1.c$124$1$62 ==.
                           000172  1527 	XG$Steering_Servo$0$0 ==.
      000246 22               [24] 1528 	ret
                                   1529 ;------------------------------------------------------------
                                   1530 ;Allocation info for local variables in function 'Motor_Control'
                                   1531 ;------------------------------------------------------------
                                   1532 ;input                     Allocated to registers r7 
                                   1533 ;------------------------------------------------------------
                           000173  1534 	G$Motor_Control$0$0 ==.
                           000173  1535 	C$lab3_1.c$127$1$62 ==.
                                   1536 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:127: void Motor_Control(){
                                   1537 ;	-----------------------------------------
                                   1538 ;	 function Motor_Control
                                   1539 ;	-----------------------------------------
      000247                       1540 _Motor_Control:
                           000173  1541 	C$lab3_1.c$129$1$67 ==.
                                   1542 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:129: input = getchar();	//input value
      000247 12 01 28         [24] 1543 	lcall	_getchar
      00024A AF 82            [24] 1544 	mov	r7,dpl
                           000178  1545 	C$lab3_1.c$130$1$67 ==.
                                   1546 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:130: if(input == 'f'){		//f is faster
      00024C BF 66 45         [24] 1547 	cjne	r7,#0x66,00118$
                           00017B  1548 	C$lab3_1.c$131$2$68 ==.
                                   1549 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:131: if(PW_m < PW_MIN_m){
      00024F C3               [12] 1550 	clr	c
      000250 E5 14            [12] 1551 	mov	a,_PW_m
      000252 95 0E            [12] 1552 	subb	a,_PW_MIN_m
      000254 E5 15            [12] 1553 	mov	a,(_PW_m + 1)
      000256 95 0F            [12] 1554 	subb	a,(_PW_MIN_m + 1)
      000258 50 08            [24] 1555 	jnc	00108$
                           000186  1556 	C$lab3_1.c$132$3$69 ==.
                                   1557 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:132: PW_m = PW_MIN_m;
      00025A 85 0E 14         [24] 1558 	mov	_PW_m,_PW_MIN_m
      00025D 85 0F 15         [24] 1559 	mov	(_PW_m + 1),(_PW_MIN_m + 1)
      000260 80 65            [24] 1560 	sjmp	00119$
      000262                       1561 00108$:
                           00018E  1562 	C$lab3_1.c$134$2$68 ==.
                                   1563 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:134: else if(PW_m > PW_MAX_m){		//PW will not exceed max
      000262 C3               [12] 1564 	clr	c
      000263 E5 10            [12] 1565 	mov	a,_PW_MAX_m
      000265 95 14            [12] 1566 	subb	a,_PW_m
      000267 E5 11            [12] 1567 	mov	a,(_PW_MAX_m + 1)
      000269 95 15            [12] 1568 	subb	a,(_PW_m + 1)
      00026B 50 08            [24] 1569 	jnc	00105$
                           000199  1570 	C$lab3_1.c$135$3$70 ==.
                                   1571 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:135: PW_m = PW_MAX_m;
      00026D 85 10 14         [24] 1572 	mov	_PW_m,_PW_MAX_m
      000270 85 11 15         [24] 1573 	mov	(_PW_m + 1),(_PW_MAX_m + 1)
      000273 80 52            [24] 1574 	sjmp	00119$
      000275                       1575 00105$:
                           0001A1  1576 	C$lab3_1.c$138$3$71 ==.
                                   1577 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:138: if(PW_m == PW_MAX_m){
      000275 E5 10            [12] 1578 	mov	a,_PW_MAX_m
      000277 B5 14 0D         [24] 1579 	cjne	a,_PW_m,00102$
      00027A E5 11            [12] 1580 	mov	a,(_PW_MAX_m + 1)
      00027C B5 15 08         [24] 1581 	cjne	a,(_PW_m + 1),00102$
                           0001AB  1582 	C$lab3_1.c$139$4$72 ==.
                                   1583 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:139: PW_m = PW_MAX_m;
      00027F 85 10 14         [24] 1584 	mov	_PW_m,_PW_MAX_m
      000282 85 11 15         [24] 1585 	mov	(_PW_m + 1),(_PW_MAX_m + 1)
      000285 80 40            [24] 1586 	sjmp	00119$
      000287                       1587 00102$:
                           0001B3  1588 	C$lab3_1.c$142$4$73 ==.
                                   1589 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:142: PW_m = PW_m + 20;		//if PW less than max add 20
      000287 74 14            [12] 1590 	mov	a,#0x14
      000289 25 14            [12] 1591 	add	a,_PW_m
      00028B F5 14            [12] 1592 	mov	_PW_m,a
      00028D E4               [12] 1593 	clr	a
      00028E 35 15            [12] 1594 	addc	a,(_PW_m + 1)
      000290 F5 15            [12] 1595 	mov	(_PW_m + 1),a
      000292 80 33            [24] 1596 	sjmp	00119$
      000294                       1597 00118$:
                           0001C0  1598 	C$lab3_1.c$146$1$67 ==.
                                   1599 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:146: else if(input == 's'){	//s is slower
      000294 BF 73 30         [24] 1600 	cjne	r7,#0x73,00119$
                           0001C3  1601 	C$lab3_1.c$147$2$74 ==.
                                   1602 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:147: PW_m = PW_m - 20;
      000297 E5 14            [12] 1603 	mov	a,_PW_m
      000299 24 EC            [12] 1604 	add	a,#0xec
      00029B F5 14            [12] 1605 	mov	_PW_m,a
      00029D E5 15            [12] 1606 	mov	a,(_PW_m + 1)
      00029F 34 FF            [12] 1607 	addc	a,#0xff
      0002A1 F5 15            [12] 1608 	mov	(_PW_m + 1),a
                           0001CF  1609 	C$lab3_1.c$148$2$74 ==.
                                   1610 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:148: if(PW_m > PW_MAX_m){
      0002A3 C3               [12] 1611 	clr	c
      0002A4 E5 10            [12] 1612 	mov	a,_PW_MAX_m
      0002A6 95 14            [12] 1613 	subb	a,_PW_m
      0002A8 E5 11            [12] 1614 	mov	a,(_PW_MAX_m + 1)
      0002AA 95 15            [12] 1615 	subb	a,(_PW_m + 1)
      0002AC 50 08            [24] 1616 	jnc	00113$
                           0001DA  1617 	C$lab3_1.c$149$3$75 ==.
                                   1618 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:149: PW_m = PW_MIN_m;
      0002AE 85 0E 14         [24] 1619 	mov	_PW_m,_PW_MIN_m
      0002B1 85 0F 15         [24] 1620 	mov	(_PW_m + 1),(_PW_MIN_m + 1)
      0002B4 80 11            [24] 1621 	sjmp	00119$
      0002B6                       1622 00113$:
                           0001E2  1623 	C$lab3_1.c$151$2$74 ==.
                                   1624 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:151: else if(PW_m < PW_MIN_m){
      0002B6 C3               [12] 1625 	clr	c
      0002B7 E5 14            [12] 1626 	mov	a,_PW_m
      0002B9 95 0E            [12] 1627 	subb	a,_PW_MIN_m
      0002BB E5 15            [12] 1628 	mov	a,(_PW_m + 1)
      0002BD 95 0F            [12] 1629 	subb	a,(_PW_MIN_m + 1)
      0002BF 50 06            [24] 1630 	jnc	00119$
                           0001ED  1631 	C$lab3_1.c$152$3$76 ==.
                                   1632 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:152: PW_m = PW_MIN_m;
      0002C1 85 0E 14         [24] 1633 	mov	_PW_m,_PW_MIN_m
      0002C4 85 0F 15         [24] 1634 	mov	(_PW_m + 1),(_PW_MIN_m + 1)
      0002C7                       1635 00119$:
                           0001F3  1636 	C$lab3_1.c$155$1$67 ==.
                                   1637 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:155: printf("\rMotor PW: %u\n", PW_m);	//print PW
      0002C7 C0 14            [24] 1638 	push	_PW_m
      0002C9 C0 15            [24] 1639 	push	(_PW_m + 1)
      0002CB 74 63            [12] 1640 	mov	a,#___str_2
      0002CD C0 E0            [24] 1641 	push	acc
      0002CF 74 09            [12] 1642 	mov	a,#(___str_2 >> 8)
      0002D1 C0 E0            [24] 1643 	push	acc
      0002D3 74 80            [12] 1644 	mov	a,#0x80
      0002D5 C0 E0            [24] 1645 	push	acc
      0002D7 12 03 12         [24] 1646 	lcall	_printf
      0002DA E5 81            [12] 1647 	mov	a,sp
      0002DC 24 FB            [12] 1648 	add	a,#0xfb
      0002DE F5 81            [12] 1649 	mov	sp,a
                           00020C  1650 	C$lab3_1.c$156$1$67 ==.
                                   1651 ;	C:\Users\doylem5\Dropbox\litec\litec_2\lab3\lab3-1\lab3-1.c:156: PCA0CP2 = 0xFFFF - PW_m;
      0002E0 74 FF            [12] 1652 	mov	a,#0xff
      0002E2 C3               [12] 1653 	clr	c
      0002E3 95 14            [12] 1654 	subb	a,_PW_m
      0002E5 F5 EC            [12] 1655 	mov	((_PCA0CP2 >> 0) & 0xFF),a
      0002E7 74 FF            [12] 1656 	mov	a,#0xff
      0002E9 95 15            [12] 1657 	subb	a,(_PW_m + 1)
      0002EB F5 FC            [12] 1658 	mov	((_PCA0CP2 >> 8) & 0xFF),a
                           000219  1659 	C$lab3_1.c$157$1$67 ==.
                           000219  1660 	XG$Motor_Control$0$0 ==.
      0002ED 22               [24] 1661 	ret
                                   1662 	.area CSEG    (CODE)
                                   1663 	.area CONST   (CODE)
                           000000  1664 Flab3_1$__str_0$0$0 == .
      00092D                       1665 ___str_0:
      00092D 45 6D 62 65 64 64 65  1666 	.ascii "Embedded Control Steering Calibration"
             64 20 43 6F 6E 74 72
             6F 6C 20 53 74 65 65
             72 69 6E 67 20 43 61
             6C 69 62 72 61 74 69
             6F 6E
      000952 0A                    1667 	.db 0x0a
      000953 00                    1668 	.db 0x00
                           000027  1669 Flab3_1$__str_1$0$0 == .
      000954                       1670 ___str_1:
      000954 0D                    1671 	.db 0x0d
      000955 53 65 72 76 6F 20 50  1672 	.ascii "Servo PW: %u"
             57 3A 20 25 75
      000961 0A                    1673 	.db 0x0a
      000962 00                    1674 	.db 0x00
                           000036  1675 Flab3_1$__str_2$0$0 == .
      000963                       1676 ___str_2:
      000963 0D                    1677 	.db 0x0d
      000964 4D 6F 74 6F 72 20 50  1678 	.ascii "Motor PW: %u"
             57 3A 20 25 75
      000970 0A                    1679 	.db 0x0a
      000971 00                    1680 	.db 0x00
                                   1681 	.area XINIT   (CODE)
                                   1682 	.area CABS    (ABS,CODE)
