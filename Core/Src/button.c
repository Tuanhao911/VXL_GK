/*
 * button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: USER
 */


#include "button.h"
#include "global.h"

int KeyReg0reset = NORMAL_STATE;
int KeyReg1reset = NORMAL_STATE;
int KeyReg2reset = NORMAL_STATE;
int KeyReg3reset = NORMAL_STATE;

int KeyReg0inc = NORMAL_STATE;
int KeyReg1inc = NORMAL_STATE;
int KeyReg2inc = NORMAL_STATE;
int KeyReg3inc = NORMAL_STATE;

int KeyReg0dec = NORMAL_STATE;
int KeyReg1dec = NORMAL_STATE;
int KeyReg2dec = NORMAL_STATE;
int KeyReg3dec = NORMAL_STATE;

int TimeOutForKeyPress = 300;
int reset_flag = 0;
int inc_flag = 0;
int dec_flag = 0;


/*void subKeyProcess(){
	//TODO
//	HAL_GPIO_TogglePin(LED_CHECK_GPIO_Port, LED_CHECK_Pin);

} */

void getKeyDecInput(){
  KeyReg2dec = KeyReg1dec;
  KeyReg1dec = KeyReg0dec;
  KeyReg0dec = HAL_GPIO_ReadPin(dec_GPIO_Port, dec_Pin);
  if ((KeyReg1dec == KeyReg0dec) && (KeyReg1dec == KeyReg2dec)){
	  if (KeyReg3dec != KeyReg2dec) {
		  KeyReg3dec = KeyReg2dec;
		  if (KeyReg2dec == PRESSED_STATE) {
			  dec_flag =1;
		  }
	  }
	  else if (KeyReg2dec == PRESSED_STATE) {
			  TimeOutForKeyPress--;
		  if (TimeOutForKeyPress == 0){
			  TimeOutForKeyPress = 100;
			  dec_flag = 1;
		  }
	  }

  }
}


void getKeyResetInput(){
  KeyReg2reset = KeyReg1reset;
  KeyReg1reset = KeyReg0reset;
  KeyReg0reset = HAL_GPIO_ReadPin(reset_GPIO_Port, reset_Pin);
  if ((KeyReg1reset == KeyReg0reset) && (KeyReg1reset == KeyReg2reset)){
	  if (KeyReg3reset != KeyReg2reset) {
		  KeyReg3reset = KeyReg2reset;
		  if (KeyReg2reset == PRESSED_STATE) {
			  reset_flag =1;
		  }
	  }
	  else if (KeyReg2reset == PRESSED_STATE){
			  TimeOutForKeyPress--;
			  if (TimeOutForKeyPress == 0){
			  reset_flag = 1;
			  TimeOutForKeyPress = 100;
		  }
	  }

  }
  if (KeyReg2reset == NORMAL_STATE && KeyReg2inc == NORMAL_STATE && KeyReg2dec == NORMAL_STATE) {
	  TimeOutForKeyPress = 300;
  }
}

void getKeyIncInput(){
  KeyReg2inc = KeyReg1inc;
  KeyReg1inc = KeyReg0inc;
  KeyReg0inc = HAL_GPIO_ReadPin(inc_GPIO_Port, inc_Pin);
  if ((KeyReg1inc == KeyReg0inc) && (KeyReg1inc == KeyReg2inc)){
	  if (KeyReg3inc != KeyReg2inc) {
		  KeyReg3inc = KeyReg2inc;
		  if (KeyReg2inc == PRESSED_STATE) {
			  inc_flag =1;
		  }
	  }
	  else if (KeyReg2inc == PRESSED_STATE){
			  TimeOutForKeyPress--;
		  if (TimeOutForKeyPress == 0){
			  inc_flag = 1;
			  TimeOutForKeyPress = 100;
		  }
	  }
  }
}




