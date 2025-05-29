/*
 * can_driver.h
 *
 *  Created on: May 29, 2025
 *      Author: abelk
 */

#ifndef INC_CAN_DRIVER_H_
#define INC_CAN_DRIVER_H_

#include <stdint.h>
#include <can.h>
// Define IS_SENDER to 1 if this device is the sender, otherwise it is the receiver
#define IS_SENDER 0  // set to 0 for receiver

#define CAN_LIGHT_ID  0x321

#if IS_SENDER == 1
void CAN_SendSensorState(uint8_t state);
#else
void CAN_ConfigFilter(void);
void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcanb);
uint8_t get_latest_luminosity(void);
#endif


#endif /* INC_CAN_DRIVER_H_ */
