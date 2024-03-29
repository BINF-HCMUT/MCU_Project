/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PEDES_Button_Pin GPIO_PIN_0
#define PEDES_Button_GPIO_Port GPIOA
#define Button1_Pin GPIO_PIN_1
#define Button1_GPIO_Port GPIOA
#define Button2_Pin GPIO_PIN_4
#define Button2_GPIO_Port GPIOA
#define Button3_Pin GPIO_PIN_0
#define Button3_GPIO_Port GPIOB
#define PEDES_R_Pin GPIO_PIN_10
#define PEDES_R_GPIO_Port GPIOB
#define PEDES_G_Pin GPIO_PIN_8
#define PEDES_G_GPIO_Port GPIOA
#define A1_Pin GPIO_PIN_10
#define A1_GPIO_Port GPIOA
#define B1_Pin GPIO_PIN_3
#define B1_GPIO_Port GPIOB
#define B2_Pin GPIO_PIN_4
#define B2_GPIO_Port GPIOB
#define A2_Pin GPIO_PIN_5
#define A2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
extern TIM_HandleTypeDef htim2;
extern TIM_HandleTypeDef htim3;
extern UART_HandleTypeDef huart2;
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
