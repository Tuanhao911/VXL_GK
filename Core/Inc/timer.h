/*
 * timer.h
 *
 *  Created on: Nov 5, 2022
 *      Author: USER
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_


#include "button.h"
#include "global.h"

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;

void setTimer1(int);
void setTimer2(int);
void setTimer3(int);
void timer1_run();
void timer2_run();
void timer3_run();


#endif /* INC_TIMER_H_ */
