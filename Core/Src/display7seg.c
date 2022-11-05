/*
 * display7seg.c
 *
 *  Created on: Nov 5, 2022
 *      Author: USER
 */

#include "display7seg.h"
#include "global.h"

void display7SEG(int status) {
	if (status ==0) {
		HAL_GPIO_WritePin ( aa_GPIO_Port , aa_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ab_GPIO_Port , ab_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ac_GPIO_Port , ac_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ad_GPIO_Port , ad_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ae_GPIO_Port , ae_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( af_GPIO_Port , af_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ag_GPIO_Port , ag_Pin ,	  GPIO_PIN_SET );
	}
	else if (status ==1) {
		HAL_GPIO_WritePin ( aa_GPIO_Port , aa_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ab_GPIO_Port , ab_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ac_GPIO_Port , ac_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ad_GPIO_Port , ad_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ae_GPIO_Port , ae_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( af_GPIO_Port , af_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ag_GPIO_Port , ag_Pin ,	  GPIO_PIN_SET );
	}
	else if (status ==2) {
		HAL_GPIO_WritePin ( aa_GPIO_Port , aa_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ab_GPIO_Port , ab_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ac_GPIO_Port , ac_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ad_GPIO_Port , ad_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ae_GPIO_Port , ae_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( af_GPIO_Port , af_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ag_GPIO_Port , ag_Pin ,	  GPIO_PIN_RESET );
	}
	else if (status ==3) {
		HAL_GPIO_WritePin ( aa_GPIO_Port , aa_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ab_GPIO_Port , ab_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ac_GPIO_Port , ac_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ad_GPIO_Port , ad_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ae_GPIO_Port , ae_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( af_GPIO_Port , af_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ag_GPIO_Port , ag_Pin ,	  GPIO_PIN_RESET );
	}
	if (status ==4) {
		HAL_GPIO_WritePin ( aa_GPIO_Port , aa_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ab_GPIO_Port , ab_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ac_GPIO_Port , ac_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ad_GPIO_Port , ad_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ae_GPIO_Port , ae_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( af_GPIO_Port , af_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ag_GPIO_Port , ag_Pin ,	  GPIO_PIN_RESET );
	}
	if (status ==5) {
		HAL_GPIO_WritePin ( aa_GPIO_Port , aa_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ab_GPIO_Port , ab_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ac_GPIO_Port , ac_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ad_GPIO_Port , ad_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ae_GPIO_Port , ae_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( af_GPIO_Port , af_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ag_GPIO_Port , ag_Pin ,	  GPIO_PIN_RESET );
	}
	if (status ==6) {
		HAL_GPIO_WritePin ( aa_GPIO_Port , aa_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ab_GPIO_Port , ab_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ac_GPIO_Port , ac_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ad_GPIO_Port , ad_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ae_GPIO_Port , ae_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( af_GPIO_Port , af_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ag_GPIO_Port , ag_Pin ,	  GPIO_PIN_RESET );
	}
	if (status ==7) {
		HAL_GPIO_WritePin ( aa_GPIO_Port , aa_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ab_GPIO_Port , ab_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ac_GPIO_Port , ac_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ad_GPIO_Port , ad_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ae_GPIO_Port , ae_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( af_GPIO_Port , af_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( ag_GPIO_Port , ag_Pin ,	  GPIO_PIN_SET );
	}
	if (status ==8) {
		HAL_GPIO_WritePin ( aa_GPIO_Port , aa_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ab_GPIO_Port , ab_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ac_GPIO_Port , ac_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ad_GPIO_Port , ad_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ae_GPIO_Port , ae_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( af_GPIO_Port , af_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ag_GPIO_Port , ag_Pin ,	  GPIO_PIN_RESET );
	}
	if (status ==9) {
		HAL_GPIO_WritePin ( aa_GPIO_Port , aa_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ab_GPIO_Port , ab_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ac_GPIO_Port , ac_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ad_GPIO_Port , ad_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ae_GPIO_Port , ae_Pin ,	  GPIO_PIN_SET );
		HAL_GPIO_WritePin ( af_GPIO_Port , af_Pin ,	  GPIO_PIN_RESET );
		HAL_GPIO_WritePin ( ag_GPIO_Port , ag_Pin ,	  GPIO_PIN_RESET );
	}
}
