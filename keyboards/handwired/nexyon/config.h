// Copyright 2023 nexyon (@nexyon)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 8

// wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
//#define DEBOUNCE 5

/* Use I2C for communication between the halves */
#define USE_I2C

/* serial.c configuration for split keyboard */
//#define SOFT_SERIAL_PIN D0

#define ONESHOT_TAP_TOGGLE 2
#define IGNORE_MOD_TAP_INTERRUPT
#define PERMISSIVE_HOLD
//#define RETRO_TAPPING

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

