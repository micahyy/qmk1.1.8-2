// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐
     * │Esc│ ( │ ) │ / │ * │ - │
     * ├───┼───┼───┼───┼───┼───┤
     * │ A │ B │ 7 │ 8 │ 9 │   │
     * ├───┼───┼───┼───┼───┤ + │
     * │ C │ D │ 4 │ 5 │ 6 │   │
     * ├───┼───┼───┼───┼───┼───┤
     * │ E │ F │ 1 │ 2 │ 3 │   │
     * ├───┼───┼───┴───┼───┤Ent│
     * │Ctl│TG1│ 0     │ . │   │
     * └───┴───┴───────┴───┴───┘
     */
    [0] = LAYOUT_numpad_5x5(
        KC_HOME,     LT(1,KC_NUM),  KC_PSLS, KC_PAST, KC_PMNS,
        KC_END,    KC_P7,   KC_P8,   KC_P9,
        KC_PGUP,    KC_P4,   KC_P5,   KC_P6,   KC_PPLS,
        KC_PGDN,    KC_P1,   KC_P2,   KC_P3,
        MO(1),      KC_P0,            KC_PDOT, KC_PENT
    ),

    [1] = LAYOUT_numpad_5x5(
        _______, _______, _______,  MO(2),   RGB_VAI,
        _______, RGB_TOG, RGB_SAI,  _______,
        _______, RGB_HUD, _______,  RGB_HUI, RGB_VAD,
        _______, _______,RGB_SAD,   _______,
        _______, RGB_MOD,           _______,  _______
    ),
    [2] = LAYOUT_numpad_5x5(
        _______, _______, _______,  _______, NK_TOGG,
        _______, _______, _______,  _______,
        _______, _______, _______,  _______, _______,
        _______, _______, _______,  _______,
        _______, _______,           _______,  _______
    ),
    [7] = LAYOUT_numpad_5x5(
        _______, _______, _______,  _______, _______,
        _______, _______, _______,  _______,
        _______, _______, _______,  _______, _______,
        _______, _______, _______,  _______,
        _______, _______,           _______, EE_CLR
    )
};

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // caps lock cyan

    // num lock cyan
    if (host_keyboard_led_state().num_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(1, 255, 255, 255);
    } 



    // layer state
     for (uint8_t i = led_min; i < led_max; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case 7:
                rgb_matrix_set_color(i, RGB_PURPLE);
                break;
            case 6:
                rgb_matrix_set_color(i, RGB_WHITE);
                break;
            case 5:
                rgb_matrix_set_color(i, RGB_YELLOW);
                break;
            case 4:
                rgb_matrix_set_color(i, RGB_PINK);
                break;
            case 3:
                rgb_matrix_set_color(i, RGB_BLUE);
                break;
            case 2:
                rgb_matrix_set_color(i, RGB_GREEN);
                break;
            case 1:
                RGB_MATRIX_INDICATOR_SET_COLOR(15, 255, 255, 255);
                break;
            default:
                break;
        }
    }
    return false;
}
