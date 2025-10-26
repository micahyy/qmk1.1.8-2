/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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
#include QMK_KEYBOARD_H


// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

// enum custom_keycodes {
//   QWERTY = SAFE_RANGE,
//   LOWER,
//   RAISE
// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_gushen(
        //0             1           2           3           4           5           6           7           8           9           10          11          12          13          14
        LCTL(KC_F1),    LCTL(KC_F2),    LCTL(KC_F3),    LCTL(KC_F4),    LCTL(KC_F5),
        LCTL(KC_F6),            LCTL(KC_F7),                    LCTL(KC_F8),     
        LCTL(KC_F9),    LCTL(KC_F10),   LCTL(KC_F11),   LCTL(KC_F12),

        LALT(KC_F1),            LALT(KC_F2),                    LALT(KC_F3),    
        LALT(KC_F4),    LALT(KC_F5),    LALT(KC_F6),            LALT(KC_F7),
        LALT(KC_F8),    LALT(KC_F9),    LALT(KC_F10),           LALT(KC_F11)
    )
};

    
    
