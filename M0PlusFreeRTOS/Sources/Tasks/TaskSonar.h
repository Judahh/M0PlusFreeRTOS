/*
 * TaskBlueLed.h
 *
 *  Created on: Feb 6, 2014
 *      Author: JH
 */

#ifndef TASKSONAR_H_
#define TASKSONAR_H_

#include "FreeRTOS.h"
#include "FRTOS1.h"
#include "task.h"
#include "SonarTrigger.h"
#include "TU2.h"
#include "WAIT0.h"
#include "Tasks/HandlesEnum.h"

typedef enum {
  echoIdle, /* device not used */
  echoTriggered, /* started trigger pulse */
  echoMeasure, /* measuring echo pulse */
  echoOverflow, /* measurement took too long */
  echoFinished /* measurement finished */
} SonarEchoState;


typedef struct {
  LDD_TDeviceData *trigDevice; /* device handle for the Trigger pin */
  LDD_TDeviceData *echoDevice; /* input capture device handle (echo pin) */
  volatile SonarEchoState state; /* state */
  TU2_TValueType capture; /* input capture value */
} SonarDeviceType;
 
static SonarDeviceType sonarDevice; /* device handle for the ultrasonic device */


void taskSonarWork(void);
signed portBASE_TYPE taskSonarStart(void);
signed portBASE_TYPE taskSonarStop(void);
void sonarInit(void);

/* 
 * \brief Called in case of an overflow during input capture. This function is called from an interrupt!
 * \param UserDataPtr Pointer to user structure
 */
void sonarEventEchoOverflow(LDD_TUserData *UserDataPtr);

/*
 * \brief Called by the input capture interrupt for a raising or falling edge of the Echo pin
 * \param UserDataPtr Pointer to user structure
 */
void sonarEventEchoCapture(LDD_TUserData *UserDataPtr);

/* 
 * \brief Convert measured microseconds to centimeters.
 * \param[in] temperatureCelsius Air temperature in degree Celsius
 */
uint16_t sonarMicrosecondsToCentimeters(uint16_t microseconds, uint8_t temperatureCelsius);


uint16_t sonarMeasureMicroseconds(uint8_t sonarIndex);


#endif /* TASKSONAR_H_ */
