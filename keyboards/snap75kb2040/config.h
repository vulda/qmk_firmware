/* Copyright 2021 Jay Greco
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Used to set host for remote KB if VUSB detect doesn't work. */
// #define KEYBOARD_HOST // Force host mode
// #define KEYBOARD_REMOTE // Force remote mode

// Workarounds for sleep/wake issues
#define USB_SUSPEND_WAKEUP_DELAY 250

#undef WDT_vect

/* split config */
// #define SPLIT_USB_DETECT // Enable if you have issues with USB
#define SOFT_SERIAL_PIN GP7
#define SPLIT_HAND_PIN GP10
#define DISABLE_SYNC_TIMER
#define SPLIT_HAND_PIN_LOW_IS_LEFT

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 9
#define MATRIX_MUX_COLS 3

/*
 * Keyboard Matrix Assignments
 * The snap uses a demultiplexer for the cols.
 * to free up more IOs for awesomeness!
 * See matrix.c for more details.
*/
// Left side
#define MATRIX_ROW_PINS { GP4, GP5, GP6, GP29, GP8, GP9 }
#define MATRIX_COL_MUX_PINS { GP26, GP27, GP28 }

//Right side
#define MATRIX_ROW_PINS_RIGHT { GP29, GP28, GP27, GP26, GP18, GP20 }
#define MATRIX_COL_MUX_PINS_RIGHT { GP6, GP5, GP4 }
#define MATRIX_EXT_PIN_RIGHT GP10

/* Optional speaker pin */
#define AUDIO_PIN GP10
#define OLED_BRIGHTNESS 128
#define OLED_TIMEOUT 30000

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader Pre-defined RP2040 boards
#define SERIAL_USART_TX_PIN GP10     // The GPIO pin that is used split communication.

// Selectively undefine to save space
// VIA support won't fit otherwise
ifdef RGBLIGHT_ENABLE
#undef RGBLIGHT_LED_MAP
#undef RGBLIGHT_EFFECT_SNAKE
#undef RGBLIGHT_EFFECT_KNIGHT
#undef RGBLIGHT_EFFECT_CHRISTMAS
#undef RGBLIGHT_EFFECT_STATIC_GRADIENT
#undef RGBLIGHT_EFFECT_RGB_TEST
#undef RGBLIGHT_EFFECT_ALTERNATING
#undef RGBLIGHT_EFFECT_TWINKLE
endif //RGB LIGHT_ENABLE

// Split Options
define SPLIT_TRANSPORT_MIRROR
#define SPLIT_USB_DETECT

