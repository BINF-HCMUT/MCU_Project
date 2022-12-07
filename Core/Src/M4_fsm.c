/*
 * M4_fsm.c
 *
 *  Created on: Nov 14, 2022
 *      Author: admin
 */


#include "M4_fsm.h"

void M4_fsm_run(){
	if(status == M4){

		//Blinky RED Led in 2Hz
		if(timer3_flag == 1){
			//blinky all GREEN Led
			HAL_GPIO_TogglePin(B1_GPIO_Port, B1_Pin);
			HAL_GPIO_TogglePin(B2_GPIO_Port, B2_Pin);
			setTimer3(250);
		}

		//count down the number display on 7-seg LED
		if(timer1_flag == 1){
			count1--;
			setTimer1(1000);
		}

		//Switch to M1 mode
		if(is_button_pressed(1)||timer2_flag == 1){
			status = M1_RED_GREEN;
			count1 = 25;
			setTimer1(1000);	//Timer 1 to countdown the number display on 2 Led.
			setTimer2(25000);	//Timer 2 is the quantity of time machine in mode 1
			setTimer3(0);
		}

		//check whether user increases time or not.
		check_button_add_time();

	}
}
