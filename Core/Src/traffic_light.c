/*
 * traffic_light.c
 *
 *  Created on: Nov 4, 2022
 *      Author: trand
 */

#include "main.h"
#include "traffic_light.h"
#include "display7SEG.h"

int status = INIT;
int counter = 0;

void trafficLightFSM(){
	display7SEG(counter--);
	switch(status){
	case INIT:
	{
		HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, 1);
		counter = 5;
		status = RED;
	}
	case RED:
	{
		HAL_GPIO_WritePin(YELLOW_GPIO_Port, YELLOW_Pin, 0);
		HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, 1);
		if(counter <= 0)
		{
			counter = 3;
			status = GREEN;
		}
		break;
	}
	case YELLOW:
	{
		HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, 0);
		HAL_GPIO_WritePin(YELLOW_GPIO_Port, YELLOW_Pin, 1);
		if(counter <= 0)
		{
			counter = 5;
			status = RED;
		}

		break;
	}
	case GREEN:
	{
		HAL_GPIO_WritePin(RED_GPIO_Port, RED_Pin, 0);
		HAL_GPIO_WritePin(GREEN_GPIO_Port, GREEN_Pin, 1);
		if(counter <= 0)
		{
			counter = 2;
			status = YELLOW;
		}
		break;
	}
	default:
		break;
	}
}
