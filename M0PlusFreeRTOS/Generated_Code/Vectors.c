/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : Vectors.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Component 01.025, Driver 01.04, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-03-29, 00:51, # CodeGen: 122
**     Abstract    :
**
**     Settings    :
**
**
**     Copyright : 1997 - 2013 Freescale Semiconductor, Inc. All Rights Reserved.
**     SOURCE DISTRIBUTION PERMISSIBLE as directed in End User License Agreement.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file Vectors.c                                                  
** @version 01.04
** @brief
**
*/         
/*!
**  @addtogroup Vectors_module Vectors module documentation
**  @{
*/         

  #include "Cpu.h"
  #include "FRTOS1.h"
  #include "UTIL1.h"
  #include "UTIL2.h"
  #include "WAIT0.h"
  #include "I2C0.h"
  #include "I2C1.h"
  #include "TU0.h"
  #include "TU1.h"
  #include "CsIO1.h"
  #include "IO1.h"
  #include "AD0.h"
  #include "AdcLdd1.h"
  #include "MMA0.h"
  #include "GI2C0.h"
  #include "TSSTouch.h"
  #include "PWMLEDBlue.h"
  #include "PwmLdd1.h"
  #include "PWMLEDGreen.h"
  #include "PwmLdd2.h"
  #include "PWMLEDRed.h"
  #include "PwmLdd3.h"
  #include "AS1.h"
  #include "Break.h"
  #include "MotorA.h"
  #include "MotorB.h"
  #include "SonarTrigger.h"
  #include "SonarEcho0.h"
  #include "SonarEcho1.h"
  #include "Events.h"


  /* ISR prototype */
  extern uint32_t __SP_INIT;
  extern
  #ifdef __cplusplus
  "C"
  #endif
  void __thumb_startup( void );
  
  
  /*lint -esym(765,__vect_table) Disable MISRA rule (8.10) checking for symbols (__vect_table). Definition of the interrupt vector table placed by linker on a predefined location. */
  /*lint -save  -e926 -e927 -e928 -e929 Disable MISRA rule (11.4) checking. Need to explicitly cast pointers to the general ISR for Interrupt vector table */
  
  __attribute__ ((section (".vectortable"))) const tVectorTable __vect_table = { /* Interrupt vector table */
  
    /* ISR name                             No. Address      Pri Name                          Description */
    &__SP_INIT,                        /* 0x00  0x00000000   -   ivINT_Initial_Stack_Pointer   used by PE */
    {
    (tIsrFunc)&__thumb_startup,        /* 0x01  0x00000004   -   ivINT_Initial_Program_Counter used by PE */
    (tIsrFunc)&Cpu_INT_NMIInterrupt,   /* 0x02  0x00000008   -2   ivINT_NMI                     used by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x03  0x0000000C   -1   ivINT_Hard_Fault              unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x04  0x00000010   -   ivINT_Reserved4               unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x05  0x00000014   -   ivINT_Reserved5               unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x06  0x00000018   -   ivINT_Reserved6               unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x07  0x0000001C   -   ivINT_Reserved7               unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x08  0x00000020   -   ivINT_Reserved8               unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x09  0x00000024   -   ivINT_Reserved9               unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x0A  0x00000028   -   ivINT_Reserved10              unused by PE */
    (tIsrFunc)&vPortSVCHandler,        /* 0x0B  0x0000002C   -   ivINT_SVCall                  used by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x0C  0x00000030   -   ivINT_Reserved12              unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x0D  0x00000034   -   ivINT_Reserved13              unused by PE */
    (tIsrFunc)&vPortPendSVHandler,     /* 0x0E  0x00000038   -   ivINT_PendableSrvReq          used by PE */
    (tIsrFunc)&vPortTickHandler,       /* 0x0F  0x0000003C   -   ivINT_SysTick                 used by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x10  0x00000040   -   ivINT_DMA0                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x11  0x00000044   -   ivINT_DMA1                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x12  0x00000048   -   ivINT_DMA2                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x13  0x0000004C   -   ivINT_DMA3                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x14  0x00000050   -   ivINT_Reserved20              unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x15  0x00000054   -   ivINT_FTFA                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x16  0x00000058   -   ivINT_LVD_LVW                 unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x17  0x0000005C   -   ivINT_LLW                     unused by PE */
    (tIsrFunc)&I2C0_Interrupt,         /* 0x18  0x00000060   2   ivINT_I2C0                    used by PE */
    (tIsrFunc)&I2C1_Interrupt,         /* 0x19  0x00000064   2   ivINT_I2C1                    used by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x1A  0x00000068   -   ivINT_SPI0                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x1B  0x0000006C   -   ivINT_SPI1                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x1C  0x00000070   -   ivINT_UART0                   unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x1D  0x00000074   -   ivINT_UART1                   unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x1E  0x00000078   -   ivINT_UART2                   unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x1F  0x0000007C   -   ivINT_ADC0                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x20  0x00000080   -   ivINT_CMP0                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x21  0x00000084   -   ivINT_TPM0                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x22  0x00000088   -   ivINT_TPM1                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x23  0x0000008C   -   ivINT_TPM2                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x24  0x00000090   -   ivINT_RTC                     unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x25  0x00000094   -   ivINT_RTC_Seconds             unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x26  0x00000098   -   ivINT_PIT                     unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x27  0x0000009C   -   ivINT_Reserved39              unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x28  0x000000A0   -   ivINT_USB0                    unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x29  0x000000A4   -   ivINT_DAC0                    unused by PE */
    (tIsrFunc)&TSS_TSI0Isr,            /* 0x2A  0x000000A8   -   ivINT_TSI0                    used by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x2B  0x000000AC   -   ivINT_MCG                     unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x2C  0x000000B0   -   ivINT_LPTimer                 unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x2D  0x000000B4   -   ivINT_Reserved45              unused by PE */
    (tIsrFunc)&Cpu_Interrupt,          /* 0x2E  0x000000B8   -   ivINT_PORTA                   unused by PE */
    (tIsrFunc)&Cpu_Interrupt           /* 0x2F  0x000000BC   -   ivINT_PORTD                   unused by PE */
    }
  };
  /*lint -restore Enable MISRA rule (11.4) checking. */
  

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.3 [05.08]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
