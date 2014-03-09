/*
 * Led.h
 *
 *  Created on: Feb 20, 2014
 *      Author: JH
 */

#ifndef LED_H_
#define LED_H_

#include "PE_Types.h"
#include "PE_LDD.h"

enum Color {
	white=0, red=1, /*orange,*/ yellow=2, green=3, indigo=4, blue=5, violet=6, black=7
};

//void setLed(uint8_t color);
void setLed(uint32_t color);
void setLedByColor(enum Color color);
#endif /* LED_H_ */
