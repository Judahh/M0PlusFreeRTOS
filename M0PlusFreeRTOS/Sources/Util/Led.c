/*
 * Led.c
 *
 *  Created on: Feb 20, 2014
 *      Author: JH
 */
#include "Led.h"

//void setLed(uint8_t color) {
//	setLedByColor((enum Color) color);
//}

void setLed(uint32_t color) {
	uint8_t red = color/0x10000;//  12
	uint8_t green = (color%0x10000)/0x100;//  34
	uint8_t blue = color%0x100;// 56
	
	PWMLEDRed_SetRatio8(red);
	PWMLEDGreen_SetRatio8(green);
	PWMLEDBlue_SetRatio8(blue);
}

void setLedByColor(enum Color color) {
	switch (color) {
		case white:
			PWMLEDRed_SetRatio8(0xFF);
			PWMLEDGreen_SetRatio8(0xFF);
			PWMLEDBlue_SetRatio8(0xFF);
		break;
		case red:
			PWMLEDRed_SetRatio8(0xFF);
			PWMLEDGreen_SetRatio8(0);
			PWMLEDBlue_SetRatio8(0);

		break;
//		case orange:
//			LedBlue_SetVal(0);
//			LedGreen_NegVal(0);
//			LedRed_NegVal(0);
//		break;
		case yellow:
			PWMLEDRed_SetRatio8(0xFF);
			PWMLEDGreen_SetRatio8(0xFF);
			PWMLEDBlue_SetRatio8(0);

		break;
		case green:
			PWMLEDRed_SetRatio8(0);
			PWMLEDGreen_SetRatio8(0xFF);
			PWMLEDBlue_SetRatio8(0);

		break;
		case indigo:
			PWMLEDRed_SetRatio8(0);
			PWMLEDGreen_SetRatio8(0xFF);
			PWMLEDBlue_SetRatio8(0xFF);

		break;
		case blue:
			PWMLEDRed_SetRatio8(0);
			PWMLEDGreen_SetRatio8(0);
			PWMLEDBlue_SetRatio8(0xFF);

		break;

		case violet:
			PWMLEDRed_SetRatio8(0xFF);
			PWMLEDGreen_SetRatio8(0);
			PWMLEDBlue_SetRatio8(0xFF);

		break;
		case black:
			PWMLEDRed_SetRatio8(0);
			PWMLEDGreen_SetRatio8(0);
			PWMLEDBlue_SetRatio8(0);

		break;

		default:
			PWMLEDRed_SetRatio8(0xFF/100);
			PWMLEDGreen_SetRatio8(0xFF/100);
			PWMLEDBlue_SetRatio8(0xFF/100);
		break;
	}
}
