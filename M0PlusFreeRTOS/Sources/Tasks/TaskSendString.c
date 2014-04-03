/*
 * TaskSendString.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskSendString.h"

void taskSendStringWork(int8_t index) {
	printf("Envio da %d pela Serial 1!\r\n", index);
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
	int8_t index = (int8_t) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	
	for (;;) {
		taskSendStringWork(index);

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
signed portBASE_TYPE taskSendStringStart(int8_t index) {
	char name[15];
	sprintf(name, "taskSendStringI%d", index);
	signed portBASE_TYPE portBase = FRTOS1_xTaskCreate(TaskSendString, /* pointer to the task */
			(signed portCHAR *) name, /* task name for kernel awareness debugging */
			500, /* task stack size */
			(void*)index, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [index]);
	printf("start da %s!\r\n", name);
	return portBase;
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskSendStringStop(int8_t index) {
	if (!taskHandles [index])
		return 0;

	vTaskDelete(taskHandles [index]);
	taskHandles [index] = NULL;

	return 1;
}

