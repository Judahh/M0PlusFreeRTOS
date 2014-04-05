/* ###################################################################
 **     Filename    : Events.c
 **     Project     : ProcessorExpert
 **     Processor   : MKL25Z128VLK4
 **     Component   : Events
 **     Version     : Driver 01.00
 **     Compiler    : GNU C Compiler
 **     Date/Time   : 2014-02-06, 15:46, # CodeGen: 0
 **     Abstract    :
 **         This is user's event module.
 **         Put your event handler code here.
 **     Settings    :
 **     Contents    :
 **         Cpu_OnNMIINT - void Cpu_OnNMIINT(void);
 **
 ** ###################################################################*/
/*!
 ** @file Events.c
 ** @version 01.00
 ** @brief
 **         This is user's event module.
 **         Put your event handler code here.
 */
/*!
 **  @addtogroup Events_module Events module documentation
 **  @{
 */
/* MODULE Events */
#include "Cpu.h"
#include "Events.h"

#ifdef __cplusplus
extern "C" {
#endif 

/* User includes (#include below this line is not maintained by Processor Expert) */

/*
 ** ===================================================================
 **     Event       :  AS1_OnBlockSent (module Events)
 **
 **     Component   :  AS1 [Serial_LDD]
 */
/*!
 **     @brief
 **         This event is called after the last character from the
 **         output buffer is moved to the transmitter. 
 **     @param
 **         UserDataPtr     - Pointer to the user or
 **                           RTOS specific data. This pointer is passed
 **                           as the parameter of Init method.
 */
/* ===================================================================*/
void AS1_OnBlockSent(LDD_TUserData *UserDataPtr) {
	
}

/*
 ** ===================================================================
 **     Event       :  FRTOS1_vApplicationMallocFailedHook (module Events)
 **
 **     Component   :  FRTOS1 [FreeRTOS]
 **     Description :
 **         If enabled, the RTOS will call this hook in case memory
 **         allocation failed.
 **     Parameters  : None
 **     Returns     : Nothing
 ** ===================================================================
 */
void FRTOS1_vApplicationMallocFailedHook(void) {
	/* Called if a call to pvPortMalloc() fails because there is insufficient
	 free memory available in the FreeRTOS heap.  pvPortMalloc() is called
	 internally by FreeRTOS API functions that create tasks, queues, software
	 timers, and semaphores.  The size of the FreeRTOS heap is set by the
	 configTOTAL_HEAP_SIZE configuration constant in FreeRTOSConfig.h. */
	taskDISABLE_INTERRUPTS();
	/* Write your code here ... */
	for (;;) {
	}
}

/*
 ** ===================================================================
 **     Event       :  I2C0_OnMasterBlockSent (module Events)
 **
 **     Component   :  I2C0 [I2C_LDD]
 */
/*!
 **     @brief
 **         This event is called when I2C in master mode finishes the
 **         transmission of the data successfully. This event is not
 **         available for the SLAVE mode and if MasterSendBlock is
 **         disabled. 
 **     @param
 **         UserDataPtr     - Pointer to the user or
 **                           RTOS specific data. This pointer is passed
 **                           as the parameter of Init method.
 */
/* ===================================================================*/
//void I2C0_OnMasterBlockSent(LDD_TUserData *UserDataPtr) {
//	AccelerometerTDataState *ptr = (AccelerometerTDataState*) UserDataPtr;
//	ptr->dataTransmittedFlg = TRUE;
//}
/*
 ** ===================================================================
 **     Event       :  I2C0_OnMasterBlockReceived (module Events)
 **
 **     Component   :  I2C0 [I2C_LDD]
 */
/*!
 **     @brief
 **         This event is called when I2C is in master mode and finishes
 **         the reception of the data successfully. This event is not
 **         available for the SLAVE mode and if MasterReceiveBlock is
 **         disabled.
 **     @param
 **         UserDataPtr     - Pointer to the user or
 **                           RTOS specific data. This pointer is passed
 **                           as the parameter of Init method.
 */
/* ===================================================================*/
//void I2C0_OnMasterBlockReceived(LDD_TUserData *UserDataPtr) {
//	AccelerometerTDataState *ptr = (AccelerometerTDataState*) UserDataPtr;
//	ptr->dataReceivedFlg = TRUE;
//}
/*
 ** ===================================================================
 **     Event       :  I2C1_OnMasterBlockSent (module Events)
 **
 **     Component   :  I2C1 [I2C_LDD]
 */
/*!
 **     @brief
 **         This event is called when I2C in master mode finishes the
 **         transmission of the data successfully. This event is not
 **         available for the SLAVE mode and if MasterSendBlock is
 **         disabled. 
 **     @param
 **         UserDataPtr     - Pointer to the user or
 **                           RTOS specific data. This pointer is passed
 **                           as the parameter of Init method.
 */
/* ===================================================================*/
void I2C1_OnMasterBlockSent(LDD_TUserData *UserDataPtr) {
	GyroscopeTDataState *ptr = (GyroscopeTDataState*) UserDataPtr;
	ptr->dataTransmittedFlg = TRUE;
}

/*
 ** ===================================================================
 **     Event       :  I2C1_OnMasterBlockReceived (module Events)
 **
 **     Component   :  I2C1 [I2C_LDD]
 */
/*!
 **     @brief
 **         This event is called when I2C is in master mode and finishes
 **         the reception of the data successfully. This event is not
 **         available for the SLAVE mode and if MasterReceiveBlock is
 **         disabled.
 **     @param
 **         UserDataPtr     - Pointer to the user or
 **                           RTOS specific data. This pointer is passed
 **                           as the parameter of Init method.
 */
/* ===================================================================*/
void I2C1_OnMasterBlockReceived(LDD_TUserData *UserDataPtr) {
	GyroscopeTDataState *ptr = (GyroscopeTDataState*) UserDataPtr;
	ptr->dataReceivedFlg = TRUE;
}

/*
 ** ===================================================================
 **     Event       :  AS1_OnBlockReceived (module Events)
 **
 **     Component   :  AS1 [Serial_LDD]
 */
/*!
 **     @brief
 **         This event is called when the requested number of data is
 **         moved to the input buffer.
 **     @param
 **         UserDataPtr     - Pointer to the user or
 **                           RTOS specific data. This pointer is passed
 **                           as the parameter of Init method.
 */
/* ===================================================================*/
void AS1_OnBlockReceived(LDD_TUserData *UserDataPtr) {

}

/*
 ** ===================================================================
 **     Event       :  TSSTouch_fOnFault (module Events)
 **
 **     Component   :  TSSTouch [TSS_Library]
 **     Description :
 **         This callback function is called by TSS after Fault
 **         occurence. This event is enabled always and depends on
 **         selection 'generate code' if the callback is used.
 **         The default CallBack Name is automatically generated with
 **         automatic prefix update by current Component Name. User can
 **         define own name, but then the automatic name update is not
 **         functional.
 **         Option is available from TSS3.0 version.
 **     Parameters  :
 **         NAME            - DESCRIPTION
 **         u8FaultElecNum  - The value defines
 **                           electrode number on which measurement fault
 **                           occured.
 **     Returns     : Nothing
 ** ===================================================================
 */
void TSSTouch_fOnFault(byte u8FaultElecNum) {
	/* If large or small capacitor fault  */
	if (tss_CSSys.Faults.ChargeTimeout || tss_CSSys.Faults.SmallCapacitor) {
		/* Write your code here ... */
	}
	/* If data corruption fault  */
	if (tss_CSSys.Faults.DataCorruption) {
		/* Write your code here ... */
	}
	/* If small trigger period fault  */
	if (tss_CSSys.Faults.SmallTriggerPeriod) {
		/* Write your code here ... */
	}
	/* Clear the fault flags */
	(void) TSS_SetSystemConfig(System_Faults_Register, 0x00);

	(void) u8FaultElecNum;
	return;
}

/*
 ** ===================================================================
 **     Event       :  TSSTouch_fOnInit (module Events)
 **
 **     Component   :  TSSTouch [TSS_Library]
 **     Description :
 **         This callback function is automatically called during the
 **         TSS Init function execution. The function is intended for
 **         implementation of peripherals initialization. TSS Component
 **         automatically enables clock for all used TSS peripherals in
 **         the internal function TSS_InitDevices which is called by
 **         this callback.
 **         This event is enabled always and depends on selection
 **         'generate code' if the callback is used.
 **         The default CallBack Name is automatically generated with
 **         automatic prefix update by current Component Name. User can
 **         define own name, but then the automatic name update is not
 **         functional.
 **     Parameters  : None
 **     Returns     : Nothing
 ** ===================================================================
 */
void TSSTouch_fOnInit(void) {
	TSSTouch_InitDevices();

	/* Write your code here ... */

}

/*
 ** ===================================================================
 **     Event       :  TSSTouch_fCallBack0 (module Events)
 **
 **     Component   :  TSSTouch [TSS_Library]
 **     Description :
 **         Callback definition for Control 0. This event is enabled
 **         only if Control 0 is enabled.
 **         The default CallBack Name is automatically generated with
 **         automatic prefix update by current Component Name. User can
 **         define own name, but then the automatic name update is not
 **         functional.
 **     Parameters  :
 **         NAME            - DESCRIPTION
 **         u8ControlId     - Valid unique Identifier of
 **                           the Control which generated the CallBack
 **                           function. This Id can be used for finding
 **                           of Callback's source Control.
 **     Returns     : Nothing
 ** ===================================================================
 */
void TSSTouch_fCallBack0(TSS_CONTROL_ID u8ControlId) {
	PWMLEDRed_SetRatio8(TSSTouch_cKey0.Position);
	if (TSSTouch_cKey0.DynamicStatus.Movement) {
		if (TSSTouch_cKey0.Events.Touch) {
			if (!(TSSTouch_cKey0.Events.InvalidPos)) {
				(void) TSSTouch_cKey0.Position;
				/* Write your code here ... */
				PWMLEDRed_SetRatio8(TSSTouch_cKey0.Position);
			}
		} else {
			/* Write your code here ... */
			PWMLEDRed_SetRatio8(TSSTouch_cKey0.Position);
		}
	}
	PWMLEDRed_SetRatio8(TSSTouch_cKey0.Position);
	(void) u8ControlId;
	PWMLEDRed_SetRatio8(TSSTouch_cKey0.Position);
	return;
}

/*
 ** ===================================================================
 **     Event       :  FRTOS1_vOnPreSleepProcessing (module Events)
 **
 **     Component   :  FRTOS1 [FreeRTOS]
 **     Description :
 **         Used in tickless idle mode only, but required in this mode.
 **         Hook for the application to enter low power mode.
 **     Parameters  :
 **         NAME            - DESCRIPTION
 **         expectedIdleTicks - expected idle
 **                           time, in ticks
 **     Returns     : Nothing
 ** ===================================================================
 */
void FRTOS1_vOnPreSleepProcessing(portTickType expectedIdleTicks) {
#if 1
	/* example for Kinetis (enable SetOperationMode() in CPU component): */
	/* or to wait for interrupt:
	 __asm volatile("dsb");
	 __asm volatile("wfi");
	 __asm volatile("isb");
	 */
#elif 0
	/* example for S08/S12/ColdFire V1 (enable SetWaitMode() in CPU): */
	Cpu_SetWaitMode();
#elif 0
	/* example for ColdFire V2: */
	__asm("stop #0x2000"); */
#else
#error "you *must* enter low power mode (wait for interrupt) here!"
#endif
	/* Write your code here ... */
}

/*
 ** ===================================================================
 **     Event       :  TU2_OnCounterRestart (module Events)
 **
 **     Component   :  TU2 [TimerUnit_LDD]
 */
/*!
 **     @brief
 **         Called if counter overflow/underflow or counter is
 **         reinitialized by modulo or compare register matching.
 **         OnCounterRestart event and Timer unit must be enabled. See
 **         [SetEventMask] and [GetEventMask] methods. This event is
 **         available only if a [Interrupt] is enabled.
 **     @param
 **         UserDataPtr     - Pointer to the user or
 **                           RTOS specific data. The pointer passed as
 **                           the parameter of Init method.
 */
/* ===================================================================*/
void TU2_OnCounterRestart(LDD_TUserData *UserDataPtr) {
	sonarEventEchoCapture(UserDataPtr);
}

/*
 ** ===================================================================
 **     Event       :  TU2_OnChannel0 (module Events)
 **
 **     Component   :  TU2 [TimerUnit_LDD]
 */
/*!
 **     @brief
 **         Called if compare register match the counter registers or
 **         capture register has a new content. OnChannel0 event and
 **         Timer unit must be enabled. See [SetEventMask] and
 **         [GetEventMask] methods. This event is available only if a
 **         [Interrupt] is enabled.
 **     @param
 **         UserDataPtr     - Pointer to the user or
 **                           RTOS specific data. The pointer passed as
 **                           the parameter of Init method.
 */
/* ===================================================================*/
void TU2_OnChannel0(LDD_TUserData *UserDataPtr) {
	sonarEventEchoOverflow(UserDataPtr);
}

/*
 ** ===================================================================
 **     Event       :  FRTOS1_vApplicationStackOverflowHook (module Events)
 **
 **     Component   :  FRTOS1 [FreeRTOS]
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
void FRTOS1_vApplicationStackOverflowHook(xTaskHandle pxTask,
		signed portCHAR *pcTaskName) {
	/* This will get called if a stack overflow is detected during the context
	 switch.  Set configCHECK_FOR_STACK_OVERFLOWS to 2 to also check for stack
	 problems within nested interrupts, but only do this for debug purposes as
	 it will increase the context switch time. */
	(void) pxTask;
	(void) pcTaskName;
	taskDISABLE_INTERRUPTS();
	/* Write your code here ... */
	for (;;) {
	}
}

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
void Cpu_OnNMIINT0(void) {
	/* Write your code here ... */
}

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
void FreeRTOS0_vApplicationTickHook(void) {
	/* Called for every RTOS tick. */
	/* Write your code here ... */
}

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
void FreeRTOS0_vApplicationIdleHook(void) {
	/* Called whenever the RTOS is idle (from the IDLE task).
	 Here would be a good place to put the CPU into low power mode. */
	/* Write your code here ... */
	incrementIdleTaskHookInteger();
}

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
void FreeRTOS0_vApplicationMallocFailedHook(void) {
	/* Called if a call to pvPortMalloc() fails because there is insufficient
	 free memory available in the FreeRTOS heap.  pvPortMalloc() is called
	 internally by FreeRTOS API functions that create tasks, queues, software
	 timers, and semaphores.  The size of the FreeRTOS heap is set by the
	 configTOTAL_HEAP_SIZE configuration constant in FreeRTOSConfig.h. */
	taskDISABLE_INTERRUPTS();
	/* Write your code here ... */
	for (;;) {
	}
}

