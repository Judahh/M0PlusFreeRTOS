/*
 * TaskSonar.c
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */
#include "TaskSonar.h"


void sonarEventEchoOverflow(LDD_TUserData *UserDataPtr) {
  SonarDeviceType *ptr = (SonarDeviceType*)UserDataPtr;
  
  ptr->state = echoOverflow;
}

void sonarEventEchoCapture(LDD_TUserData *UserDataPtr) {
	SonarDeviceType *ptr = (SonarDeviceType*)UserDataPtr;

  if (ptr->state==echoTriggered) { /* 1st edge, this is the raising edge, start measurement */
    TU2_ResetCounter(ptr->echoDevice);
    ptr->state = echoMeasure;
  } else if (ptr->state==echoMeasure) { /* 2nd edge, this is the falling edge: use measurement */
    (void)TU2_GetCaptureValue(ptr->echoDevice, 0, &ptr->capture);
    ptr->state = echoFinished;
  }
}

static uint16_t getAirspeed(uint8_t temperatureCelsius) {
  /* Return the airspeed depending on the temperature, in deci-meter per second */
  unsigned int airspeed; /* decimeters per second */

  airspeed = 3313 + (6 * temperatureCelsius); /* dry air, 0% humidity, see http://en.wikipedia.org/wiki/Speed_of_sound */
  airspeed -= (airspeed/100)*15; /* factor in ~15% for a relative humidity of ~40% */ 
  return airspeed;
}

uint16_t sonarMicrosecondsToCentimeters(uint16_t microseconds, uint8_t temperatureCelsius) {
  return (microseconds*100UL)/getAirspeed(temperatureCelsius)/2; /* 2 because because of two way */
}

/* measure and return the microseconds */
uint16_t sonarMeasureMicroseconds(uint8_t sonarIndex) {
  uint16_t us;
  /* send 10us pulse on TRIG line. */
  SonarTrigger_SetBit(sonarDevice.trigDevice,sonarIndex);
  WAIT0_Waitus(10);
  sonarDevice.state = echoTriggered;
  SonarTrigger_ClrBit(sonarDevice.trigDevice,sonarIndex);
  while(sonarDevice.state!=echoFinished) {
    /* measure echo pulse */
    if (sonarDevice.state==echoOverflow) { /* measurement took too long? */
    	sonarDevice.state = echoIdle;
      return 0; /* no echo, error case */
    }
  }
  us = (sonarDevice.capture*1000UL)/(TU2_CNT_INP_FREQ_U_0/1000);
  return us;
}

void sonarInit(void) {
  sonarDevice.state = echoIdle;
  sonarDevice.capture = 0;
  sonarDevice.trigDevice = SonarTrigger_Init(NULL);
  sonarDevice.echoDevice = TU2_Init(&sonarDevice);
}

void taskSonarWork(void) {
	

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

