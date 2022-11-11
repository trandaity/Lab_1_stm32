/*
 * runClock.c
 *
 *  Created on: Nov 11, 2022
 *      Author: trand
 */

#include "runClock.h"

void runClock(int num){
	GPIOA->ODR = clockIndicator;
	while(!fiveMinInterval)
	{
		sec << 1;
		if(sec == 0x0000)
		{
			sec = 0x0010;
			countSec++;
		}

		if(countSec == 5){
			fiveMinInterval = 1;
		}
	}

	fiveMinInterval = 0;
	min << 1;

	if(min == 0x0000)
	{
		min = 0x0010;
		hour << 1;
	}
}
