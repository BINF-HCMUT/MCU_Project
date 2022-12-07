/*
 * M3_fsm.c
 *
 *  Created on: Nov 14, 2022
 *      Author: admin
 */

#include "M3_fsm.h"

void M3_fsm_run(){
	if(status == M3){

		//Blinky YELLOW Led in 2Hz
		if(timer3_flag == 1){
			//blinky all YELLOW Led
			HAL_GPIO_TogglePin(A1_GPIO_Port, A1_Pin);
			HAL_GPIO_TogglePin(B1_GPIO_Port, B1_Pin);
			HAL_GPIO_TogglePin(A2_GPIO_Port, A2_Pin);
			HAL_GPIO_TogglePin(B2_GPIO_Port, B2_Pin);
			setTimer3(250);
		}

		//count down the number display on 7-seg LED
		if(timer1_flag == 1){
			count1--;
			setTimer1(1000);
		}

		//Switch to M4 mode
		if(is_button_pressed(1)||timer2_flag == 1){
			HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 0);
			HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);
			HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, 0);
			HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, 0);
			status = M4;
			count1 = 10;
			count2 = 0;
			setTimer1(1000);	//Timer 1 to countdown the number display on 2 Led.
			setTimer2(10000);	//Timer 2 is the quantity of time machine in mode 2 without increasing time.
			setTimer3(250);		//Timer 3 to set RED Led blinky 2Hz
		}

		//check whether user increases time or not.
		check_button_add_time();

	}
}
