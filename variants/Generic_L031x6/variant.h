/*
 *******************************************************************************
 * Copyright (c) 2017, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

//                  | DIGITAL | ANALOG | USART      | TWI       | SPI        | SPECIAL   |
//                  |---------|--------|------------|-----------|------------|-----------|
#define PA0  0   // | 0       | A0     | USART2_CTS |           |            |           |
#define PA1  1   // | 1       | A1     | USART2_RTS |           |            |           |
#define PA2  2   // | 2       | A2     | UART1/2_TX |           |            |           |
#define PA3  3   // | 2       | A3     | UART1/2_RX |           |            |           |
#define PA4  4   // | 4       | A4     | USART2_CK  |           | SPI1_SS    |           |
#define PA5  5   // | 5       | A5     |            |           | SPI1_SCK   |           |
#define PA6  6   // | 6       | A6     | LPUART1_CTS|           | SPI1_MISO  |           |
#define PA7  7   // | 7       | A7     | USART2_CTS |           | SPI1_MOSI  |           |
#define PA8  8   // | 8       |        |            |           |            |           |
#define PA9  9   // | 9       |        | USART2_TX  | TWI1_SCL  |            |           |
#define PA10 10  // | 10      |        | USART2_RX  | TWI1_SDA  |            |           |
#define PA11 11  // | 11      |        | USART2_CTS |           | SPI1_MISO  |           |
#define PA12 12  // | 12      |        | USART2_RTS |           | SPI1_MOSI  |           |
#define PA13 13  // | 13      |        | LPUART1_RX |           |            | SWD_SWDIO |
#define PA14 14  // | 14      |        | UART1/2_TX |           |            | SWD_SWCLK |
#define PA15 15  // | 15      |        | USART2_RX  |           | SPI1_SS    |           |
//                  |---------|--------|------------|-----------|------------|-----------|
#define PB0  16  // | 16      | A8     | USART2_RTS |           | SPI1_MISO  |           |
#define PB1  17  // | 17      | A9     | LPUART1_RTS|           | SPI1_MOSI  |           |
#define PB2  18  // | 18      |        |            |           |            | BOOT1???     |
#define PB3  19  // | 19      |        |            |           | SPI1_SCK   |           |
#define PB4  20  // | 20      |        |            |           | SPI1_MISO  |           |
#define PB5  21  // | 21      |        |            |           | SPI1_MOSI  |           |
#define PB6  22  // | 22      |        | USART2_TX  | TWI1_SCL  |            |           |
#define PB7  23  // | 23      |        | USART2_RX  | TWI1_SDA  |            |           |
#define PB8  24  // | 24      |        |            | TWI1_SCL  |            |           |
#define PB9  25  // | 25      |        |            | TWI1_SDA  |            |           |
#define PB10 26  // | 26      |        | LPUART1_TX |           |            |           |
#define PB11 27  // | 27      |        | LPUART1_RX |           |            |           |
#define PB12 28  // | 28      |        |            |           | SPI1_SS    |           |
#define PB13 29  // | 29      |        | LPUART1_CTS|           | SPI1_SCK   |           |
#define PB14 30  // | 30      |        | LPUART1_RTS|           | SPI1_MISO  | RTC_OUT   |
#define PB15 31  // | 31      |        |            |           | SPI1_MOSI  | RTC_REFIN |
//                  |---------|--------|------------|-----------|------------|-----------|
#define PC0  32  // | 32      |        | LPUART1_RX |           |            |           |
#define PC13 33  // | 33      |        |            |           |            | TAMP1     |
#define PC14 34  // | 34      |        |            |           |            | OSC32_IN  |
#define PC15 35  // | 35      |        |            |           |            | OSC32_OUT |
//                  |---------|--------|------------|-----------|------------|-----------|
#define PH0  36  // | 36      |        |            |           |            | OSC_IN    |
#define PH1  37  // | 37      |        |            |           |            | OSC_OUT   |
//                  |---------|--------|------------|-----------|------------|-----------|


// This must be a literal
#define NUM_DIGITAL_PINS        38
#define NUM_ANALOG_INPUTS       10

// On-board LED pin number
#define LED_BUILTIN             NC
#define LED_GREEN               LED_BUILTIN

// SPI Definitions
#define PIN_SPI_SS              PA4
#define PIN_SPI_MOSI            PA7
#define PIN_SPI_MISO            PA6
#define PIN_SPI_SCK             PA5

// I2C Definitions
#define PIN_WIRE_SDA            PB7
#define PIN_WIRE_SCL            PB6

//Timer Definitions
#define TIMER_TONE              TIM2
#define TIMER_SERVO             TIM21

// UART Definitions
#define SERIAL_UART_INSTANCE    2 //ex: 2 for Serial2 (USART2)
// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           PA_10
#define PIN_SERIAL_TX           PA_9

#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #define SERIAL_PORT_MONITOR     Serial
  #define SERIAL_PORT_HARDWARE    Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
