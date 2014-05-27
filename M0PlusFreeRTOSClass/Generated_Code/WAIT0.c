/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : WAIT0.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : Wait
**     Version     : Component 01.064, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-05-15, 17:38, # CodeGen: 174
**     Abstract    :
**          Implements busy waiting routines.
**     Settings    :
**          Component name                                 : WAIT0
**          Manual Clock Values                            : Disabled
**          Delay100usFunction                             : Delay100US
**          RTOS                                           : Disabled
**          Watchdog                                       : Disabled
**     Contents    :
**         Wait10Cycles   - void WAIT0_Wait10Cycles(void);
**         Wait100Cycles  - void WAIT0_Wait100Cycles(void);
**         WaitCycles     - void WAIT0_WaitCycles(word cycles);
**         WaitLongCycles - void WAIT0_WaitLongCycles(dword cycles);
**         Waitms         - void WAIT0_Waitms(word ms);
**         Waitus         - void WAIT0_Waitus(word us);
**         Waitns         - void WAIT0_Waitns(word ns);
**         WaitOSms       - void WAIT0_WaitOSms(void);
**
**     License   : Open Source (LGPL)
**     Copyright : Erich Styger, 2013, all rights reserved.
**     Web       : www.mcuoneclipse.com
**     This an open source software implementing waiting routines using Processor Expert.
**     This is a free software and is opened for education,  research  and commercial developments under license policy of following terms:
**     * This is a free software and there is NO WARRANTY.
**     * No restriction on use. You can use, modify and redistribute it for personal, non-profit or commercial product UNDER YOUR RESPONSIBILITY.
**     * Redistributions of source code must retain the above copyright notice.
** ###################################################################*/
/*!
** @file WAIT0.c
** @version 01.00
** @brief
**          Implements busy waiting routines.
*/         
/*!
**  @addtogroup WAIT0_module WAIT0 module documentation
**  @{
*/         

/* MODULE WAIT0. */

#include "WAIT0.h"


/*
** ===================================================================
**     Method      :  WAIT0_Wait10Cycles (component Wait)
**     Description :
**         Wait for 10 CPU cycles.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
__attribute__((naked)) void WAIT0_Wait10Cycles(void)
{
  /* This function will wait 10 CPU cycles (including call overhead). */
  /* NOTE: Cortex-M0 and M4 have 1 cycle for a NOP */
  /* Compiler is GNUC */
  asm (
   /* bl Wai10Cycles() to here: [4] */
   "nop   \n\t" /* [1] */
   "nop   \n\t" /* [1] */
   "nop   \n\t" /* [1] */
   "bx lr \n\t" /* [3] */
  );
}

/*
** ===================================================================
**     Method      :  WAIT0_Wait100Cycles (component Wait)
**     Description :
**         Wait for 100 CPU cycles.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
__attribute__((naked)) void WAIT0_Wait100Cycles(void)
{
  /* This function will spend 100 CPU cycles (including call overhead). */
  asm (
   /* bl to here:               [4] */
   "movs r0, #0 \n\t"        /* [1] */
   "loop:       \n\t"
   "nop         \n\t"        /* [1] */
   "nop         \n\t"        /* [1] */
   "nop         \n\t"        /* [1] */
   "nop         \n\t"        /* [1] */
   "nop         \n\t"        /* [1] */
   "add r0,#1   \n\t"        /* [1] */
   "cmp r0,#9   \n\t"        /* [1] */
   "bls loop    \n\t"        /* [3] taken, [1] not taken */
   "nop         \n\t"        /* [1] */
   "bx lr       \n\t"        /* [3] */
  );
}

/*
** ===================================================================
**     Method      :  WAIT0_WaitCycles (component Wait)
**     Description :
**         Wait for a specified number of CPU cycles (16bit data type).
**     Parameters  :
**         NAME            - DESCRIPTION
**         cycles          - The number of cycles to wait.
**     Returns     : Nothing
** ===================================================================
*/
void WAIT0_WaitCycles(word cycles)
{
  while(cycles > 100) {
    WAIT0_Wait100Cycles();
    cycles -= 100;
  }
  while(cycles > 10) {
    WAIT0_Wait10Cycles();
    cycles -= 10;
  }
}

/*
** ===================================================================
**     Method      :  WAIT0_WaitLongCycles (component Wait)
**     Description :
**         Wait for a specified number of CPU cycles (32bit data type).
**     Parameters  :
**         NAME            - DESCRIPTION
**         cycles          - The number of cycles to wait.
**     Returns     : Nothing
** ===================================================================
*/
void WAIT0_WaitLongCycles(dword cycles)
{
  while(cycles>60000) {
    WAIT0_WaitCycles(60000);
    cycles -= 60000;
  }
  WAIT0_WaitCycles((word)cycles);
}

/*
** ===================================================================
**     Method      :  WAIT0_Waitms (component Wait)
**     Description :
**         Wait for a specified time in milliseconds.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ms              - How many milliseconds the function has to
**                           wait
**     Returns     : Nothing
** ===================================================================
*/
void WAIT0_Waitms(word ms)
{
  dword msCycles; /* cycles for 1 ms */

  /* static clock/speed configuration */
  msCycles = WAIT0_NofCyclesMs(1, CPU_CORE_CLK_HZ);
  while(ms>0) {
    WAIT0_WaitLongCycles(msCycles);
    ms--;
  }
}
/*
** ===================================================================
**     Method      :  WAIT0_Waitus (component Wait)
**     Description :
**         Wait for a specified time in microseconds.
**     Parameters  :
**         NAME            - DESCRIPTION
**         us              - How many microseconds the function has to
**                           wait
**     Returns     : Nothing
** ===================================================================
*/
/* implemented as macro version. See header file. */
/*
** ===================================================================
**     Method      :  WAIT0_Waitns (component Wait)
**     Description :
**         Wait for a specified time in nano seconds.
**     Parameters  :
**         NAME            - DESCRIPTION
**         ns              - How many ns the function has to wait
**     Returns     : Nothing
** ===================================================================
*/
/* implemented as macro version. See header file. */
/*
** ===================================================================
**     Method      :  WAIT0_WaitOSms (component Wait)
**     Description :
**         If an RTOS is enabled, this routine will use a non-blocking
**         wait method. Otherwise it will do a busy/blocking wait.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#if 0
void WAIT0_WaitOSms(void)
{
  /* Method is implemented as macro in the header file */
}
#endif

/* END WAIT0. */

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
