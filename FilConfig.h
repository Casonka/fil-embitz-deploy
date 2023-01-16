    /*!
    *   --------------------------------------------------------------------------
    *                ///Fast Initialization Library Configuration File\\\
    *   --------------------------------------------------------------------------
    *   @author RCR group developers
    *   @date 02/06/2022 - last update version FIL STM32
    *
    */

// Example for register documentation
/*!
*    @brief
*    @arg
*    @arg
*    @arg
*        @attention
*    @return
*/

/*!
*   FIL STM32 Driver
*   @file <FilConfig.h>
*   @note [FIL:Configuration] This file include driver Fast Initialization Library(FIL) for STM32 controllers
*/
#pragma once
#include "main.h"
#include <stdbool.h>
#include "ConfigSelection.h"

/*!
*   @note [FIL:Configuration] Main settings configuration of library kernel
*/
#define FIL_RCC                   __configUSE_RCC
#define FIL_GPIO                  __configUSE_GPIO
#define FIL_TIM                   __configUSE_TIM
#define FIL_USART                 __configUSE_USART
#define FIL_DMA                   __configUSE_DMA
#define FIL_I2C                   __configUSE_I2C
#define FIL_SPI                   __configUSE_SPI
#define FIL_ADC                   __configUSE_ADC
#define FIL_EXTI                  __configUSE_EXTI
#define FIL_RTC                   __configUSE_RTC
#define FIL_Deprecated            __configUSE_DeprecatedFunctions   // !Deprecated

/*!
*   @note [FIL:Configuration] Optional settings configuration of library kernel
*/
#define FIL_CALC_RCC              __configCALC_RCC
#define FIL_CALC_TIM              __configCALC_TIM
#define FIL_CALC_USART            __configCALC_USART
#define CALC_I2C_SCANNING         __configCALC_I2C_SCANNING

/*!
*   Version control
*
*/
#if !defined(STM32F401xx) && !defined(STM32F40_41xxx)
    #error Not supported on another devices
    #pragma message "Supported devices:"
    #pragma message "STM32F407VGT6"
    #pragma message "STM32F401CCU6"
#endif /*Supporting device securing end*/

#if(FIL_RCC == 1)
    #include "RCC.h"
#elif(FIL_RCC > 1 || FIL_RCC < 0)
#error Invalid argument FIL_RCC
#endif /*FIL_RCC*/
#if(FIL_GPIO == 1)
    #include "GPIO.h"
#elif(FIL_GPIO > 1 || FIL_GPIO < 0)
#error Invalid argument FIL_GPIO
#endif /*FIL_GPIO*/
#if(FIL_TIM == 1)
    #include "TIM.h"
#elif(FIL_TIM > 1 || FIL_TIM < 0)
#error Invalid argument FIL_TIM
#endif /*FIL_TIM*/
#if(FIL_USART == 1)
    #include "USART.h"
#elif(FIL_USART > 1 || FIL_USART < 0)
#error Invalid argument FIL_USART
#endif /*FIL_USART*/
#if(FIL_DMA == 1)
    #include "DMA.h"
    #include "DMA_FIFOBuffers.h"
#elif(FIL_DMA > 1 || FIL_DMA < 0)
#error Invalid argument FIL_DMA
#endif /*FIL_DMA*/
#if(FIL_ADC == 1)
    #include "ADC.h"
#elif(FIL_ADC > 1 || FIL_ADC < 0)
#error Invalid argument FIL_ADC
#endif /*FIL_ADC*/
#if(FIL_I2C == 1)
    #include "I2C.h"
#elif(FIL_I2C > 1 || FIL_I2C < 0)
#error Invalid argument FIL_I2C
#endif /*FIL_I2C*/
#if(FIL_SPI == 1)
    #include "SPI.h"
#elif(FIL_SPI > 1 || FIL_SPI < 0)
#error Invalid argument FIL_SPI
#endif /*FIL_SPI*/
#if(FIL_EXTI == 1)
    #include "EXTI.h"
#elif(FIL_EXTI > 1 || FIL_EXTI < 0)
#error Invalid argument FIL_EXTI
#endif /*FIL_EXTI*/
#if(FIL_RTC == 1)
    #include "RTC.h"
#elif(FIL_RTC > 1 || FIL_RTC < 0)
#error Invalid argument FIL_RTC
#endif/*FIL_RTC*/
