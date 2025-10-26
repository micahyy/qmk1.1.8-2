#pragma once

#include "quantum_keycodes.h"  // 包含 QMK 的键码定义

// 定义双模切换键
enum custom_keycodes {
    USB_MODE = SAFE_RANGE,  // USB 模式
    BLE_MODE,               // 蓝牙模式
    TOGGLE_MODE             // 切换模式
};

// 当前模式（默认 USB 模式）
uint8_t current_mode = USB_MODE;

// 蓝牙配置
#define BLUETOOTH_NAME "MAO_DS17R3"
#define BLUETOOTH_PAIRING_PIN 123456

// UART 引脚定义
#define UART_TX_PIN A2
#define UART_RX_PIN A3