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

#include QMK_KEYBOARD_H
#include "uart.h"

uint8_t current_mode = USB_MODE;

// 初始化UART通信
void uart_init_comm(void) {
    uart_init(UART_BAUD_RATE);
}

// 发送模式切换命令
void send_mode_command(uint8_t mode) {
    uart_write(0xAA);  // 起始字节
    uart_write(mode);
    uart_write(0x55);  // 结束字节
}

void keyboard_post_init_user(void) {
    uart_init_comm();
    rgb_matrix_enable_noeeprom();
    
    // 默认USB模式
    current_mode = USB_MODE;
    send_mode_command(USB_MODE);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case KC_BT_TOG:  // 蓝牙/USB切换键
                current_mode = (current_mode == USB_MODE) ? BLE_MODE : USB_MODE;
                send_mode_command(current_mode);
                return false;
        }
    }
    return true;
}

void housekeeping_task_user(void) {
    static bool last_usb_connected = false;
    bool usb_connected = usb_connected_state();
    
    // USB状态变化时自动切换
    if (usb_connected != last_usb_connected) {
        current_mode = usb_connected ? USB_MODE : BLE_MODE;
        send_mode_command(current_mode);
        last_usb_connected = usb_connected;
    }
}



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
    [0] = LAYOUT_numberpad_5x4(
//1    2        3        4        
LT(1,KC_NUM), LT(2,KC_PSLS), LT(3,KC_PAST), LT(4,KC_PMNS),
KC_P7, KC_P8,   KC_P9,   
KC_P4, KC_P5, KC_P6,   KC_PPLS,
KC_P1, KC_P2, KC_P3,   
KC_P0,          KC_PDOT, KC_PENT
    ),
    [1] = LAYOUT_numberpad_5x4(
KC_TRNS,   KC_NUM,  MO(2),   KC_CALC,
KC_HOME, KC_UP,   KC_PGUP, 
KC_LEFT, KC_TRNS, KC_RGHT, KC_TRNS,  
KC_END,  KC_DOWN, KC_PGDN, 
KC_LSFT,          KC_RSFT, KC_N
    ),
        [2] = LAYOUT_numberpad_5x4(
KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAI,
RGB_TOG, RGB_SAI, KC_TRNS, 
RGB_HUD, EE_CLR, RGB_HUI, RGB_VAD,  
KC_TRNS, RGB_SAD, KC_TRNS, 
RGB_MOD,          KC_TRNS, KC_TRNS
    ),
        [3] = LAYOUT_numberpad_5x4(
KC_TRNS, KC_TRNS, KC_TRNS, RGB_VAI,
KC_TRNS, KC_TRNS, KC_TRNS, 
KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
KC_TRNS, KC_TRNS, KC_TRNS, 
KC_TRNS,          KC_TRNS, KC_TRNS
    )
    
    
};


bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // caps lock cyan

    // num lock cyan
    if (host_keyboard_led_state().num_lock) {
        RGB_MATRIX_INDICATOR_SET_COLOR(0, 255, 255, 255);
    } 



    // layer state
    switch (get_highest_layer(layer_state)) {
        case 1:
            RGB_MATRIX_INDICATOR_SET_COLOR(11, 255, 255, 255);
            break;
        case 2:
            RGB_MATRIX_INDICATOR_SET_COLOR(12, 255, 255, 255);
            break;
        case 3:
            RGB_MATRIX_INDICATOR_SET_COLOR(13, 255, 255, 255);
            break;
        case 4:
            RGB_MATRIX_INDICATOR_SET_COLOR(8, 255, 255, 255);
            break;
        case 5:
            RGB_MATRIX_INDICATOR_SET_COLOR(9, 255, 255, 255);
            break;
        case 6:
            RGB_MATRIX_INDICATOR_SET_COLOR(10, 255, 255, 255);
            break;
        case 7:
            RGB_MATRIX_INDICATOR_SET_COLOR(4, 255, 255, 255);
            break;

    }
    return false;
}