/*
 ** ===================================================================
 **     Event       :  FreeRTOS0_vOnPreSleepProcessing (module Events)
 **
 **     Component   :  FreeRTOS0 [FreeRTOS]
 **     Description :
 **         Used in tickless idle mode only, but required in this mode.
 **         Hook for the application to enter low power mode.
 **     Parameters  :
 **         NAME            - DESCRIPTION
 **         expectedIdleTicks - expected idle
 **                           time, in ticks
 **     Returns     : Nothing
 ** ===================================================================
 */
void FreeRTOS0_vOnPreSleepProcessing(portTickType expectedIdleTicks) {
#if 1
	/* example for Kinetis (enable SetOperationMode() in CPU component): */
	//Cpu_SetOperationMode(DOM_WAIT, NULL, NULL);
	/* or to wait for interrupt:
	 __asm volatile("dsb");
	 __asm volatile("wfi");
	 __asm volatile("isb");
	 */
#elif 0
	/* example for S08/S12/ColdFire V1 (enable SetWaitMode() in CPU): */
	Cpu_SetWaitMode();
#elif 0
	/* example for ColdFire V2: */
	__asm("stop #0x2000"); */
#else
#error "you *must* enter low power mode (wait for interrupt) here!"
#endif
	/* Write your code here ... */
}

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
void FreeRTOS0_vApplicationStackOverflowHook(xTaskHandle pxTask, char *pcTaskName)
{
  /* This will get called if a stack overflow is detected during the context
     switch.  Set configCHECK_FOR_STACK_OVERFLOWS to 2 to also check for stack
     problems within nested interrupts, but only do this for debug purposes as
     it will increase the context switch time. */
  (void)pxTask;
  (void)pcTaskName;
  taskDISABLE_INTERRUPTS();
  /* Write your code here ... */
  for(;;) {}
}

/*
** ===================================================================
**     Event       :  FreeRTOS0_vOnPostSleepProcessing (module Events)
**
**     Component   :  FreeRTOS0 [FreeRTOS]
**     Description :
**         Event called after the CPU woke up after low power mode.
**         This event is optional.
**     Parameters  :
**         NAME            - DESCRIPTION
**         expectedIdleTicks - expected idle
**                           time, in ticks
**     Returns     : Nothing
** ===================================================================
*/
void FreeRTOS0_vOnPostSleepProcessing(portTickType expectedIdleTicks)
{
  /* Write your code here ... */
}

/* END Events */

#ifdef __cplusplus
} /* extern "C" */
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
