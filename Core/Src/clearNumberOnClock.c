/*
 * clearNumberOnClock.c
 *
 *  Created on: Nov 11, 2022
 *      Author: trand
 */

#include "clearNumberOnClock.h"

void clearNumberOnClock(int num){
	switch(num)
	{
	case 0:
	{
		HAL_GPIO_WritePin(L0_GPIO_Port, L0_Pin, 0);
		break;
	}
	case 1:
	{
		HAL_GPIO_WritePin(L1_GPIO_Port, L1_Pin, 0);
		break;
	}
	case 2:
	{
		HAL_GPIO_WritePin(L2_GPIO_Port, L2_Pin, 0);
		break;
	}
	case 3:
	{
		HAL_GPIO_WritePin(L3_GPIO_Port, L3_Pin, 0);
		break;
	}
	case 4:
	{
		HAL_GPIO_WritePin(L4_GPIO_Port, L4_Pin, 0);
		break;
	}
	case 5:
	{
		HAL_GPIO_WritePin(L5_GPIO_Port, L5_Pin, 0);
		break;
	}
	case 6:
	{
		HAL_GPIO_WritePin(L6_GPIO_Port, L6_Pin, 0);
		break;
	}
	case 7:
	{
		HAL_GPIO_WritePin(L7_GPIO_Port, L7_Pin, 0);
		break;
	}
	case 8:
	{
		HAL_GPIO_WritePin(L8_GPIO_Port, L8_Pin, 0);
		break;
	}
	case 9:
	{
		HAL_GPIO_WritePin(L9_GPIO_Port, L9_Pin, 0);
		break;
	}
	case 10:
	{
		HAL_GPIO_WritePin(L10_GPIO_Port, L10_Pin, 0);
		break;
	}
	case 11:
	{
		HAL_GPIO_WritePin(L11_GPIO_Port, L11_Pin, 0);
		break;
	}
	default: break;
	}
}
