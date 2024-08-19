#include "delay.h"

// Define the interval in milliseconds
#define TOGGLE_INTERVAL 1500

// Global variable to keep track of the elapsed time
volatile uint32_t tickCount = 0;

void SysTick_Init(void) {
    // Configure SysTick to generate an interrupt every 1 ms
    uint32_t ticks = SystemCoreClock / 1000; // Number of ticks per millisecond
    if (SysTick_Config(ticks)) {
        // Initialization Error
        while (1);
    }
}

void SysTick_Handler(void) {
    tickCount++;
    if (tickCount >= TOGGLE_INTERVAL) {
        tickCount = 0;
        // Perform the task every TOGGLE_INTERVAL milliseconds
        // This is where you toggle the LED or perform other tasks
        HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5); // Example: Toggle LED on PA5
    }
}
