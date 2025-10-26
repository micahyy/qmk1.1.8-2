#pragma once

#define WS2812_DI_PIN B13
#define RGB_MATRIX_LED_COUNT 16  // 根据实际LED数量修改

// 蓝牙配置
#define BLUETOOTH_NAME "MyKeyboard"
#define BLE_PAIRING_PIN 123456

// 串口配置
#define UART_TX_PIN A9
#define UART_RX_PIN A10
#define UART_BAUD_RATE 115200

// 模式定义
enum {
    USB_MODE = 0,
    BLE_MODE
};