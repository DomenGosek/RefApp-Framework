/*---------------------------------------------------------------------------
 * Copyright (c) 2023 Arm Limited (or its affiliates).
 * All rights reserved.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *---------------------------------------------------------------------------*/

#ifndef NUCLEO_H563ZI_H_
#define NUCLEO_H563ZI_H_

#include "stm32h5xx_hal.h"
#include "GPIO_STM32H5xx.h"
#include "Driver_I2C.h"
#include "Driver_SPI.h"
#include "Driver_USART.h"

// NUCLEO-H563ZI Arduino Connector Pin Defintions
#define ARDUINO_UNO_D0  GPIO_PORTB(7U)  /* LPUART1: RX */
#define ARDUINO_UNO_D1  GPIO_PORTB(6U)  /* LPUART1: TX */
#define ARDUINO_UNO_D2  GPIO_PORTG(14U)
#define ARDUINO_UNO_D3  GPIO_PORTE(13U)
#define ARDUINO_UNO_D4  GPIO_PORTE(14U)
#define ARDUINO_UNO_D5  GPIO_PORTE(11U)
#define ARDUINO_UNO_D6  GPIO_PORTE(9U)
#define ARDUINO_UNO_D7  GPIO_PORTG(12U)
#define ARDUINO_UNO_D8  GPIO_PORTF(3U)
#define ARDUINO_UNO_D9  GPIO_PORTD(15U)
#define ARDUINO_UNO_D10 GPIO_PORTD(14U)
#define ARDUINO_UNO_D11 GPIO_PORTB(5U) /* SPI1: MOSI */
#define ARDUINO_UNO_D12 GPIO_PORTG(9U) /* SPI1: MISO */
#define ARDUINO_UNO_D13 GPIO_PORTA(5U) /* SPI1: SCK  */
#define ARDUINO_UNO_D14 GPIO_PORTA(6U)
#define ARDUINO_UNO_D15 GPIO_PORTC(0U)
#define ARDUINO_UNO_D16 GPIO_PORTC(3U)
#define ARDUINO_UNO_D17 GPIO_PORTB(1U)
#define ARDUINO_UNO_D18 GPIO_PORTC(2U)
#define ARDUINO_UNO_D19 GPIO_PORTF(11U)
#define ARDUINO_UNO_D20 GPIO_PORTB(9U)  /* I2C1: SDA  */
#define ARDUINO_UNO_D21 GPIO_PORTB(8U)  /* I2C1: SCL  */

// NUCLEO-H563ZI Arduino CMSIS Driver instances
#define ARDUINO_UNO_I2C     1
#define ARDUINO_UNO_SPI     1
#define ARDUINO_UNO_UART    13

// CMSIS Drivers
//extern ARM_DRIVER_I2C   Driver_I2C1;
extern ARM_DRIVER_SPI   Driver_SPI1;
extern ARM_DRIVER_USART Driver_USART13;

#endif /* NUCLEO_H563ZI_H_ */
