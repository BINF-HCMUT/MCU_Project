/*
 * Pedestrian.c
 *
 *  Created on: Dec 1, 2022
 *      Author: admin
 */
#include"Pedestrian.h"
void check_press(){
	if(is_button_pressed(0) && status < 20){
		setTimer4(60000);
		Pedes_press = 1;
	}
}
void Pedestrian_behavior(){
	check_press();
	if(Pedes_press == 1){
		switch (status) {
				case M1_RED_GREEN:
					resetBuzzer();
					HAL_GPIO_WritePin(PEDES_R_GPIO_Port, PEDES_R_Pin, 1);
					HAL_GPIO_WritePin(PEDES_G_GPIO_Port, PEDES_G_Pin, 0);
					break;

				case M1_RED_YELLOW:
					HAL_GPIO_WritePin(PEDES_R_GPIO_Port, PEDES_R_Pin, 1);
					HAL_GPIO_WritePin(PEDES_G_GPIO_Port, PEDES_G_Pin, 0);
					break;

				case M1_GREEN_RED:
					HAL_GPIO_WritePin(PEDES_R_GPIO_Port, PEDES_R_Pin, 0);
					HAL_GPIO_WritePin(PEDES_G_GPIO_Port, PEDES_G_Pin, 1);
					break;

				case M1_YELLOW_RED:
					setBuzzer(count1);
					HAL_GPIO_WritePin(PEDES_R_GPIO_Port, PEDES_R_Pin, 1);
					HAL_GPIO_WritePin(PEDES_G_GPIO_Port, PEDES_G_Pin, 1);
					break;

				default:
					break;
			}
		if(timer4_flag == 1){
			HAL_GPIO_WritePin(PEDES_R_GPIO_Port, PEDES_R_Pin, 0);
			HAL_GPIO_WritePin(PEDES_G_GPIO_Port, PEDES_G_Pin, 0);
			Pedes_press = 0;
			resetBuzzer();
		}
	}
}
