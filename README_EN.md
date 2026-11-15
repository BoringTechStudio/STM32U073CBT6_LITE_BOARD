# STM32U073CBT6 Directory Guide

English | [简体中文](./README.md)

> **Board**: U0C_LITE
> **MCU**: STM32U073CBT6 (LQFP48 package)

## Board Introduction

### MCU
- STM32U073CBT6, Cortex-M0+, 56 MHz core clock
- 128 KB Flash, 40 KB RAM

### LED & Button
- User LED ×1 (blue, PA0)
- User button ×1 (USER_KEY, PC13)

### Interfaces
- USART1 (TX PA9 / RX PA10)
- USB ×1 (DM PA11 / DP PA12)
- LCD header ×1 (SPI half-duplex driven, color IPS TFT)
- SPI Flash header ×1 (CLK PB13 / CS PB12 / MOSI PB14 / MISO PB15)

## 1. Board-Level Pin Map (HDK/U0C_LITE-PinMap.md)

| Function | Pin | Notes |
|------|------|------|
| LED (blue) | **PA0** | User LED |
| USER_KEY | **PC13** | User button |
| USART1 - TX | **PA9** | AF7 |
| USART1 - RX | **PA10** | AF7 |
| USB - DM / DP | PA11 / PA12 | — |
| SPI_LCD | PB7/PB6/PB4/PB5/PB3 + PA15 | PWR/RST/DC/SDA/SCL + CS |
| SPI_FLASH | PB13/PB12/PB14/PB15 | CLK/CS/MOSI/MISO |

## 2. Top-Level Directory Structure

| Path | Description |
|------|------|
| `HDK/` | Hardware Development Kit |
| `HDK/U0C_LITE-Schematic.pdf` | Board schematic |
| `HDK/U0C_LITE-PinMap.md` | Board-level pin map |
| `HDK/Altium-Designer-Libraries/U0C_LITE.PcbLib` | Altium Designer PCB footprint library |
| `HDK/Altium-Designer-Libraries/U0C_LITE.SchLib` | Altium Designer schematic symbol library |
| `HDK/Assembly-Drawing/` | Assembly drawing (Assembly-Top / Assembly-Bottom) |
| `HDK/Mechanical/` | Mechanical dimension drawings |
| `SDK/Examples/` | Official example library (adapted to U0C_LITE, 28 projects) |
| `SDK/LED/` | Standalone project: LED reference |
| `SDK/SPI_LCD_1.47inch/` | Standalone project: 1.47" SPI LCD (ST7789) |
| `SDK/SPI_FLASH/` | Standalone project: SPI flash read/write (W25Q + SFUD driver, SPI2) |
| `STM32_CubeMX_Keil_快速上手.md` | CubeMX/Keil quick-start guide (Chinese) |
| `README.md` | This document (Simplified Chinese) |
| `README_EN.md` | English version of this document |

## 3. Examples Library (28 in total)

| Category | Example |
|------|----------|
| ADC | ADC_SingleConversion_TriggerSW_IT |
| ADC | ADC_SingleConversion_TriggerTimer_DMA |
| COMP | COMP_CompareGpioVsVrefInt_IT |
| COMP | COMP_CompareGpioVsVrefInt_OutputGpio |
| CORTEXM | CORTEXM_SysTick |
| CRC | CRC_Example |
| DAC | DAC_SignalsGeneration |
| DMA | DMA_FLASHToRAM |
| FLASH | FLASH_FastProgram |
| GPIO | GPIO_EXTI |
| GPIO | GPIO_IOToggle |
| I2C | I2C_TwoBoards_ComIT |
| IWDG | IWDG_WindowMode |
| PWR | PWR_ModesSelection |
| PWR | PWR_SHUTDOWN |
| PWR | PWR_STOP2_RTC |
| RCC | RCC_LSEConfig |
| RCC | RCC_SwitchClock |
| RNG | RNG_Config |
| RTC | RTC_Alarm |
| TIM | TIM_ExtTriggerSynchro |
| TIM | TIM_PWMInput |
| TIM | TIM_PWMOutput |
| TIM | TIM_TimeBase |
| UART | LPUART_TwoBoards_ComIT |
| UART | LPUART_WakeUpFromStop |
| UART | UART_AutoBaudrate_Detection |
| UART | UART_HyperTerminal_IT |

> Category count: ADC(2), COMP(2), CORTEXM(1), CRC(1), DAC(1), DMA(1), FLASH(1), GPIO(2), I2C(1), IWDG(1), PWR(3), RCC(2), RNG(1), RTC(1), TIM(4), UART(4)
