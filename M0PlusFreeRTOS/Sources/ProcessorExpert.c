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
#include "LedBlue.h"
#include "LedGreen.h"
#include "LedRed.h"
#include "AS1.h"
#include "WAIT1.h"
#include "TU1.h"
#include "I2C0.h"
#include "Tasks/TaskBlueLed.h"
#include "Tasks/TaskGreenLed.h"
#include "Tasks/TaskRedLed.h"
#include "Tasks/TaskAccelerometer.h"
#include "Tasks/TaskRotateLed.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */

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
//	
//	if (taskAccelerometerStart() != pdPASS ) {
//		for (;;) {
//		};
//	}

	uint8_t taskAccelerometerRes;
	taskAccelerometerRes = accelerometerInit();
	for (;;) {
		accelerometerTestRun(taskAccelerometerRes);
	}
	
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
