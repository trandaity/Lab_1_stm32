/*
 * runClock.c
 *
 *  Created on: Nov 11, 2022
 *      Author: trand
 */

#include "runClock.h"

void runClock()
{
	sec++;
	if(sec >= 60){
		min++;
		sec = 0;
	}

	if(min >= 60){
		hour++;
		min = 0;
	}

	HAL_Delay(100);
	clearAllClock();
	setNumberOnClock(sec/5);
	setNumberOnClock(min/5);
	setNumberOnClock(hour);

}
