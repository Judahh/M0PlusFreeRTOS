/* ###################################################################
 **     Filename    : ProcessorExpert.c
 **     Project     : ProcessorExpert
 **     Processor   : MKL25Z128VLK4
 **     Version     : Driver 01.01
 **     Compiler    : GNU C Compiler
 **     Date/Time   : 2014-02-06, 15:46, # CodeGen: 0
 **     Abstract    :
 **         Main module.
 **         This module contains user's application code.
 **     Settings    :
 **     Contents    :
 **         No public methods
 **
 ** ###################################################################*/
/*!
 ** @file ProcessorExpert.c
 ** @version 01.01
 ** @brief
 **         Main module.
 **         This module contains user's application code.
 */
/*!
 **  @addtogroup ProcessorExpert_module ProcessorExpert module documentation
 **  @{
 */
/* MODULE ProcessorExpert */

/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "FRTOS1.h"
#include "UTIL1.h"
#include "UTIL2.h"
#include "WAIT0.h"
#include "TU0.h"
#include "TU1.h"
#include "TU2.h"
#include "I2C1.h"
#include "I2C0.h"
#include "AD0.h"
#include "AdcLdd1.h"
#include "MMA0.h"
#include "GI2C0.h"
#include "CsIO1.h"
#include "IO1.h"
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
#include "Tasks/TaskBlueLed.h"
#include "Tasks/TaskGreenLed.h"
#include "Tasks/TaskRedLed.h"
#include "Tasks/TaskSendString.h"
#include "Tasks/TaskSendString1.h"
#include "Tasks/TaskSendString2.h"
#include "Tasks/TaskAccelerometer.h"
#include "Tasks/TaskGyroscope.h"
#include "Tasks/TaskRotateLed.h"
#include "Tasks/TaskMotorDC.h"
#include "Util/UART.h"
#include "Util/Led.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
//static uint16_t valueAD[6];
/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void) {/*lint -restore Enable MISRA rule (6.3) checking. */
	/* Write your local variable definition here */
//	int index = 0;
//	int index2 = 0;
//	int max = 100;
	/*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
	PE_low_level_init();
	/*** End of Processor Expert internal initialization.                    ***/

	/* Write your code here */
	/* For example: for(;;) { } */

//	static uint8_t value;
//	for(;;) {
//	  (void)AD0_Measure(TRUE); /* do conversion and wait for the result */
//	  (void)AD0_GetValue8(&value); /* get the result into value variable */
//	  PWMLEDBlue_SetRatio8(value);
//	}
//	Configure();
//	for(;;) {
//	    TSS_Task(); /* call TSS library to process touches */
//	}
//	printf("ponteiro = %d!\r\n",pIndex);
//	printf("valor = %d!\r\n",*pIndex);
//	
//	setLed(1);
//	int index = 1;
//	int index2 = 2;
//	
//	if (taskSendStringStart(index) != pdPASS ) {
//		for (;;) {
//		};
//	}
//
//	if (taskSendStringStart(index2) != pdPASS ) {
//		for (;;) {
//		};
//	}
//
//	if (taskSendString1Start() != pdPASS ) {
//		for (;;) {
//		};
//	}
//
//	if (taskSendString2Start() != pdPASS ) {
//		for (;;) {
//		};
//	}
//
//	if (taskRedLedStart() != pdPASS ) {
//		for (;;) {
//		};
//	}
//
//	if (taskGreenLedStart() != pdPASS ) {
//		for (;;) {
//		};
//	}
//
//	if (taskBlueLedStart() != pdPASS ) {
//		for (;;) {
//		};
//	}
//	FRTOS1_vTaskSuspend(taskHandles[taskBlueLedHandle]);
//	FRTOS1_vTaskSuspend(taskHandles[taskGreenLedHandle]);
//	
//	if (taskAccelerometerStart() != pdPASS ) {
//		for (;;) {
//		};
//	}
//
//	if (taskMotorDCStart() != pdPASS ) {
//		for (;;) {
//		};
//	}
//
	if (taskGyroscopeStart() != pdPASS ) {
		for (;;) {
		};
	}
//	
//
//	uint8_t taskAccelerometerRes;
//	taskAccelerometerRes = accelerometerInit();
//	for (;;) {
//		accelerometerTestRun(taskAccelerometerRes);
//	}
//	
//	for (;;) {
//		(void) AD0_Measure(TRUE); /* do conversion and wait for the result */
//		(void) AD0_GetValue16(&valueAD[0]); /* get the result into value variable */
//	}
//	
//	for (;;) {
////		AD_finished = FALSE; /* reset flag */
//		(void) AD0_Measure(FALSE); /* AD_finished will be set to TRUE once */
//		while (!AD_finished) {
//			/* do something else here... */
//		}
//		/* AD_finished set to TRUE by the interrupt to indicate the result is ready */
//		(void) AD0_GetValue16(&value); /* get the result into value variable */
//	}
//
//	if (taskRotateLedStart() != pdPASS ) {
//		for (;;) {
//		};
//	}

//	FRTOS1_vTaskStartScheduler();
	/*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END ProcessorExpert */
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
