/*
 * TaskSendString.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskSendString.h"

int sIndex;

void taskSendStringWork(void) {
	printf("Envio da Task%d pela Serial 1!\r\n", sIndex);
	FRTOS1_vTaskDelay(500 / portTICK_RATE_MS);
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
signed portBASE_TYPE taskSendStringStart(int index) {
	signed portBASE_TYPE portBase = FRTOS1_xTaskCreate(TaskSendString, /* pointer to the task */
			(signed portCHAR *) ("taskSendString%d", index), /* task name for kernel awareness debugging */
			500, /* task stack size */
			&index, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [taskSendStringHandle]);

	
	sIndex = index;
	
//	printf("Inicio da Task%d!\r\n", sIndex);
	
	return portBase;
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskSendStringStop(void) {
	if (!taskHandles [taskSendStringHandle])
		return 0;

	vTaskDelete(taskHandles [taskSendStringHandle]);
	taskHandles [taskSendStringHandle] = NULL;

	return 1;
}

