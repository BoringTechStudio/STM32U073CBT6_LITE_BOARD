# STM32U073CBT6 目录说明

简体中文 | [English](./README_EN.md)

> **开发板**：U0C_LITE
> **主控**：STM32U073CBT6（LQFP48 封装）

## 板卡介绍

### 主控
- STM32U073CBT6，Cortex-M0+，56MHz 主频
- 128K Bytes Flash，40K Bytes RAM

### LED & 按键
- 用户 LED ×1（蓝色，PA0）
- 用户按键 ×1（USER_KEY，PC13）

### 接口
- 串口 USART1（TX PA9 / RX PA10）
- USB 接口 ×1（DM PA11 / DP PA12）
- LCD 接口 ×1（SPI 半双工驱动，彩色 IPS TFT）
- SPI Flash 接口 ×1（CLK PB13 / CS PB12 / MOSI PB14 / MISO PB15）

## 一、板级引脚映射（HDK/U0C_LITE-PinMap.md）

| 功能 | 引脚 | 说明 |
|------|------|------|
| LED（蓝） | **PA0** | 用户 LED |
| USER_KEY | **PC13** | 用户按键 |
| USART1 - TX | **PA9** | AF7 |
| USART1 - RX | **PA10** | AF7 |
| USB - DM / DP | PA11 / PA12 | — |
| SPI_LCD | PB7/PB6/PB4/PB5/PB3 + PA15 | PWR/RST/DC/SDA/SCL + CS |
| SPI_FLASH | PB13/PB12/PB14/PB15 | CLK/CS/MOSI/MISO |

## 二、顶层目录结构

| 路径 | 说明 |
|------|------|
| `HDK/` | 硬件开发套件（Hardware Development Kit） |
| `HDK/U0C_LITE-Schematic.pdf` | 核心板原理图 |
| `HDK/U0C_LITE-PinMap.md` | 板级引脚映射 |
| `HDK/Altium-Designer-Libraries/U0C_LITE.PcbLib` | Altium Designer PCB 封装库 |
| `HDK/Altium-Designer-Libraries/U0C_LITE.SchLib` | Altium Designer 原理图符号库 |
| `HDK/Assembly-Drawing/` | 装配位号图（Assembly-Top / Assembly-Bottom） |
| `HDK/Mechanical/` | 机械尺寸图 |
| `SDK/Examples/` | 官方例程库（已适配 U0C_LITE，28 个工程） |
| `SDK/LED/` | 独立工程：LED 参考工程 |
| `SDK/SPI_LCD_1.47inch/` | 独立工程：1.47 寸 SPI LCD（ST7789） |
| `SDK/SPI_FLASH/` | 独立工程：SPI Flash 读写（W25Q + SFUD 驱动，SPI2） |
| `STM32_CubeMX_Keil_快速上手.md` | CubeMX/Keil 快速上手文档 |
| `README.md` | 本说明文档（简体中文） |
| `README_EN.md` | 英文说明文档 |

## 三、Examples 例程库（共 28 个）

| 分类 | 例程名称 |
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

> 分类统计：ADC(2)、COMP(2)、CORTEXM(1)、CRC(1)、DAC(1)、DMA(1)、FLASH(1)、GPIO(2)、I2C(1)、IWDG(1)、PWR(3)、RCC(2)、RNG(1)、RTC(1)、TIM(4)、UART(4)
