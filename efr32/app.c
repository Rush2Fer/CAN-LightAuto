/***************************************************************************//**
 * @file
 * @brief Top level application functions
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

/***************************************************************************//**
 * Initialize application.
 ******************************************************************************/
#include <stdio.h>
#include "sl_status.h"
#include "sl_sensor_light.h"
#include "sl_i2cspm_instances.h"
#include "sl_sleeptimer.h"
#include "app.h"


// -----------------------------------------------------------------------------
// Configuration

#define LIGHT_ADDRESS  SI1133_ADDR

// -----------------------------------------------------------------------------
// Private variables

// -----------------------------------------------------------------------------
// Public function definitions


void app_init(void)
{
  sl_status_t sc;
  sc = sl_sensor_light_init();
  if (sc != SL_STATUS_OK)
    printf("Light sensor init failed");
}

/***************************************************************************//**
 * App ticking function.
 ******************************************************************************/
void app_process_action(void)
{
  sl_status_t sc;
  float uvi;
  float lux;
  sc = sl_sensor_light_get(&lux, &uvi);
  int luxi=(int)lux;
  if (sc != SL_STATUS_OK) {
    printf("\n"); // \n To avoid data being processed
  }
  if (sc == SL_STATUS_OK){
      if(luxi <= 200) printf("0\n");
      else if(luxi <= 1000) printf("1\n");
      else printf("2\n");
  }
  sl_sleeptimer_delay_millisecond(500);
}
