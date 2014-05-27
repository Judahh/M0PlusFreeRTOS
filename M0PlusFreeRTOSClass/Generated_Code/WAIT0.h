/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : WAIT0.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : Wait
**     Version     : Component 01.064, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-05-27, 17:55, # CodeGen: 187
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
** @file WAIT0.h
** @version 01.00
** @brief
**          Implements busy waiting routines.
*/         
/*!
**  @addtogroup WAIT0_module WAIT0 module documentation
**  @{
*/         

#ifndef __WAIT0_H
#define __WAIT0_H

/* MODULE WAIT0. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */

#include "Cpu.h"
/* include RTOS header files */
#include "FreeRTOS.h" /* for vTaskDelay() */
#include "task.h"

#ifdef __cplusplus
extern "C" {
#endif


#define WAIT0_NofCyclesMs(ms, hz)  ((ms)*((hz)/1000)) /* calculates the needed cycles based on bus clock frequency */
#define WAIT0_NofCyclesUs(us, hz)  ((us)*(((hz)/1000)/1000)) /* calculates the needed cycles based on bus clock frequency */
#define WAIT0_NofCyclesNs(ns, hz)  (((ns)*(((hz)/1000)/1000))/1000) /* calculates the needed cycles based on bus clock frequency */


#define WAIT0_WAIT_C(cycles) \
     ( (cycles)<=10 ? \
          WAIT0_Wait10Cycles() \
        : WAIT0_WaitCycles((word)cycles) \
      )                                      /*!< wait for some cycles */


void WAIT0_Wait10Cycles(void);
/*
** ===================================================================
**     Method      :  WAIT0_Wait10Cycles (component Wait)
**     Description :
**         Wait for 10 CPU cycles.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void WAIT0_Wait100Cycles(void);
/*
** ===================================================================
**     Method      :  WAIT0_Wait100Cycles (component Wait)
**     Description :
**         Wait for 100 CPU cycles.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void WAIT0_WaitCycles(word cycles);
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

void WAIT0_Waitms(word ms);
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

/* we are having a static clock configuration: implement as macro/inlined version */
#define WAIT0_Waitus(us)  \
       (  ((WAIT0_NofCyclesUs((us),CPU_BUS_CLK_HZ)==0)||(us)==0) ? \
          (void)0 : \
          ( ((us)/1000)==0 ? (void)0 : WAIT0_Waitms((word)((us)/1000))) \
          , (WAIT0_NofCyclesUs(((us)%1000), CPU_BUS_CLK_HZ)==0) ? (void)0 : \
            WAIT0_WAIT_C(WAIT0_NofCyclesUs(((us)%1000), CPU_BUS_CLK_HZ)) \
       )
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

/* we are having a static clock configuration: implement as macro/inlined version */
#define WAIT0_Waitns(ns)  \
       (  ((WAIT0_NofCyclesNs((ns), CPU_BUS_CLK_HZ)==0)||(ns)==0) ? \
          (void)0 : \
          WAIT0_Waitus((ns)/1000) \
          , (WAIT0_NofCyclesNs((ns)%1000, CPU_BUS_CLK_HZ)==0) ? \
              (void)0 : \
              WAIT0_WAIT_C(WAIT0_NofCyclesNs(((ns)%1000), CPU_BUS_CLK_HZ)) \
       )
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

#define WAIT0_WaitOSms(ms) \
  vTaskDelay(ms/portTICK_RATE_MS)
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

#ifdef __cplusplus
}  /* extern "C" */
#endif

void WAIT0_WaitLongCycles(dword cycles);
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

/* END WAIT0. */

#endif
/* ifndef __WAIT0_H */
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
