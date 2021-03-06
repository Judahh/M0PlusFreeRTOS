/*
 * TaskSendString1.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskSendString1.h"

void taskSendString1Work(void) {
//	printf("Envio da 1 pela Serial 1!\r\n");
//	FreeRTOS0_vTaskDelay(500 / portTICK_RATE_MS);
	
	FreeRTOS0_xQueueSendToBack(taskHandles [queueHandle],"1",500);
	FreeRTOS0_vTaskDelay(50 / portTICK_RATE_MS);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION( TaskSendString1, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskSendString1Work();

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
signed portBASE_TYPE taskSendString1Start(void) {
	printf("start da Task1!\r\n");
	
	return FreeRTOS0_xTaskCreate(TaskSendString1, /* pointer to the task */
			(signed portCHAR *) "TaskSendString1", /* task name for kernel awareness debugging */
			500, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [taskSendString1Handle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskSendString1Stop(void) {
	if (!taskHandles[taskSendString1Handle])
		return 0;

	vTaskDelete(taskHandles[taskSendString1Handle]);
	taskHandles[taskSendString1Handle] = NULL;

	return 1;
}

