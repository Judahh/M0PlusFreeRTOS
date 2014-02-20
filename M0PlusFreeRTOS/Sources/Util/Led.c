/*
 * Led.c
 *
 *  Created on: Feb 20, 2014
 *      Author: JH
 */
#include "Led.h"

void setLed(uint8_t color) {
	setLedByColor((enum Color) color);
}

void setLedByColor(enum Color color) {
	switch (color) {
		case white:
			LedBlue_PutVal(0, 0);
			LedRed_PutVal(0, 0);
			LedGreen_PutVal(0, 0);
		break;
		case red:
			LedRed_PutVal(0, 0);
			LedGreen_PutVal(0, 1);
			LedBlue_PutVal(0, 1);

		break;
//		case orange:
//			LedBlue_SetVal(0);
//			LedGreen_NegVal(0);
//			LedRed_NegVal(0);
//		break;
		case yellow:
			LedRed_PutVal(0, 0);
			LedGreen_PutVal(0, 0);
			LedBlue_PutVal(0, 1);

		break;
		case green:
			LedRed_PutVal(0, 1);
			LedGreen_PutVal(0, 0);
			LedBlue_PutVal(0, 1);

		break;
		case indigo:
			LedRed_PutVal(0, 1);
			LedGreen_PutVal(0, 0);
			LedBlue_PutVal(0, 0);

		break;
		case blue:
			LedRed_PutVal(0, 1);
			LedGreen_PutVal(0, 1);
			LedBlue_PutVal(0, 0);

		break;

		case violet:
			LedRed_PutVal(0, 0);
			LedGreen_PutVal(0, 1);
			LedBlue_PutVal(0, 0);

		break;
		case black:
			LedRed_PutVal(0, 1);
			LedGreen_PutVal(0, 1);
			LedBlue_PutVal(0, 1);

		break;

		default:
			LedRed_PutVal(0, 0);
			LedGreen_PutVal(0, 0);
			LedBlue_PutVal(0, 0);

		break;
	}
}
