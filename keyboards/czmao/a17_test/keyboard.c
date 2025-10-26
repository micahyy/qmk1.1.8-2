void keyboard_post_init_user(void) {
    // 初始化RGB矩阵
    rgb_matrix_enable();
    
    // 初始化RGB灯光
    rgblight_enable();
    rgblight_mode(RGBLIGHT_MODE_RAINBOW_MOOD);
}