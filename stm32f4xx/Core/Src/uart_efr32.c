/*
 * uart_efr32.c
 *
 *  Created on: May 28, 2025
 *      Author: abelk
 */

#include "uart_efr32.h"
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include "usart.h"

static uint8_t rx_byte;
static volatile LightLevel luminosity_value = SENSOR_ERR;

void uart_efr32_start_reception(void)
{
	printf("INIT UART1 WITH FIRST IRQ\n\r");
    HAL_UART_Receive_IT(&huart1, &rx_byte, 1);
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
    if (huart->Instance == USART1)
    {
		switch(rx_byte){
			case LIGHT_VERY_LOW:
			case LIGHT_LOW:
			case LIGHT_NORMAL:
				luminosity_value=(LightLevel)(rx_byte-'0');
				break;
			default: // Includes SENSOR_ERR
				break;
		}
        HAL_UART_Receive_IT(huart, &rx_byte, 1);

    }
}

LightLevel uart_efr32_get_luminosity(void)
{
    return luminosity_value;
}
