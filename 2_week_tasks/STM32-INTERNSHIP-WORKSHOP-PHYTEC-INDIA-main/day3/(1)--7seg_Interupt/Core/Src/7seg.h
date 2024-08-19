/*
 * 7seg.h
 *
 *  Created on: Jul 30, 2024
 *      Author: rathinavel
 */

#ifndef SRC_7SEG_H_
#define SRC_7SEG_H_

void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim6);
void display_number(uint8_t number);

#endif /* SRC_7SEG_H_ */
