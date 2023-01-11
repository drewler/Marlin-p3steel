/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * MKS GEN L – Arduino Mega2560 with RAMPS v1.4 pin assignments
 */

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "MKS GEN L supports up to 2 hotends / E steppers."
#endif

#define BOARD_INFO_NAME "MKS GEN L"

//
// Heaters / Fans
//
// Power outputs EFBF or EFBE
#define MOSFET_D_PIN 7

// Hotend, Hotend, Bed + Fan on D9
#if FET_ORDER_EEB
  #define MOSFET_B_PIN 7
  #define FAN_PIN 9
#endif

//
// CS Pins wired to avoid conflict with the LCD
// See https://www.thingiverse.com/asset:66604
//

#ifndef X_CS_PIN
  #define X_CS_PIN 59
#endif

#ifndef Y_CS_PIN
  #define Y_CS_PIN 63
#endif

// https://www.reddit.com/r/ender3/comments/amon15/tmc_2208_uart_mks_gen_l_5th_stepper/
#define Z2_SERIAL_TX_PIN  6
#define Z2_SERIAL_RX_PIN  11

#include "pins_RAMPS.h"

#define Z2_STEP_PIN       E1_STEP_PIN
#define Z2_DIR_PIN        E1_DIR_PIN
#define Z2_ENABLE_PIN     E1_ENABLE_PIN
#define Z2_CS_PIN         E1_CS_PIN

#define TEMP_PROBE_PIN TEMP_1_PIN