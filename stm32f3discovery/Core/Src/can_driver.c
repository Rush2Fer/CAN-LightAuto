/*
 * can_driver.c
 *
 *  Created on: May 29, 2025
 *      Author: abelk
 */

#include "can_driver.h"
#include <stdint.h>
#include <stdio.h>
#include "can.h"

extern CAN_HandleTypeDef hcan;

#if IS_SENDER == 1

static CAN_TxHeaderTypeDef TxHeader = {
    .StdId = CAN_LIGHT_ID,
    .IDE = CAN_ID_STD,
    .RTR = CAN_RTR_DATA,
    .DLC = 1   // data length: 1 byte
};

static uint32_t TxMailbox;

// Function to send light state via CAN
void CAN_SendSensorState(uint8_t state)
{
    uint8_t TxData[1];
    TxData[0] = state;

    if (HAL_CAN_AddTxMessage(&hcan, &TxHeader, TxData, &TxMailbox) != HAL_OK)
    {
        Error_Handler();
    }
}

#else // RECEIVER

static volatile uint8_t latest_luminosity = 2;

// Configure CAN filter to accept only messages with CAN_STANDARD_ID
void CAN_ConfigFilter(void)
{
    CAN_FilterTypeDef filter;

    filter.FilterBank = 0;
    filter.FilterMode = CAN_FILTERMODE_IDMASK;
    filter.FilterScale = CAN_FILTERSCALE_32BIT;
    filter.FilterFIFOAssignment = CAN_FILTER_FIFO0;
    filter.FilterActivation = ENABLE;
    filter.SlaveStartFilterBank = 14;

    // Filter ID shifted by 5 bits according to CAN standard frame format
    filter.FilterIdHigh = (CAN_LIGHT_ID << 5) & 0xFFFF;
    filter.FilterIdLow = 0x0000;

    // Mask to compare all 11 bits of standard ID
    filter.FilterMaskIdHigh = (0x7FF << 5) & 0xFFFF;  // Match only ID
    filter.FilterMaskIdLow = 0x0000;

    if (HAL_CAN_ConfigFilter(&hcan, &filter) != HAL_OK)
    {
        Error_Handler();
    }
}

// Callback triggered when a CAN message is pending in RX FIFO0
void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcanb)
{
    if (hcanb != &hcan){
    	printf("BAD HCAN");
        return;  // Ignore if not CAN1
    }
    printf("CALLBACK");
    CAN_RxHeaderTypeDef RxHeader;
    uint8_t RxData[8];

    if (HAL_CAN_GetRxMessage(hcanb, CAN_RX_FIFO0, &RxHeader, RxData) == HAL_OK)
    {
        if ((RxHeader.IDE == CAN_ID_STD) && (RxHeader.StdId == CAN_LIGHT_ID))
        {
        	latest_luminosity = RxData[0];
            // Handle LEDs here according to sensor_value
        }
    }
}


uint8_t get_latest_luminosity(void)
{
    return latest_luminosity;
}

#endif
