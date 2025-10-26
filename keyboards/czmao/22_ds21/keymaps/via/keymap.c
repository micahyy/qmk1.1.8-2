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

        KC_ESC,         KC_VOLD,        KC_MPLY,        KC_BSPC,    KC_VOLU, 

        LT(1,KC_NUM),   KC_PSLS,        KC_PAST,        KC_PMNS, 
        LT(7,KC_P7),    KC_P8,          KC_P9,          
        LT(4,KC_P4),    LT(5,KC_P5),    LT(6,KC_P6),    KC_PPLS,
        LT(1,KC_P1),    LT(2,KC_P2),    LT(3,KC_P3),    KC_PENT,
        KC_P0,                          KC_PDOT,

        KC_DEL,         KC_BSPC,        KC_PGUP,        KC_PGDN,             
        KC_MPRV,        KC_MNXT,        KC_VOLD,        KC_VOLU   
    ),
    [1] = LAYOUT(
        //1      2        3        4        5        6        7        8        9        10       11       12       13       14       15       16       17       18       19       20       21
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,

        KC_TRNS,        KC_NUM,         MO(2),          KC_CALC,
        KC_HOME,        KC_UP,          KC_PGUP, 
        KC_LEFT,        KC_TRNS,        KC_RGHT,        KC_TRNS,  
        KC_END,         KC_DOWN,        KC_PGDN,        KC_TRNS,
        KC_TRNS,                        KC_TRNS,

        KC_DEL,         KC_BSPC,        RGB_MOD,        RGB_MOD,             
        RGB_MOD,        RGB_MOD,        KC_VOLD,        KC_VOLU    
    ),
    [2] = LAYOUT(
        //1      2        3        4        5        6        7        8        9        10       11       12       13       14       15       16       17       18       19       20       21
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        RGB_VAI,
        RGB_TOG,        RGB_SAI,        KC_TRNS, 
        RGB_HUD,        EE_CLR,         RGB_HUI,        RGB_VAD,  
        KC_TRNS,        RGB_SAD,        KC_TRNS,        KC_TRNS, 
        RGB_MOD,                        KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS    
    ),
    [3] = LAYOUT(
        //1      2        3        4        5        6        7        8        9        10       11       12       13       14       15       16       17       18       19       20       21
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        NK_TOGG,        KC_TRNS,        KC_TRNS,        
        KC_TRNS,        EE_CLR,         KC_TRNS,        KC_TRNS, 
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,                        KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS    
    ),
    [4] = LAYOUT(
        //1      2        3        4        5        6        7        8        9        10       11       12       13       14       15       16       17       18       19       20       21
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,        KC_TRNS,        KC_TRNS,        
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS, 
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,                        KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS    
    ),    
    [5] = LAYOUT(
        //1      2        3        4        5        6        7        8        9        10       11       12       13       14       15       16       17       18       19       20       21
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,        KC_TRNS,        KC_TRNS,        
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS, 
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,                        KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS    
    ),
    [6] = LAYOUT(
        //1      2        3        4        5        6        7        8        9        10       11       12       13       14       15       16       17       18       19       20       21
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,        KC_TRNS,        KC_TRNS,        
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS, 
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,                        KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS    
    ),
    [7] = LAYOUT(
        //1      2        3        4        5        6        7        8        9        10       11       12       13       14       15       16       17       18       19       20       21
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,    KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,        KC_TRNS,        KC_TRNS,        
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS, 
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,
        KC_TRNS,                        KC_TRNS,

        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS,            
        KC_TRNS,        KC_TRNS,        KC_TRNS,        KC_TRNS    
    )

    
};



#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {

    [0] = { ENCODER_CCW_CW(KC_P1  , KC_DEL ), ENCODER_CCW_CW(KC_PGUP, KC_PGDN), ENCODER_CCW_CW(KC_HOME, KC_END ), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [4] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [5] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [6] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [7] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },

};
#endif


bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // caps lock cyan

    // num lock cyan
    if (host_keyboard_led_state().num_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(5, 255, 255, 255);
    } 



    // layer state
    switch (get_highest_layer(layer_state)) {
        case 1:
            RGB_MATRIX_INDICATOR_SET_COLOR(16, 255, 255, 255);
            break;
        case 2:
            RGB_MATRIX_INDICATOR_SET_COLOR(17, 255, 255, 255);
            break;
        case 3:
            RGB_MATRIX_INDICATOR_SET_COLOR(18, 255, 255, 255);
            break;
        case 4:
            RGB_MATRIX_INDICATOR_SET_COLOR(13, 255, 255, 255);
            break;
        case 5:
            RGB_MATRIX_INDICATOR_SET_COLOR(14, 255, 255, 255);
            break;
        case 6:
            RGB_MATRIX_INDICATOR_SET_COLOR(15, 255, 255, 255);
            break;
        case 7:
            RGB_MATRIX_INDICATOR_SET_COLOR(9, 255, 255, 255);
            break;

    }
    return false;
}

