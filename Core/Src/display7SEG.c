/*
 * display7SEG.c
 *
 *  Created on: Nov 4, 2022
 *      Author: trand
 */

#include "main.h"
#include "display7SEG.h"

void turnOff7SEG(){
	HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 1);
	HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 1);
	HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 1);
	HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 1);
	HAL_GPIO_WritePin(E1_GPIO_Port, E1_Pin, 1);
	HAL_GPIO_WritePin(F1_GPIO_Port, F1_Pin, 1);
	HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, 1);
}

void display7SEG (int num){
	turnOff7SEG();
	switch(num){
	case 0:
	{
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 0);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 0);
		HAL_GPIO_WritePin(E1_GPIO_Port, E1_Pin, 0);
		HAL_GPIO_WritePin(F1_GPIO_Port, F1_Pin, 0);
		break;
	}
	case 1:
	{
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
		break;
	}
	case 2:
	{
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 0);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 0);
		HAL_GPIO_WritePin(E1_GPIO_Port, E1_Pin, 0);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, 0);
		break;
	}
	case 3:
	{
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 0);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 0);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, 0);
		break;
	}
	case 4:
	{
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
		HAL_GPIO_WritePin(F1_GPIO_Port, F1_Pin, 0);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, 0);
		break;
	}
	case 5:
	{
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 0);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 0);
		HAL_GPIO_WritePin(F1_GPIO_Port, F1_Pin, 0);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, 0);
		break;
	}
	case 6:
	{
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 0);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 0);
		HAL_GPIO_WritePin(E1_GPIO_Port, E1_Pin, 0);
		HAL_GPIO_WritePin(F1_GPIO_Port, F1_Pin, 0);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, 0);
		break;
	}
	case 7:
	{
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 0);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
		break;
	}
	case 8:
	{
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 0);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 0);
		HAL_GPIO_WritePin(E1_GPIO_Port, E1_Pin, 0);
		HAL_GPIO_WritePin(F1_GPIO_Port, F1_Pin, 0);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, 0);
		break;
	}
	case 9:
	{
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 0);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);
		HAL_GPIO_WritePin(C1_GPIO_Port, C1_Pin, 0);
		HAL_GPIO_WritePin(D1_GPIO_Port, D1_Pin, 0);
		HAL_GPIO_WritePin(F1_GPIO_Port, F1_Pin, 0);
		HAL_GPIO_WritePin(G1_GPIO_Port, G1_Pin, 0);
		break;
	}
	default:
		break;
	}
}
