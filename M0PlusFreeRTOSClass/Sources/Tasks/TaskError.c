/*
 * TaskError.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskError.h"

void taskErrorWork(void) {
	LEDRed_ClrVal();
	FreeRTOS0_vTaskDelay(500 / portTICK_RATE_MS);
	LEDRed_SetVal();
	FreeRTOS0_vTaskDelay(500 / portTICK_RATE_MS);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION(TaskError, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...
	
	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskErrorWork();

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
signed portBASE_TYPE taskErrorStart(void) {
	return FreeRTOS0_xTaskCreate(TaskError, /* pointer to the task */
			(signed portCHAR *) "TaskError", /* task name for kernel awareness debugging */
			configMINIMAL_STACK_SIZE, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [taskErrorHandle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskErrorStop(void) {
	if (!taskHandles[taskErrorHandle])
		return 0;

	vTaskDelete(taskHandles[taskErrorHandle]);
	taskHandles[taskErrorHandle] = NULL;

	return 1;
}

