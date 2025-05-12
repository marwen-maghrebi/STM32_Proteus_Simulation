/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define R4_Pin GPIO_PIN_13
#define R4_GPIO_Port GPIOC
#define J4_Pin GPIO_PIN_14
#define J4_GPIO_Port GPIOC
#define V4_Pin GPIO_PIN_15
#define V4_GPIO_Port GPIOC
#define J1_Pin GPIO_PIN_1
#define J1_GPIO_Port GPIOB
#define V1_Pin GPIO_PIN_2
#define V1_GPIO_Port GPIOB
#define JG2_Pin GPIO_PIN_10
#define JG2_GPIO_Port GPIOB
#define VG2_Pin GPIO_PIN_11
#define VG2_GPIO_Port GPIOB
#define R3_Pin GPIO_PIN_12
#define R3_GPIO_Port GPIOB
#define J3_Pin GPIO_PIN_13
#define J3_GPIO_Port GPIOB
#define V3_Pin GPIO_PIN_14
#define V3_GPIO_Port GPIOB
#define R1_Pin GPIO_PIN_15
#define R1_GPIO_Port GPIOB
#define RG1_Pin GPIO_PIN_3
#define RG1_GPIO_Port GPIOB
#define JG1_Pin GPIO_PIN_4
#define JG1_GPIO_Port GPIOB
#define VG1_Pin GPIO_PIN_5
#define VG1_GPIO_Port GPIOB
#define R2_Pin GPIO_PIN_6
#define R2_GPIO_Port GPIOB
#define J2_Pin GPIO_PIN_7
#define J2_GPIO_Port GPIOB
#define V2_Pin GPIO_PIN_8
#define V2_GPIO_Port GPIOB
#define RG2_Pin GPIO_PIN_9
#define RG2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
