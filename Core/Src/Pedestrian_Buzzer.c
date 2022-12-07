/*
 * Pedestrian_Buzzer.c
 *
 *  Created on: Dec 3, 2022
 *      Author: admin
 */


#include "Pedestrian_Buzzer.h"
void resetBuzzer(){
	__HAL_TIM_SetCompare(&htim3,TIM_CHANNEL_1,0);
}

void setBuzzer(int number){
	int value = 200*(5-number);
	  __HAL_TIM_SetCompare(&htim3,TIM_CHANNEL_1,value);
}
