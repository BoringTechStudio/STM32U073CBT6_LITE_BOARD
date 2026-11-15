/**
  ******************************************************************************
  * @file    stm32u0xx_u031_nano_conf_template.h
  * @author  MCD Application Team
  * @brief   STM32U0xx_U031_NANO board configuration file.
  *          This file should be copied to the application folder and renamed
  *          to stm32u0xx_u031_nano_conf.h
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef STM32U0XX_U031_NANO_CONF_H
#define STM32U0XX_U031_NANO_CONF_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32u0xx_hal.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup STM32U0XX_U031_NANO
  * @{
  */

/** @defgroup STM32U0XX_U031_NANO_CONFIG Config
  * @{
  */

/** @defgroup STM32U0XX_U031_NANO_CONFIG_Exported_Constants Exported Constants
  * @{
  */
/* Nucleo pin and part number defines */
#define U031_NANO

/* COM define */
#define USE_COM_LOG                         0U
#define USE_BSP_COM_FEATURE                 0U

/* IRQ priorities */
#define BSP_BUTTON_USER_IT_PRIORITY         15U

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /* STM32U0XX_U031_NANO_CONF_H */
