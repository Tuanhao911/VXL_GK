/*
 * fsm_button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: USER
 */

#include "fsm_button.h"
#include "global.h"

void fsm_simple_buttons_run (){
	switch(status){

		case num0: //0
			display7SEG(status);
			if (reset_flag ==1) {
				reset_flag = 0;
				status = num0;
			}
			if (inc_flag == 1) {
				inc_flag = 0;
				status = num1;
			}
			if (dec_flag == 1) {
				dec_flag = 0;
				status = num9;
			}
			break;

		case num1: //1
			display7SEG(status);
			if (reset_flag ==1) {
				reset_flag = 0;
				status = num0;
			}
			if (inc_flag == 1) {
				inc_flag = 0;
				status = num2;
			}
			if (dec_flag == 1) {
				dec_flag = 0;
				status = num0;
			}
			break;

		case num2: //2
			display7SEG(status);
			if (reset_flag ==1) {
				reset_flag = 0;
				status = num0;
			}
			if (inc_flag == 1) {
				inc_flag = 0;
				status = num3;
			}
			if (dec_flag == 1) {
				dec_flag = 0;
				status = num1;
			}
			break;

		case num3: //3
			display7SEG(status);
			if (reset_flag ==1) {
				reset_flag = 0;
				status = num0;
			}
			else if (inc_flag == 1) {
				inc_flag = 0;
				status = num4;
			}
			else if (dec_flag == 1) {
				dec_flag = 0;
				status = num2;
			}
			break;

		case num4: //4
			display7SEG(status);
			if (reset_flag ==1) {
				reset_flag = 0;
				status = num0;
			}
			else if (inc_flag == 1) {
				inc_flag = 0;
				status = num5;
			}
			else if (dec_flag == 1) {
				dec_flag = 0;
				status = num3;
			}
			break;

		case num5: //5
			display7SEG(status);
			if (reset_flag ==1) {
				reset_flag = 0;
				status = num0;
			}
			else if (inc_flag == 1) {
				inc_flag = 0;
				status = num6;
			}
			else if (dec_flag == 1) {
				dec_flag = 0;
				status = num4;
			}
			break;

		case num6: //6
			display7SEG(status);
			if (reset_flag ==1) {
				reset_flag = 0;
				status = num0;
			}
			else if (inc_flag == 1) {
				inc_flag = 0;
				status = num7;
			}
			else if (dec_flag == 1) {
				dec_flag = 0;
				status = num5;
			}
			break;

		case num7: //7
			display7SEG(status);
			if (reset_flag ==1) {
				reset_flag = 0;
				status = num0;
			}
			else if (inc_flag == 1) {
				inc_flag = 0;
				status = num8;
			}
			else if (dec_flag == 1) {
				dec_flag = 0;
				status = num6;
			}
			break;

		case num8:
			display7SEG(status);
			if (reset_flag ==1) {
				reset_flag = 0;
				status = num0;
			}
			else if (inc_flag == 1) {
				inc_flag = 0;
				status = num9;
			}
			else if (dec_flag == 1) {
				dec_flag = 0;
				status = num7;
			}
			break;

		case num9:
			display7SEG(status);
			if (reset_flag ==1) {
				reset_flag = 0;
				status = num0;
			}
			else if (inc_flag == 1) {
				inc_flag = 0;
				status = num0;
			}
			else if (dec_flag == 1) {
				dec_flag = 0;
				status = num8;
			}
			break;

		case INIT: //init
			status = num0;
			break;
		default:
			break;
		}
}
