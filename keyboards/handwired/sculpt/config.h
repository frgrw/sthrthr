/*
Copyright 2020 Michael Fincham
Copyright 2021 Chad Austin

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#define MATRIX_ROWS 18
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS {A5, A6, A7, C7, C6, C5, C4, C3, C2, C1, C0, E1, E0, D7, D6, D5, D4, D3}
#define MATRIX_COL_PINS {F7, F6, F5, A4, A3, A2, A1, A0}
#define DIP_SWITCH_PINS {F4}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE_USE_FRAMES 1

/*
 * I lived with no debouncing for a while, but phantom keypresses were common.
 *
 * I lived with DEBOUNCE_DOWN = 2 for months. Rarely, but often enough to
 * be annoying, "the" would sometimes produce "theb" or "because" would produce
 * "bhecause". This is under the Dvorak layout. Given this keyboard's 600 Hz
 * scan rate, 2 is insufficient anyway, because sometimes the elapsed time between
 * debounces rounds up to 2.
 *
 * After adding debounce logging and painfully reproducing a "because" producing
 * "bhecause", I measured 4 ms on the phantom h keypress. Therefore, let's try
 * setting DEBOUNCE_DOWN to 4.
 */
#define DEBOUNCE_DOWN 1
/*
 * Keyup latency is less perceptible unless phantom keys appear, so use
 * a longer debounce.
 */
#define DEBOUNCE_UP 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
#define MATRIX_HAS_GHOST

/*
 * Magic Key Options
 *
 * Magic keys are hotkey commands that allow control over firmware functions of
 * the keyboard. They are best used in combination with the HID Listen program,
 * found here: https://www.pjrc.com/teensy/hid_listen.html
 *
 * The options below allow the magic key functionality to be changed. This is
 * useful if your keyboard/keypad is missing keys and you want magic key support.
 *
 */

/* key combination for magic key command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

#define LATENCY_MODE_ENABLE 0
#define LATENCY_MODE_PIN D2

#if !LATENCY_MODE_ENABLE
#define LED_CAPS_LOCK_PIN B7
#endif

#define SCULPT_RIGHT_SPACE_KEY KC_SPC

#define USB_POLLING_INTERVAL_MS 2
//#define QMK_KEYS_PER_SCAN 1

#define DEBUG_MATRIX_SCAN_RATE 1


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
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#endif
