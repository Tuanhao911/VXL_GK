/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: USER
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "global.h"
#include "display7seg.h"
#include "fsm_button.h"
#include "main.h"

#define NORMAL_STATE SET
#define PRESSED_STATE RESET
#define NORMAL_DEC SET
#define PRESSED_DEC RESET
extern int reset_flag;
extern int inc_flag;
extern int dec_flag;

void getKeyResetInput();
void getKeyIncInput();
void getKeyDecInput();


#endif /* INC_BUTTON_H_ */
