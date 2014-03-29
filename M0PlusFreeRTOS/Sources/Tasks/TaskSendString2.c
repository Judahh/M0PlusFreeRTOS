/*
 * TaskSendString2.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskSendString2.h"

void taskSendString2Work(void) {
	printf("Iniciando envio da Task2 pela Serial 1!\r\n");
	FRTOS1_vTaskDelay(500 / portTICK_RATE_MS);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION( TaskSendString2, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskSendString2Work();

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
signed portBASE_TYPE taskSendString2Start(void) {
	return FRTOS1_xTaskCreate(TaskSendString2, /* pointer to the task */
			(signed portCHAR *) "TaskSendString2", /* task name for kernel awareness debugging */
			configMINIMAL_STACK_SIZE, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [taskSendString2Handle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskSendString2Stop(void) {
	if (!taskHandles[taskSendString2Handle])
		return 0;

	vTaskDelete(taskHandles[taskSendString2Handle]);
	taskHandles[taskSendString2Handle] = NULL;

	return 1;
}

