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

#define OLED_BRIGHTNESS 128
#define OLED_TIMEOUT 30000

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET // Activates the double-tap behavior
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 200U // Timeout window in ms in which the double tap can occur.
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP17 // Specify a optional status led by GPIO number which blinks when entering the bootloader Pre-defined RP2040 boards
#define SERIAL_USART_TX_PIN B6     // The GPIO pin that is used split communication.

// Selectively undefine to save space
// VIA support won't fit otherwise
ifdef RGBLIGHT_ENABLE
undef RGBLIGHT_LED_MAP
undef RGBLIGHT_EFFECT_SNAKE
undef RGBLIGHT_EFFECT_KNIGHT
undef RGBLIGHT_EFFECT_CHRISTMAS
undef RGBLIGHT_EFFECT_STATIC_GRADIENT
undef RGBLIGHT_EFFECT_RGB_TEST
undef RGBLIGHT_EFFECT_ALTERNATING
undef RGBLIGHT_EFFECT_TWINKLE
endif //RGB LIGHT_ENABLE

// Split Options
define SPLIT_TRANSPORT_MIRROR
#define SPLIT_USB_DETECT