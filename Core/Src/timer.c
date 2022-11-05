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
int timer2_flag = 0;
int timer2_counter = 0;
int timer3_flag = 0;
int timer3_counter = 0;
void setTimer1(int duration){
	timer1_flag = 0;
	timer1_counter = duration/TIMER_CYCLE;
}

void setTimer2(int duration){
	timer2_flag = 0;
	timer2_counter = duration/TIMER_CYCLE;
}

void setTimer3(int duration){
	timer3_flag = 0;
	timer3_counter = duration/TIMER_CYCLE;
}

void timer1_run(){
	if(timer1_counter > 0){
		timer1_counter--;
		if(timer1_counter == 0) {
		timer1_flag = 1; }
	}
}

void timer2_run(){
	if ((KeyReg0reset == NORMAL_STATE) && (KeyReg0inc == NORMAL_STATE) && (KeyReg0dec == NORMAL_STATE)) {
	if(timer2_counter > 0){
		timer2_counter--;
		if(timer2_counter <= 0) {
			timer2_flag = 1;
				}
	}
	}
	else {
		setTimer2(9000);
		}

}

void timer3_run(){

	if (timer2_flag == 1) {

		if(timer3_counter > 0){
			timer3_counter--;
			if(timer3_counter == 0) {
			timer3_flag = 1; }
		}

	}

}

