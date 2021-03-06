/*
 * TaskRotateLed.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskRotateLed.h"
static uint8_t color;
void taskRotateLedWork(void) {
	setLed(color);
	color++;
	if (color > 7) {
		color = 0;
	}
	FreeRTOS0_vTaskDelay(500 / portTICK_RATE_MS);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION(TaskRotateLed, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	color = 0;
	for (;;) {
		taskRotateLedWork();

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
signed portBASE_TYPE taskRotateLedStart(void) {
	return FreeRTOS0_xTaskCreate(TaskRotateLed, /* pointer to the task */
			(signed portCHAR *) "TaskRotateLed", /* task name for kernel awareness debugging */
			configMINIMAL_STACK_SIZE, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [taskRotateLedHandle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskRotateLedStop(void) {
	if (!taskHandles[taskRotateLedHandle])
		return 0;

	vTaskDelete(taskHandles[taskRotateLedHandle]);
	taskHandles[taskRotateLedHandle] = NULL;

	return 1;
}

