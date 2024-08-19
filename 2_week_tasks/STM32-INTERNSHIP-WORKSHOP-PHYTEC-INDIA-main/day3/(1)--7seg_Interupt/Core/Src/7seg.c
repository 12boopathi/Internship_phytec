/*
 * 7seg.c
 *
 *  Created on: Jul 30, 2024
 *      Author: rathinavel
 */

#include "main.h"

volatile uint8_t current_number = 0;

void display_number(uint8_t number) {
    switch (number) {
        case 0:
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);
            printf("0\n");
            break;
        case 1:
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);
            break;
        case 2:
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case 3:
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case 4:
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case 5:
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case 6:
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case 7:
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);
            break;
        case 8:
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case 9:
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
    }
}


void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim6) {
    if (htim6->Instance == TIM6) {  // Replace TIMx with your specific timer
        display_number(current_number);
        current_number = (current_number + 1)%10;  // Increment and wrap around
    }
}




