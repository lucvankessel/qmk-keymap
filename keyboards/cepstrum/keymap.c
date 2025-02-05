#include QMK_KEYBOARD_H


#define _LAYER0 0
#define _LAYER1 1
#define _LAYER2 2

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_LAYER0] = LAYOUT(KC_NO, KC_NO, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_DEL, KC_NO, KC_NO, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME, KC_NO, KC_NO, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP, KC_NO, KC_NO, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_PGDN, KC_NO, KC_NO, KC_LCTL, KC_LGUI, KC_LALT, MO(1), KC_SPC, KC_BSPC, KC_PSCR, MO(2), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

[_LAYER1] = LAYOUT(RGB_TOG, RGB_VAI, KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_NO, BL_TOGG, RGB_VAD, KC_TRNS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, LSFT(KC_LCTL), KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),

[_LAYER2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_LT, KC_GT, KC_DQUO, KC_DOT, KC_AMPR, KC_UNDS, KC_LBRC, KC_RBRC, KC_PERC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EXLM, KC_PMNS, KC_PPLS, KC_EQL, KC_HASH, KC_PIPE, KC_COLN, KC_LPRN, KC_RPRN, KC_QUES, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CIRC, KC_PSLS, KC_PAST, KC_BSLS, KC_NO, KC_TILD, KC_DLR, KC_LCBR, KC_RCBR, KC_AT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO) 

};

void set_layer_0(void) {  // Base Layer: All white
    uint8_t brightness = rgb_matrix_get_val();
    for (uint8_t i = 0; i < MATRIX_ROWS * MATRIX_COLS; i++) {
        keypos_t key_pos = { .row = i / MATRIX_COLS, .col = i % MATRIX_COLS };
        uint16_t keycode = keymap_key_to_keycode(1, key_pos);

        if (keycode != KC_NO) {
            rgb_matrix_set_color(i, brightness, brightness, brightness); // Default: white backlight
        } else {
            rgb_matrix_set_color(i, 0, 0, 0) // If the key is not set: no backlight
        }
    }
}

void set_layer_1(void) {  // Nav Layer: Highlight navigation keys
    uint8_t brightness = rgb_matrix_get_val();
    for (uint8_t i = 0; i < MATRIX_ROWS * MATRIX_COLS; i++) {
        keypos_t key_pos = { .row = i / MATRIX_COLS, .col = i % MATRIX_COLS };
        uint16_t keycode = keymap_key_to_keycode(1, key_pos);

        if (keycode == KC_LEFT || keycode == KC_RGHT || 
            keycode == KC_UP   || keycode == KC_DOWN ||
            keycode == KC_HOME || keycode == KC_END) {
            rgb_matrix_set_color(i, 0, brightness, brightness);  // Cyan, scaled
        } else if (keycode != KC_NO) {
            rgb_matrix_set_color(i, brightness, brightness, brightness);
        } else {
            rgb_matrix_set_color(i, 0, 0, 0)
        }
    }
}

void set_layer_2(void) {  // Symbol Layer: Highlight symbol keys
    uint8_t brightness = rgb_matrix_get_val();
    for (uint8_t i = 0; i < MATRIX_ROWS * MATRIX_COLS; i++) {
        keypos_t key_pos = { .row = i / MATRIX_COLS, .col = i % MATRIX_COLS };
        uint16_t keycode = keymap_key_to_keycode(2, key_pos);

        if (keycode == KC_EXLM || keycode == KC_AT || keycode == KC_HASH ||
            keycode == KC_DLR  || keycode == KC_PERC || keycode == KC_CIRC) {
            rgb_matrix_set_color(i, brightness, (brightness * 165) / 255, 0);  // Orange, scaled
        } else if (keycode != KC_NO) {
            rgb_matrix_set_color(i, brightness, brightness, brightness);
        } else {
            rgb_matrix_set_color(i, 0, 0, 0)
        }
    }
}

// Detect Caps Lock and change key color
void set_capslock_indicator(void) {
    uint8_t brightness = rgb_matrix_get_val();

    if (host_keyboard_led_state().caps_lock) {  // Check if Caps Lock is active
        rgb_matrix_set_color(30, brightness, 0, 0);  // Red for Caps Lock (adjust key index)
    } else {
        rgb_matrix_set_color(30, brightness, brightness, brightness);  // Default white
    }
}

void rgb_matrix_indicators_user(void) {
    uint8_t layer = get_highest_layer(layer_state);

    switch (layer) {
        case 0:
            set_layer_0();
            break;
        case 1:
            set_layer_1();
            break;
        case 2:
            set_layer_2();
            break;
    }

    set_capslock_indicator();  // Always check Caps Lock state
}