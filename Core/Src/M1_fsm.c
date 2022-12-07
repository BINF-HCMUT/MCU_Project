/*
 * M1_fsm.c
 *
 *  Created on: Nov 13, 2022
 *      Author: admin
 */



#include"M1_fsm.h"
#include"Pedestrian_Buzzer.h"
void changeToM2(){
	HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 0);
	HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);
	HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, 0);
	HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, 0);

	// Turn off the Pedestrian led and Buzzer
	Pedes_press = 0;
	resetBuzzer();
	HAL_GPIO_WritePin(PEDES_R_GPIO_Port, PEDES_R_Pin, 0);
	HAL_GPIO_WritePin(PEDES_G_GPIO_Port, PEDES_G_Pin, 0);


	status = M2;
	count1 = 10;
	count2 = 0;
	setTimer1(1000);	//Timer 1 to countdown the number display on 2 Led.
	setTimer2(10000);	//Timer 2 is the quantity of time machine in mode 2 without increasing time.
	setTimer3(250);		//Timer 3 to set RED Led blinky 2Hz
}

void M1_fsm_run(){
	switch(status){
	case INIT:
		count1 = 25;
		count2 = 0;
		status = M1_RED_GREEN;
		setTimer1(1000);	//timer 1 to countdown the number display on LED
		setTimer2(25000);	//timer 2 to perform 2 traffic light
		break;
	case M1_RED_GREEN:
		//TODO
		//Write pin for first traffic light:	RED
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 1);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);

		//Write pin for second traffic light:	GREEN
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, 0);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, 1);


		if(timer1_flag == 1){
			setTimer1(1000);
			count1--;
		}

		if(timer2_flag == 1){
			status = M1_RED_YELLOW;
			count1 = 5;
			setTimer1(1000);
			setTimer2(5000);
		}
		//Switch to Mode 2
		if(is_button_pressed(1)){
			changeToM2();
		}
		//check whether user increases time or not.
		check_button_add_time();
		break;
	case M1_RED_YELLOW:
		//TODO
		//Write pin for first traffic light:	RED
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 1);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 0);

		//Write pin for second traffic light:	YELLOW
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, 1);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, 1);


		if(timer1_flag == 1){
			setTimer1(1000);
			count1--;
		}

		if(timer2_flag == 1){
			status = M1_GREEN_RED;
			count1 = 25;
			setTimer1(1000);
			setTimer2(25000);
		}

		//Switch to Mode 2
		if(is_button_pressed(1)){
			changeToM2();
		}
		//check whether user increases time or not.
		check_button_add_time();
		break;
	case M1_GREEN_RED:
		//TODO
		//Write pin for first traffic light:	GREEN
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 0);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 1);

		//Write pin for second traffic light:	RED
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, 1);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, 0);


		if(timer1_flag == 1){
			setTimer1(1000);
			count1--;
		}

		if(timer2_flag == 1){
			status = M1_YELLOW_RED;
			count1 = 5;
			setTimer1(1000);
			setTimer2(5000);
		}

		//Switch to Mode 2
		if(is_button_pressed(1)){
			changeToM2();
		}
		//check whether user increases time or not.
		check_button_add_time();
		break;
	case M1_YELLOW_RED:
		//TODO
		//Write pin for first traffic light:	YELLOW
		HAL_GPIO_WritePin(A1_GPIO_Port, A1_Pin, 1);
		HAL_GPIO_WritePin(B1_GPIO_Port, B1_Pin, 1);

		//Write pin for second traffic light:	RED
		HAL_GPIO_WritePin(A2_GPIO_Port, A2_Pin, 1);
		HAL_GPIO_WritePin(B2_GPIO_Port, B2_Pin, 0);


		if(timer1_flag == 1){
			setTimer1(1000);
			count1--;
		}
		if(timer2_flag == 1){
			status = M1_RED_GREEN;
			count1 = 25;
			setTimer1(1000);
			setTimer2(25000);
		}

		//Switch to Mode 2
		if(is_button_pressed(1)){
			changeToM2();
		}
		//check whether user increases time or not.
		check_button_add_time();
		break;
	default:
		break;
	}
}
