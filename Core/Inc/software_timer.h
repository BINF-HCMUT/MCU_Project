/*
 * software_timer.h
 *
 *  Created on: Nov 13, 2022
 *      Author: admin
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;

void adding_time(int extra_time);
void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void timerRun();


#endif /* INC_SOFTWARE_TIMER_H_ */
