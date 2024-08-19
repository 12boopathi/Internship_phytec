#include "main.h"
#include<stdio.h>

/* Private define ------------------------------------------------------------*/
#define ROWS 4
#define COLS 3

/* Keypad mapping */
const char keypad[ROWS][COLS] = {
    {'1', '2', '3'},
    {'4', '5', '6'},
    {'7', '8', '9'},
    {'*', '0', '#'}
};

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);
void Keypad_Scan(void);
void display_number(char number);
int _write(int file, char *data, int len);

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart2;

/* Main function -------------------------------------------------------------*/
int main(void)
{
    /* Initialize the HAL Library */
    HAL_Init();

    /* Configure the system clock */
    SystemClock_Config();

    /* Initialize all configured peripherals */
    MX_GPIO_Init();
    MX_USART2_UART_Init();

    while (1)
    {
        Keypad_Scan();
        HAL_Delay(100); // Debounce delay
    }
}

/* Keypad scanning function ------------------------------------------------*/
void Keypad_Scan(void)
{
    for (int row = 0; row < ROWS; row++)
    {
        // Set the current row high
        HAL_GPIO_WritePin(GPIOB, (1 << row), GPIO_PIN_SET);

        // Check each column
        for (int col = 0; col < COLS; col++)
        {
            if (HAL_GPIO_ReadPin(GPIOB, (1 << (col + 4))))
            {
                // Key is pressed, print it
                char key = keypad[row][col];
                printf("%c\n", key);   // Ensure this is redirected to UART
                ITM_SendChar(key); 	// Ensure SWV is configured correctly
                display_number(key);
            }
        }

        // Set the current row low
        HAL_GPIO_WritePin(GPIOB, (1 << row), GPIO_PIN_RESET);
    }
}

void display_number(char number) {
    switch (number) {
        case '0':
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);
            break;
        case '1':
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);
            break;
        case '2':
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case '3':
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case '4':
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case '5':
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case '6':
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case '7':
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, SET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, SET);
            break;
        case '8':
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_3, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_4, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_5, RESET);
            HAL_GPIO_WritePin(GPIOC, GPIO_PIN_6, RESET);
            break;
        case '9':
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

/* GPIO Initialization Function ----------------------------------------------*/
static void MX_GPIO_Init(void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};

    /* GPIO Ports Clock Enable */
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOB_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();

    /*Configure GPIO pins : PB0 PB1 PB2 PB3 (Rows)*/
    GPIO_InitStruct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /*Configure GPIO pins : PB4 PB5 PB6 (Columns)*/
    GPIO_InitStruct.Pin = GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6;
    GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
    GPIO_InitStruct.Pull = GPIO_PULLDOWN;   // Ensure pull-down to avoid floating state
    HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

    /*Configure GPIO pins : PC0 PC1 PC2 PC3 PC4 PC5 PC6 (7-segment display)*/
    GPIO_InitStruct.Pin = GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3 | GPIO_PIN_4 | GPIO_PIN_5 | GPIO_PIN_6;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);
}

/* USART2 Initialization Function -------------------------------------------*/
static void MX_USART2_UART_Init(void)
{
    huart2.Instance = USART2;
    huart2.Init.BaudRate = 115200;
    huart2.Init.WordLength = UART_WORDLENGTH_8B;
    huart2.Init.StopBits = UART_STOPBITS_1;
    huart2.Init.Parity = UART_PARITY_NONE;
    huart2.Init.Mode = UART_MODE_TX_RX;
    huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
    huart2.Init.OverSampling = UART_OVERSAMPLING_16;
    if (HAL_UART_Init(&huart2) != HAL_OK)
    {
        Error_Handler();
    }
}

/* System Clock Configuration ------------------------------------------------*/
void SystemClock_Config(void)
{
    RCC_OscInitTypeDef RCC_OscInitStruct = {0};
    RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

    /* Configure the main internal regulator output voltage */
    __HAL_RCC_PWR_CLK_ENABLE();
    __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

    /* Initializes the RCC Oscillators according to the specified parameters in the RCC_OscInitTypeDef structure. */
    RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
    RCC_OscInitStruct.HSIState = RCC_HSI_ON;
    RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
    RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
    RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
    RCC_OscInitStruct.PLL.PLLM = 16;
    RCC_OscInitStruct.PLL.PLLN = 336;
    RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
    RCC_OscInitStruct.PLL.PLLQ = 4;
    if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
    {
        Error_Handler();
    }

    /* Initializes the CPU, AHB and APB buses clocks */
    RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK|RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
    RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
    RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
    RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
    RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

    if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
    {
        Error_Handler();
    }
}

/* Error Handler -------------------------------------------------------------*/
void Error_Handler(void)
{
    __disable_irq();
    while (1)
    {
    }
}

/* Implement _write to redirect printf to UART */
int _write(int file, char *data, int len) {
    HAL_UART_Transmit(&huart2, (uint8_t*)data, len, HAL_MAX_DELAY);
    return len;
}
