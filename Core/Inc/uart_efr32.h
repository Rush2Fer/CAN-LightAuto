/*
 * uart_efr32.h
 *
 *  Created on: May 28, 2025
 *      Author: abelk
 */

#ifndef INC_UART_EFR32_H_
#define INC_UART_EFR32_H_
#include <stdint.h>

// Starts UART reception from the EFR32 (using interrupts or DMA)
void uart_efr32_start_reception(void);

// Returns the last received ambient light value
uint8_t uart_efr32_get_luminosity(void);

typedef enum {
	SENSOR_ERR = 0x0A,       // '/n'
    LIGHT_VERY_LOW = 0x30,  // '0'
    LIGHT_LOW      = 0x31,  // '1'
    LIGHT_NORMAL   = 0x32   // '2'
} LightLevel;


#endif /* INC_UART_EFR32_H_ */
