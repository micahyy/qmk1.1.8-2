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
    [0] = LAYOUT(
        //1      2        3        4        5        6        7        8        9        10       11       12       13       14       15       16       17       18       19       20       21
KC_ESC,
KC_F1,
KC_F2,
KC_F3,
KC_F4,

KC_GRV,
KC_1,
KC_2,
KC_3,
KC_4,
KC_5,
KC_6,

KC_TAB,
KC_Q,
KC_W,
KC_E,
KC_R,
KC_T,

KC_CAPS,
KC_A,
KC_S,
KC_D,
KC_F,
KC_G,

KC_LSFT,
KC_Z,
KC_X,
KC_C,
KC_V,
KC_B,

KC_LCTL,
MO(1),
KC_LALT,
KC_SPC,

KC_MUTE,
KC_VOLU,
KC_VOLD

    ),
    
    [1] = LAYOUT(
        //1      2        3        4        5        6        7        8        9        10       11       12       13       14       15       16       17       18       19       20       21
QK_CLEAR_EEPROM,
KC_F1,
KC_F2,
KC_F3,
KC_F4,

KC_GRV,
KC_1,
KC_2,
KC_3,
KC_4,
KC_5,
KC_6,

KC_TAB,
KC_Q,
KC_W,
KC_E,
KC_R,
KC_T,

KC_CAPS,
RGB_VAI,
RGB_VAD,
KC_D,
KC_F,
KC_G,

RGB_TOG,
RGB_MOD,
RGB_HUI,
RGB_HUD,
RGB_SAI,
RGB_SAD,

KC_TRNS,
KC_TRNS,
KC_LALT,
KC_SPC,
KC_MUTE,
KC_VOLU,
KC_VOLD
    )
    
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // caps lock cyan

    // num lock cyan
    if (host_keyboard_led_state().caps_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(18, 255, 255, 255);
    } 



    // layer state
    switch (get_highest_layer(layer_state)) {
        case 1:
            RGB_MATRIX_INDICATOR_SET_COLOR_ALL(255, 255, 255);
            break;
        case 2:
            RGB_MATRIX_INDICATOR_SET_COLOR(32, 255, 255, 255);
            break;
        case 3:
            RGB_MATRIX_INDICATOR_SET_COLOR(33, 255, 255, 255);
            break;
        case 4:
            RGB_MATRIX_INDICATOR_SET_COLOR(25, 255, 255, 255);
            break;
        case 5:
            RGB_MATRIX_INDICATOR_SET_COLOR(26, 255, 255, 255);
            break;
        case 6:
            RGB_MATRIX_INDICATOR_SET_COLOR(27, 255, 255, 255);
            break;
        case 7:
            RGB_MATRIX_INDICATOR_SET_COLOR(28, 255, 255, 255);
            break;


    }
    return false;
}
