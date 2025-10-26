#include "bluetooth.h"
#include "nrf52.h"  // 包含 NRF52832 的相关头文件

void bluetooth_init(void) {
    // 初始化 NRF52832 的蓝牙功能
    nrf52_bluetooth_init();
}

void bluetooth_task(void) {
    // 处理蓝牙任务
    nrf52_bluetooth_task();
}