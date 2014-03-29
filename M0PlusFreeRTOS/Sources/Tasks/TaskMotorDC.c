/*
 * taskMotorDC.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "taskMotorDC.h"

void taskMotorDCWork(void) {
//	FRTOS1_vTaskSuspend(taskHandles[taskGreenLedHandle]);
	MotorA_PutBit(0, 0, TRUE);
	MotorA_PutBit(0, 1, FALSE);
	MotorB_PutBit(0, 0, TRUE);
	MotorB_PutBit(0, 1, FALSE);
	FRTOS1_vTaskDelay(500 / portTICK_RATE_MS);
	MotorA_PutBit(0, 0, FALSE);
	MotorA_PutBit(0, 1, FALSE);
	MotorB_PutBit(0, 0, TRUE);
	MotorB_PutBit(0, 1, FALSE);
	FRTOS1_vTaskDelay(500 / portTICK_RATE_MS);
	MotorA_PutBit(0, 0, TRUE);
	MotorA_PutBit(0, 1, FALSE);
	MotorB_PutBit(0, 0, TRUE);
	MotorB_PutBit(0, 1, FALSE);
	FRTOS1_vTaskDelay(500 / portTICK_RATE_MS);
	MotorA_PutBit(0, 0, FALSE);
	MotorA_PutBit(0, 1, FALSE);
	MotorB_PutBit(0, 0, FALSE);
	MotorB_PutBit(0, 1, FALSE);
	FRTOS1_vTaskDelay(500 / portTICK_RATE_MS);
//	FRTOS1_vTaskResume(taskHandles[taskRedLedHandle]);
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION(taskMotorDC, pvParameters) {
	(void) pvParameters; /* parameter not used */
	// Do any required initialisation or 
	// set up any hardware before the task
	// begins executing for the first time

	// ToDo: ...

	// The code within the for loop is your actual
	// task that will continously execute
	for (;;) {
		taskMotorDCWork();

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
signed portBASE_TYPE taskMotorDCStart(void) {
	return FRTOS1_xTaskCreate(taskMotorDC, /* pointer to the task */
			(signed portCHAR *) "taskMotorDC", /* task name for kernel awareness debugging */
			configMINIMAL_STACK_SIZE, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			tskIDLE_PRIORITY, /* initial priority */
			&taskHandles [taskMotorDCHandle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskMotorDCStop(void) {
	if (!taskHandles[taskMotorDCHandle])
		return 0;

	vTaskDelete(taskHandles[taskMotorDCHandle]);
	taskHandles[taskMotorDCHandle] = NULL;

	return 1;
}

