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
// 在文件顶部添加这些辅助函数

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
    [0] = LAYOUT_ergodox(
//1    2        3        4        
KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,       KC_6,   KC_7,
KC_DEL,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,   
KC_CAPS,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_H,   KC_I,
KC_LSFT,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_N,   KC_M,
KC_LCTL,    KC_LWIN,    KC_LALT,    KC_SPC,     KC_RALT,    KC_RGUI,    MO(1),  KC_RCTL
    )

    
    
};

