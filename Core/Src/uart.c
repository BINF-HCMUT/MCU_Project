/*
 * uart.c
 *
 *  Created on: Dec 7, 2022
 *      Author: admin
 */


#include "uart.h"
#include <stdio.h>
char str[50];
void transmitdata(){
	if(status == M1_RED_GREEN){
		HAL_UART_Transmit(&huart2,(void*)str,sprintf(str,"!7SEG:%d#",count1+5),1000);
	}
	else{
		HAL_UART_Transmit(&huart2,(void*)str,sprintf(str,"!7SEG:%d#",count1),1000);
	}
}
