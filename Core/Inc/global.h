/*
 * global.h
 *
 *  Created on: Nov 13, 2022
 *      Author: admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
#include "software_timer.h"
#include "input_reading.h"
#include "main.h"

#define INIT	0

#define M1_RED_GREEN		11
#define M1_RED_YELLOW		12
#define M1_GREEN_RED		13
#define M1_YELLOW_RED		14

#define M2					20
#define M3					30
#define M4					40

extern int count1;
extern int count2;
extern int status;
extern int Pedes_press;
#endif /* INC_GLOBAL_H_ */
