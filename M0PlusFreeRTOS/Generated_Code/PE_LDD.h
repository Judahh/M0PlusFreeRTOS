/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : PE_LDD.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Component 01.025, Driver 01.04, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2014-02-20, 16:43, # CodeGen: 36
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
** @file PE_LDD.h                                                  
** @version 01.04
** @brief
**
*/         
/*!
**  @addtogroup PE_LDD_module PE_LDD module documentation
**  @{
*/         
#ifndef __PE_LDD_H
#define __PE_LDD_H

/* MODULE PE_LDD. */

#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "FRTOS1.h"
#include "UTIL1.h"
#include "UTIL2.h"
#include "LedBlue.h"
#include "LedGreen.h"
#include "LedRed.h"
#include "AS1.h"
#include "WAIT1.h"
#include "TU1.h"
#include "I2C0.h"
#include "AD0.h"
#include "AdcLdd1.h"


/*
** ===================================================================
** Function prototypes
** ===================================================================
*/

/*
** ===================================================================
**     Method      :  Cpu_PE_FillMemory (component MKL25Z128LK4)
*/
/*!
**     @brief
**         Fills a memory area block by a specified value.
**     @param
**       SourceAddressPtr - Source address pointer.
**     @param
**       c - A value used to fill a memory block.
**     @param
**       len - Length of a memory block to fill.
*/
/* ===================================================================*/
void PE_FillMemory(register void* SourceAddressPtr, register uint8_t c, register uint32_t len);

/*
** ===================================================================
**     Method      :  Cpu_PE_PeripheralUsed (component MKL25Z128LK4)
*/
/*!
**     @brief
**         Returns information whether a peripheral is allocated by PEx 
**         or not.
**     @param
**       PrphBaseAddress - Base address of a peripheral.
**     @return
**       TRUE if a peripheral is used by PEx or FALSE if it isn't used.
*/
/* ===================================================================*/
bool PE_PeripheralUsed(uint32_t PrphBaseAddress);

/*
** ===================================================================
**     Method      :  Cpu_LDD_SetClockConfiguration (component MKL25Z128LK4)
*/
/*!
**     @brief
**         Changes the clock configuration of all LDD components in a 
**         project.
**     @param
**       ClockConfiguration - New CPU clock configuration changed by CPU SetClockConfiguration method.
*/
/* ===================================================================*/
void LDD_SetClockConfiguration(LDD_TClockConfiguration ClockConfiguration);

/* END PE_LDD. */


#endif

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
