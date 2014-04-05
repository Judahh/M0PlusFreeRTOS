/*
 * GlobalVariables.c
 *
 *  Created on: Apr 4, 2014
 *      Author: JH
 */
#include "GlobalVariables.h"

int idleTaskHookInteger;

void initGlobalVariables(void){
	idleTaskHookInteger=0;
}

int getIdleTaskHookInteger(void){
	return idleTaskHookInteger;
}

void incrementIdleTaskHookInteger(void){
	idleTaskHookInteger++;
}
