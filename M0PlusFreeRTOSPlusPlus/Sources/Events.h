/** ###################################################################
**     Filename    : Events.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2012-10-04, 09:56, # CodeGen: 0
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
**
** ###################################################################*/

#ifndef __Events_H
#define __Events_H
/* MODULE Events */

#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
#include "FreeRTOS0.h"
#include "UTIL0.h"
#include "MMA0.h"
#include "GI2C0.h"
#include "WAIT0.h"
#include "I2C0.h"
#include "TU0.h"
#include "PWMLEDBlue.h"
#include "PwmLdd1.h"
#include "PWMLEDRed.h"
#include "PwmLdd2.h"
#include "TU2.h"
#include "PWMLEDGreen.h"
#include "PwmLdd3.h"
#include "PE_LDD.h"

void Cpu_OnNMIINT(void);
/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT (module Events)
**
**     Component   :  Cpu [MKL25Z128LK4]
**     Description :
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the <NMI
**         interrrupt> property is set to 'Enabled'.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/


void FreeRTOS0_vApplicationStackOverflowHook(xTaskHandle pxTask, char *pcTaskName);
/*
** ===================================================================
**     Event       :  FreeRTOS0_vApplicationStackOverflowHook (module Events)
**
**     Component   :  FreeRTOS0 [FreeRTOS]
**     Description :
**         if enabled, this hook will be called in case of a stack
**         overflow.
**     Parameters  :
**         NAME            - DESCRIPTION
**         pxTask          - Task handle
**       * pcTaskName      - Pointer to task name
**     Returns     : Nothing
** ===================================================================
*/

void FreeRTOS0_vApplicationTickHook(void);
/*
** ===================================================================
**     Event       :  FreeRTOS0_vApplicationTickHook (module Events)
**
**     Component   :  FreeRTOS0 [FreeRTOS]
**     Description :
**         If enabled, this hook will be called by the RTOS for every
**         tick increment.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void FreeRTOS0_vApplicationIdleHook(void);
/*
** ===================================================================
**     Event       :  FreeRTOS0_vApplicationIdleHook (module Events)
**
**     Component   :  FreeRTOS0 [FreeRTOS]
**     Description :
**         If enabled, this hook will be called when the RTOS is idle.
**         This might be a good place to go into low power mode.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

void FreeRTOS0_vApplicationMallocFailedHook(void);
/*
** ===================================================================
**     Event       :  FreeRTOS0_vApplicationMallocFailedHook (module Events)
**
**     Component   :  FreeRTOS0 [FreeRTOS]
**     Description :
**         If enabled, the RTOS will call this hook in case memory
**         allocation failed.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/

/*
** ===================================================================
**     Event       :  Cpu_OnNMIINT0 (module Events)
**
**     Component   :  Cpu [MKL25Z128LK4]
*/
/*!
**     @brief
**         This event is called when the Non maskable interrupt had
**         occurred. This event is automatically enabled when the [NMI
**         interrupt] property is set to 'Enabled'.
*/
/* ===================================================================*/
void Cpu_OnNMIINT0(void);

/*
** ===================================================================
**     Event       :  I2C0_OnMasterByteReceived (module Events)
**
**     Component   :  I2C0 [I2C_LDD]
*/
/*!
**     @brief
**         This event is called when I2C is in master mode and finishes
**         the reception of the byte successfully. This event is not
**         available for the SLAVE mode and if MasterReceiveBlock is
**         disabled.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer is passed
**                           as the parameter of Init method.
*/
/* ===================================================================*/
void I2C0_OnMasterByteReceived(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Event       :  I2C0_OnError (module Events)
**
**     Component   :  I2C0 [I2C_LDD]
*/
/*!
**     @brief
**         This event is called when an error (e.g. Arbitration lost)
**         occurs. The errors can be read with GetError method.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer is passed
**                           as the parameter of Init method.
*/
/* ===================================================================*/
void I2C0_OnError(LDD_TUserData *UserDataPtr);

/*
** ===================================================================
**     Event       :  I2C0_OnBusStopDetected (module Events)
**
**     Component   :  I2C0 [I2C_LDD]
*/
/*!
**     @brief
**         This event is called when the I2C device detected bus stop
**         condition.
**     @param
**         UserDataPtr     - Pointer to the user or
**                           RTOS specific data. This pointer is passed
**                           as the parameter of Init method.
*/
/* ===================================================================*/
void I2C0_OnBusStopDetected(LDD_TUserData *UserDataPtr);

/* END Events */
#endif /* __Events_H*/

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
