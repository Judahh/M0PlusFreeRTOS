/*
 * TaskSonar.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskSonar.h"

void taskSonarWork(void) {
	FRTOS1_vTaskSuspend(taskHandles[taskGreenLedHandle]);
	PWMLEDBlue_SetRatio8(0xFF);
	FRTOS1_vTaskDelay(500 / portTICK_RATE_MS);
	PWMLEDBlue_SetRatio8(0x00);
	FRTOS1_vTaskResume(taskHandles[taskRedLedHandle]);
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
static portTASK_FUNCTION(TaskSonar, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...
	
	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskSonarWork();

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
signed portBASE_TYPE taskSonarStart(void) {
	return FRTOS1_xTaskCreate(TaskSonar, /* pointer to the task */
			(signed portCHAR *) "TaskSonar", /* task name for kernel awareness debugging */
			configMINIMAL_STACK_SIZE, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [taskSonarHandle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskSonarStop(void) {
	if (!taskHandles[taskSonarHandle])
		return 0;

	vTaskDelete(taskHandles[taskSonarHandle]);
	taskHandles[taskSonarHandle] = NULL;

	return 1;
}

