/*
 * TaskRedLed.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskRedLed.h"

void taskRedLedWork(void) {
	PWMLEDGreen_SetRatio8(0x00);
	invertRedLed();
}

void invertRedLed(void) {
	if (ledRedOn) {
		PWMLEDRed_SetRatio8(0x00);
	} else {
		PWMLEDRed_SetRatio8(0xFF);
	}
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION( TaskRedLed, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskRedLedWork();

		// vTaskDelay will cause the task to be delayed for 
		// a specified number of ticks
//		vTaskDelay(100);  // Wait 100 ticks or 1 second
	}
}

/**************************************************************************/
/*! 
 Creates a new task for the FreeRTOS Kernel and add it to the
 scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskRedLedStart(void) {
	PWMLEDRed_SetRatio8(0x00);
	ledRedOn = FALSE;
	return FreeRTOS0_xTaskCreate(TaskRedLed, /* pointer to the task */
			(signed portCHAR *) "TaskRedLed", /* task name for kernel awareness debugging */
			configMINIMAL_STACK_SIZE, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			1, /* initial priority */
			&taskHandles [taskRedLedHandle0]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskRedLedStop(void) {
	if (!taskHandles[taskRedLedHandle0])
		return 0;

	vTaskDelete(taskHandles[taskRedLedHandle0]);
	taskHandles[taskRedLedHandle0] = NULL;

	return 1;
}

