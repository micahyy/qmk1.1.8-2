// RGB矩阵配置
#define RGB_MATRIX_LED_COUNT 17  // 根据您的实际LED数量调整
// #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 180

// RGB灯光配置（第二条灯带）
#define RGBLIGHT_LED_COUNT 10  // 根据您的第二条灯带LED数量调整
// #define RGBLIGHT_MAX_BRIGHTNESS 180
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD

// 引脚定义
#define WS2812_DI_PIN B5  // RGB矩阵灯带引脚
#define RGBLIGHT_DI_PIN B13  // RGB灯光灯带引脚

// 如果需要不同的时序调整
#define WS2812_TIMING 1325
#define WS2812_T1H 800
#define WS2812_T1L 450

#define WS2812_PWM_DRIVER PWMD2 // 为 RGB Matrix 指定定时器
#define WS2812_PWM_CHANNEL 2    // 指定通道

#define RGBLIGHT_WS2812_DRIVER PWMD3 // 为 RGB Light 指定不同的定时器
#define RGBLIGHT_WS2812_CHANNEL 1    // 指定不同的通道
#define RGBLIGHT_DISABLE_KEYCODES // 禁用 RGBLight 的键码功能，减少冲突