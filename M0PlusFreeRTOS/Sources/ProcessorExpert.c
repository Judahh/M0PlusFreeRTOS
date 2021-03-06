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
#include "UTIL0.h"
#include "UTIL1.h"
#include "WAIT0.h"
#include "TU0.h"
#include "TU1.h"
#include "TU2.h"
#include "I2C1.h"
#include "I2C0.h"
#include "MMA0.h"
#include "GI2C0.h"
#include "PWMBuzzer.h"
#include "PwmLdd4.h"
#include "CsIO0.h"
#include "IO1.h"
#include "TSSTouch.h"
#include "PWMLEDBlue.h"
#include "PwmLdd1.h"
#include "PWMLEDGreen.h"
#include "PwmLdd2.h"
#include "PWMLEDRed.h"
#include "PwmLdd3.h"
#include "FreeRTOS0.h"
#include "Tasks/TaskBlueLed.h"
#include "Tasks/TaskGreenLed.h"
#include "Tasks/TaskRedLed.h"
#include "Tasks/TaskSendString.h"
#include "Tasks/TaskSendString1.h"
#include "Tasks/TaskSendString2.h"
#include "Tasks/TaskWriteString.h"
#include "Tasks/TaskSendGlobalVariable.h"
#include "Tasks/TaskAccelerometer.h"
#include "Tasks/TaskGyroscope.h"
#include "Tasks/TaskRotateLed.h"
#include "Tasks/TaskMotorDC.h"
#include "Util/Led.h"
#include "Util/GlobalVariables.h"
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

	initGlobalVariables();

	taskHandles[queueHandle] = FreeRTOS0_xQueueCreate(1000,sizeof(char));

	int homework = 1;

	switch (homework - 1) {
	case 0:
		if (taskSendString1Start() != pdPASS ) {
			for (;;) {
			};
		}

		if (taskSendString2Start() != pdPASS ) {
			for (;;) {
			};
		}

		if (taskWriteStringStart() != pdPASS ) {
			for (;;) {
			};
		}
		break;

	case 1:
		if (taskSendStringStart(0) != pdPASS ) {
			for (;;) {
			};
		}

		if (taskSendStringStart(1) != pdPASS ) {
			for (;;) {
			};
		}
		break;

	case 5:
		if (taskSendGlobalVariableStart() != pdPASS ) {
			for (;;) {
			};
		}
		break;

	default:
		if (taskAccelerometerStart() != pdPASS ) {
			for (;;) {
			};
		}
		break;

	}

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
