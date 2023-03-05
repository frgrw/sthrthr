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

#define MATRIX_ROWS 8
#define MATRIX_COLS 18

#define MATRIX_ROW_PINS {F5, F6, F7, A0, A1, A2, A3, A4}
#define MATRIX_COL_PINS {A5, A6, A7, C7, C6, C5, C4, C3, C2, C1, C0, E1, E0, D7, D6, D5, D4, D3}
#define DIP_SWITCH_PINS {F4}

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost (lacks anti-ghosting diodes) */
#define MATRIX_HAS_GHOST

#define SCULPT_RIGHT_SPACE_KEY KC_SPC

#define USB_POLLING_INTERVAL_MS 2

#endif
