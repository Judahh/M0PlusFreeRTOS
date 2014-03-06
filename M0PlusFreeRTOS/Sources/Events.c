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
 **     Event       :  Cpu_OnNMIINT (module Events)
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
void Cpu_OnNMIINT(void) {
	/* Write your code here ... */
}

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
	UART_Description *ptr = (UART_Description*) UserDataPtr;
	ptr->isSent = TRUE; /* set flag so sender knows we have finished */
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
void FRTOS1_vApplicationStackOverflowHook(xTaskHandle pxTask, signed portCHAR *pcTaskName) {
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
 **     Event       :  FRTOS1_vApplicationTickHook (module Events)
 **
 **     Component   :  FRTOS1 [FreeRTOS]
 **     Description :
 **         If enabled, this hook will be called by the RTOS for every
 **         tick increment.
 **     Parameters  : None
 **     Returns     : Nothing
 ** ===================================================================
 */
void FRTOS1_vApplicationTickHook(void) {
	/* Called for every RTOS tick. */
	/* Write your code here ... */
}

/*
 ** ===================================================================
 **     Event       :  FRTOS1_vApplicationIdleHook (module Events)
 **
 **     Component   :  FRTOS1 [FreeRTOS]
 **     Description :
 **         If enabled, this hook will be called when the RTOS is idle.
 **         This might be a good place to go into low power mode.
 **     Parameters  : None
 **     Returns     : Nothing
 ** ===================================================================
 */
void FRTOS1_vApplicationIdleHook(void) {
	/* Called whenever the RTOS is idle (from the IDLE task).
	 Here would be a good place to put the CPU into low power mode. */
	/* Write your code here ... */
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
 **     Event       :  TU1_OnCounterRestart (module Events)
 **
 **     Component   :  TU1 [TimerUnit_LDD]
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
void TU1_OnCounterRestart(LDD_TUserData *UserDataPtr) {
	/* Write your code here ... */
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
 **     Event       :  AD0_OnEnd (module Events)
 **
 **     Component   :  AD0 [ADC]
 **     Description :
 **         This event is called after the measurement (which consists
 **         of <1 or more conversions>) is/are finished.
 **         The event is available only when the <Interrupt
 **         service/event> property is enabled.
 **     Parameters  : None
 **     Returns     : Nothing
 ** ===================================================================
 */
void AD0_OnEnd(void) {
//	extern volatile bool AD_finished;
//	AD_finished = TRUE;
}

/*
 ** ===================================================================
 **     Event       :  AD0_OnCalibrationEnd (module Events)
 **
 **     Component   :  AD0 [ADC]
 **     Description :
 **         This event is called when the calibration has been finished.
 **         User should check if the calibration pass or fail by
 **         Calibration status method./nThis event is enabled only if
 **         the <Interrupt service/event> property is enabled.
 **     Parameters  : None
 **     Returns     : Nothing
 ** ===================================================================
 */
void AD0_OnCalibrationEnd(void) {
	/* Write your code here ... */
}

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
	UART_Description *ptr = (UART_Description*) UserDataPtr;

	(void) ptr->rxPutFct(ptr->rxChar); /* but received character into buffer */
	(void) AS1_ReceiveBlock(ptr->handle, (LDD_TData *) &ptr->rxChar, sizeof(ptr->rxChar));
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
