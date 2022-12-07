/*
 * add_time.c
 *
 *  Created on: Dec 2, 2022
 *      Author: admin
 */


#include "add_time.h"

void check_button_add_time(){
	if(is_button_pressed(2)){
		count2 += 100;
	}
	if(is_button_pressed(3)){
		adding_time(count2);
		count1 = count1 + count2/100;
		count2 = 0;
	}
}
