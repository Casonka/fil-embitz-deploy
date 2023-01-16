#pragma once

    /*!
    *   --------------------------------------------------------------------------
    *                ///Fast Initialization Library Demo Configuration File\\\
    *   --------------------------------------------------------------------------
    *   @author Resource center or robotics group developers
    *   @date 02/06/2022 - last update version FIL STM32
    *
    */
/* [include] Core library files and pin mapping */
#include "FilConfig.h"
#include "DemoPinMap.h"

/*! General settings */
#define __configUSE_RCC                   1
#define __configUSE_GPIO                  1
#define __configUSE_TIM                   1
#define __configUSE_USART                 0
#define __configUSE_DMA                   0
#define __configUSE_I2C                   0
#define __configUSE_SPI                   0
#define __configUSE_ADC                   0
#define __configUSE_EXTI                  0
#define __configUSE_RTC                   0
#define __configUSE_FREERTOS              0

/*! Optional settings */
#define __configCALC_RCC                  1
#define __configCALC_TIM                  1
#define __configCALC_USART                0
#define __configCALC_I2C_SCANNING         0

/*! Place for new optional settings */


/*! Configuration performers list */

/*!
*   @note This place for your configuration. Insert new commands.
*/
#define Board_Config {\
                    SetGPIOC;\
                    InitPeriph;\
                    SysTick_Config(84000);\
                    \
                    }


/*!
*   @note Macro for pin configuration. Insert macro GpioPinConf.
*/
#define InitPeriph {\
        GPIOConfPin(LED_PIN, GENERAL, PUSH_PULL, FAST_S, NO_PULL_UP);}
