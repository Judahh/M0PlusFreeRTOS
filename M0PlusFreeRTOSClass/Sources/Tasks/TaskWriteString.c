/*
 * TaskWriteString.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskWriteString.h"

void taskWriteStringWork(void) {
	char item = 0;
	FreeRTOS0_xQueueReceive(taskHandles [queueHandle], &item, 500);
	FreeRTOS0_vTaskDelay(10 / portTICK_RATE_MS);
	printf("%c",item);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION( TaskWriteString, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskWriteStringWork();

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
signed portBASE_TYPE taskWriteStringStart(void) {
	printf("start da Write!\r\n");
	return FreeRTOS0_xTaskCreate(TaskWriteString, /* pointer to the task */
			(signed portCHAR *) "TaskWriteString", /* task name for kernel awareness debugging */
			configMINIMAL_STACK_SIZE, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [taskWriteStringHandle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskWriteStringStop(void) {
	if (!taskHandles[taskWriteStringHandle])
		return 0;

	vTaskDelete(taskHandles[taskWriteStringHandle]);
	taskHandles[taskWriteStringHandle] = NULL;

	return 1;
}

