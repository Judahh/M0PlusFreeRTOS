/*
 * TaskBlueLed.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskBlueLed.h"

void taskBlueLedWork(void) {
//	FreeRTOS0_vTaskSuspend(taskHandles[taskGreenLedHandle]);
	PWMLEDBlue_SetRatio8(0xFF);
	FreeRTOS0_vTaskDelay(500 / portTICK_RATE_MS);
	PWMLEDBlue_SetRatio8(0x00);
//	FreeRTOS0_vTaskResume(taskHandles[taskRedLedHandle]);
//	PWMLEDBlue_SetRatio8(0x00);
//	FRTOS1_vTaskDelay(1000 / portTICK_RATE_MS);
//	PWMLEDBlue_SetRatio8(0xFF);
//	FRTOS1_vTaskDelay(500 / portTICK_RATE_MS);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION(TaskBlueLed, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...
	
	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskBlueLedWork();

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
signed portBASE_TYPE taskBlueLedStart(void) {
	return FreeRTOS0_xTaskCreate(TaskBlueLed, /* pointer to the task */
			(signed portCHAR *) "TaskBlueLed", /* task name for kernel awareness debugging */
			configMINIMAL_STACK_SIZE, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [taskBlueLedHandle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskBlueLedStop(void) {
	if (!taskHandles[taskBlueLedHandle])
		return 0;

	vTaskDelete(taskHandles[taskBlueLedHandle]);
	taskHandles[taskBlueLedHandle] = NULL;

	return 1;
}

