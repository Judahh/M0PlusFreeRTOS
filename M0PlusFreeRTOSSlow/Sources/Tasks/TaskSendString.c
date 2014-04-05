/*
 * TaskSendString.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskSendString.h"

void taskSendStringWork(void) {
	printf("Periodic Task!\r\n");
	FreeRTOS0_vTaskDelay(500 / portTICK_RATE_MS);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION( TaskSendString, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	
	for (;;) {
		taskSendStringWork();

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
signed portBASE_TYPE taskSendStringStart(void) {
	char name[15];
	sprintf(name, "taskSendString");
	signed portBASE_TYPE portBase = FreeRTOS0_xTaskCreate(TaskSendString, /* pointer to the task */
			(signed portCHAR *) name, /* task name for kernel awareness debugging */
			500, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			1, /* initial priority */
			&taskHandles [taskSendStringHandle0]);
	printf("start da %s!\r\n", name);
	return portBase;
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskSendStringStop(void) {
	if (!taskHandles [taskSendStringHandle0])
		return 0;

	vTaskDelete(taskHandles [taskSendStringHandle0]);
	taskHandles [taskSendStringHandle0] = NULL;

	return 1;
}

