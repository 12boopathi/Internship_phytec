#include "stm32f4xx_hal.h"

// UART handler declaration
UART_HandleTypeDef huart2;

// Function prototypes
void SystemClock_Config(void);
void MX_GPIO_Init(void);
void MX_USART2_UART_Init(void);

int main(void) {
    // Initialize the HAL Library
    HAL_Init();

    // Configure the system clock
    SystemClock_Config();

    // Initialize all configured peripherals
    MX_GPIO_Init();
    MX_USART2_UART_Init();

    // Transmit data
    char *msg = "Hello, UART!\r\n";
    HAL_UART_Transmit(&huart2, (uint8_t*)msg, strlen(msg), HAL_MAX_DELAY);

    // Receive data
    uint8_t rxData[10];
    HAL_UART_Receive(&huart2, rxData, 10, HAL_MAX_DELAY);

    // Main loop
    while (1) {
    }
}

// UART2 init function
void MX_USART2_UART_Init(void) {
    huart2.Instance = USART2;
    huart2.Init.BaudRate = 115200;
    huart2.Init.WordLength = UART_WORDLENGTH_8B;
    huart2.Init.StopBits = UART_STOPBITS_1;
    huart2.Init.Parity = UART_PARITY_NONE;
    huart2.Init.Mode = UART_MODE_TX_RX;
    huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    huart2.Init.OverSampling = UART_OVERSAMPLING_16;
    if (HAL_UART_Init(&huart2) != HAL_OK) {
        // Initialization Error
        Error_Handler();
    }
}

// System Clock Configuration
void SystemClock_Config(void) {
    // Configure the system clock here
}

// GPIO Initialization
void MX_GPIO_Init(void) {
    // Initialize GPIOs here
}

// Error handler
void Error_Handler(void) {
    while (1) {
        // Stay here
    }
}
