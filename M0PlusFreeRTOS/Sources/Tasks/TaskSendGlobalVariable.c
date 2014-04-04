/*
 * TaskSendGlobalVariable.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskSendGlobalVariable.h"
#include "Util/GlobalVariables.h"

void taskSendGlobalVariableWork(void) {
	printf("Valor = %d!\r\n",getIdleTaskHookInteger());
	FreeRTOS0_vTaskDelay(500 / portTICK_RATE_MS);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION( TaskSendGlobalVariable, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskSendGlobalVariableWork();

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
signed portBASE_TYPE taskSendGlobalVariableStart(void) {
	printf("start da Task!\r\n");
	
	return FreeRTOS0_xTaskCreate(TaskSendGlobalVariable, /* pointer to the task */
			(signed portCHAR *) "TaskSendGlobalVariable", /* task name for kernel awareness debugging */
			500, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [taskSendGlobalVariableHandle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskSendGlobalVariableStop(void) {
	if (!taskHandles[taskSendGlobalVariableHandle])
		return 0;

	vTaskDelete(taskHandles[taskSendGlobalVariableHandle]);
	taskHandles[taskSendGlobalVariableHandle] = NULL;

	return 1;
}

