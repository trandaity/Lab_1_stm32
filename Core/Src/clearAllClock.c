/*
 * clearAllClock.c
 *
 *  Created on: Nov 11, 2022
 *      Author: trand
 */

#include "clearAllClock.h"

void clearAllClock(){
	GPIOA->ODR = 0x0000;
}

