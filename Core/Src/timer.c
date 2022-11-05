/*
 * timer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: USER
 */

#include "timer.h"
#include"global.h"

int TIMER_CYCLE = 10;
int timer1_flag = 0;
int timer1_counter = 0;
void setTimer1(int duration){
	timer1_flag = 0;
	timer1_counter = duration/TIMER_CYCLE;
}


void timer1_run(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter == 0) {
		timer1_flag = 1; }
	}
}
