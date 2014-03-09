/* ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : TSSTouch.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : TSS_Library
**     Version     : Component 03.001, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-03-08, 14:59, # CodeGen: 70
**     Contents    :
**         Configure - byte TSSTouch_Configure(void);
**
**     (c) Copyright Freescale Semiconductor, Inc. 2013
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/
/*!
** @file TSSTouch.h
** @version 01.00
*/         
/*!
**  @addtogroup TSSTouch_module TSSTouch module documentation
**  @{
*/         

#ifndef __TSSTouch_H
#define __TSSTouch_H

/* MODULE TSSTouch. */


/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* MODULE TSSTouch. */

#include "Cpu.h"

/* Include inherited components */
#include "TSS_API.h"

/* List of macros for calling methods without "TSSTouch_" prefix */
#define Configure TSSTouch_Configure

void TSSTouch_InitDevices(void);
/*
** ===================================================================
**     Function    :  TSSTouch_InitDevices
**     Description :
**         The function is intended for implementation of peripherals
**         initialization. TSS Component automatically enables clock
**         for all used TSS peripherals, setup pin multiplexors,
**         installs RTOS interrupt service routines etc.
**         This function is generated always and depends on user if
**         it is used.
**         This function is automatically called during the
**         TSSTouch_fOnInit callback execution.
**     Parameters  : None
**     Returns     : None
** ===================================================================
*/

byte TSSTouch_Configure(void);
/*
** ===================================================================
**     Method      :  TSSTouch_Configure (component TSS_Library)
**     This method can be used also under name "Configure"
**
**     Description :
**         Whole TSS initialization and configuration of registers.
**         Contains main TSS_Init() function, TSS System Config
**         registers and all Control Config registers initialization
**         according to setting of Component properties. The user have
**         to place this function into the proper location in the
**         source code.
**     Parameters  : None
**     Returns     :
**         ---             - Error status code of Configure method. If
**                           the configuration is successful the
**                           TSS_STATUS_OK is reported, otherwise is
**                           reported one of error status codes
**                           described in TSSAPIRM document.
** ===================================================================
*/


/* END TSSTouch. */
#endif
/* ifndef __TSSTouch_H */
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
