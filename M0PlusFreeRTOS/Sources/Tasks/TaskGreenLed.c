/*
 * TaskGreenLed.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskGreenLed.h"

void taskGreenLedwork(void) {
	LedGreen_NegVal(0);
	FRTOS1_vTaskDelay(1000 / portTICK_RATE_MS);
	LedGreen_SetVal(0);
	FRTOS1_vTaskDelay(500 / portTICK_RATE_MS);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION(TaskGreenLed, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskGreenLedwork();

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
signed portBASE_TYPE taskGreenLedStart(void) {
	xTaskHandle TaskGreenLedHandle = NULL;
	return FRTOS1_xTaskCreate(TaskGreenLed, /* pointer to the task */
	(signed portCHAR *) "TaskGreenLed", /* task name for kernel awareness debugging */
	configMINIMAL_STACK_SIZE, /* task stack size */
	(void*) NULL, /* optional task startup argument */
	tskIDLE_PRIORITY, /* initial priority */
	TaskGreenLedHandle);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskGreenLedStop(void) {
//	if (!taskHandles[TASKHANDLE_TASK])
//		return 0;
//
//	vTaskDelete(taskHandles[TASKHANDLE_TASK]);
//	taskHandles[TASKHANDLE_TASK] = NULL;

	return 1;
}

