/*
 * TaskAccelerometer.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskAccelerometer.h" 

void init(void) {
	initBeep();
	initError();
}

void initBeep(void) {
	stopBeep();
}

void initError(void) {
	stopError();
}

void startBeep(void) {
	printf("start Beep!\r\n");
	Buzzer_SetVal();
//	FreeRTOS0_vTaskResume(taskHandles[taskBuzzerHandle]);
	printf("start Beep 2!\r\n");
}

void startError(void) {
	LEDBlue_SetVal();
	LEDRed_SetVal();
	stopBeep();
	printf("start Error!\r\n");
	FreeRTOS0_vTaskResume(taskHandles[taskErrorHandle]);
	printf("start Error 2!\r\n");
}

void stopBeep(void) {
	printf("stop Beep!\r\n");
	Buzzer_ClrVal();
//	FreeRTOS0_vTaskSuspend(taskHandles[taskBuzzerHandle]);
	printf("stop Beep 2!\r\n");
}

void stopError(void) {
	printf("stop Error!\r\n");
	FreeRTOS0_vTaskSuspend(taskHandles[taskErrorHandle]);
	printf("stop Error 2!\r\n");
}

bool taskAccelerometerWork(bool likelyError) {
	int32_t accelerationX = abs(MMA0_GetX()); //(MMA0_GetX()/16384)*980665
	int32_t accelerationY = abs(MMA0_GetY()); //100000
	int32_t accelerationZ = abs(MMA0_GetZ());

	int32_t sum = accelerationX + accelerationY + accelerationZ;

//	printf("Soma = %ld!\r\n", sum);

	if (likelyError) {
		if (!((accelerationX == accelerationY)
				&& (accelerationY == accelerationZ))) {
			likelyError = 0;
		}
	}

	if (sum < 5000) {
		LEDBlue_SetVal();
		LEDRed_ClrVal();
		printf("QUEDA LIVRE!\r\n");
		startBeep();
		FreeRTOS0_vTaskDelay(500 / portTICK_RATE_MS);
	} else {
		LEDRed_SetVal();
		LEDBlue_ClrVal();
		stopBeep();
	}
	
	return likelyError;
}

/**************************************************************************/
/*! 
 The main code that will execute as long as the task is active.
 The first parameter (vMyTask in this case) needs to match the
 name used when the task is created in the method just below.
 */
/**************************************************************************/
static portTASK_FUNCTION(TaskAccelerometer, pvParameters) {
	(void) pvParameters;
	init();
	bool likelyError = 1;
	bool ok = 1;
	int likely = 0;
	int index = 0;
	MMA0_Init();
	
	while (((ok && likely < 2) || (index != likely))) {
		likelyError = taskAccelerometerWork(likelyError);
		ok=!likelyError;
		if (!ok) {
			likely++;
		} else {
			likely = 0;
		}
		index++;
	}
	startError();
}
/**************************************************************************/
/*! 
 Creates a new task for the FreeRTOS Kernel and add it to the
 scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskAccelerometerStart(void) {
	printf("START Accelerometer!\r\n");
	return FreeRTOS0_xTaskCreate(TaskAccelerometer, /* pointer to the task */
			(signed portCHAR *) "TaskAccelerometer", /* task name for kernel awareness debugging */
			1000, /* task stack size */
			(void*) NULL, /* optional task startup argument */
			1, /* initial priority */
			&taskHandles [taskAccelerometerHandle]);
}

/**************************************************************************/
/*! 
 Stops the task and deletes it from the task scheduler.
 */
/**************************************************************************/
signed portBASE_TYPE taskAccelerometerStop(void) {
	MMA0_Deinit();
	if (!taskHandles[taskAccelerometerHandle])
		return 0;

	vTaskDelete(taskHandles[taskAccelerometerHandle]);
	taskHandles[taskAccelerometerHandle] = NULL;

	return 1;
}

