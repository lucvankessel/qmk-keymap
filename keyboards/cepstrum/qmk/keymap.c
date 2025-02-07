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

// default
[_LAYER0] = LAYOUT(KC_F13, KC_F14, KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC, KC_DEL, KC_F15, KC_F16, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_HOME, KC_F17, KC_F18, KC_CAPS, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT, KC_PGUP, KC_F19, KC_F20, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_PGDN, KC_F21, KC_F22, KC_LCTL, KC_LGUI, KC_LALT, MO(2), KC_SPC, KC_BSPC, MO(1), KC_PSCR, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT),

// nav layer
[_LAYER1] = LAYOUT(RGB_HUI, RGB_HUD, KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TRNS, KC_NO, RGB_SAI, RGB_SAD, KC_TRNS, KC_HOME, KC_UP, KC_END, KC_PGUP, KC_NO, QK_BOOT, EE_CLR, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RGB_VAI, RGB_VAD, LSFT(KC_LCTL), KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_NO, RGB_TOG, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, QK_BOOT, EE_CLR, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO),

// symbol layer
[_LAYER2] = LAYOUT(KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_GRV, KC_LT, KC_GT, KC_DQUO, KC_DOT, KC_UNDS, KC_LPRN, KC_RPRN, KC_AMPR, KC_PERC, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_EXLM, KC_PMNS, KC_PPLS, KC_EQL, KC_HASH, KC_COLN, KC_LCBR, KC_RCBR, KC_PIPE, KC_QUES, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_CIRC, KC_PSLS, KC_PAST, KC_BSLS, KC_NO, KC_TILD, KC_LBRC, KC_RBRC, KC_DLR, KC_AT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO)

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
            keycode == KC_UP   || keycode == KC_DOWN ) {
            rgb_matrix_set_color(i, 
            0, 
            brightness, 
            brightness);  // Cyan, scaled
        } else if (keycode != KC_LBRS) {
            rgb_matrix_set_color(i, 
                brightness, 
                brightness, 
                brightness);
        } else {
            rgb_matrix_set_color(i, 
                0, 
                0, 
                0);
        }
    }
}

void set_layer_2(void) {  // Symbol Layer: Highlight symbol keys
    uint8_t brightness = rgb_matrix_get_val();
    for (uint8_t i = 0; i < MATRIX_ROWS * MATRIX_COLS; i++) {
        keypos_t key_pos = { .row = i / MATRIX_COLS, .col = i % MATRIX_COLS };
        uint16_t keycode = keymap_key_to_keycode(2, key_pos);

        if (keycode == KC_LBRC || keycode == KC_RBRC ||
            keycode == KC_LCBR || keycode == KC_RCBR ||
            keycode == KC_LPRN || keycode == KC_RPRN) {
            rgb_matrix_set_color(i, 
                (brightness * 249) / 255, 
                (brightness * 199) / 255, 
                (brightness * 97) / 255);  // rgb(249,199,97) orange ish
        } else if (keycode == KC_UNDS || keycode == KC_COLN ||
                    keycode == KC_TILD || keycode == KC_AMPR ||
                    keycode == KC_PIPE || keycode == KC_DLR ||
                    keycode == KC_GRV || keycode == KC_DOT ||
                    keycode == KC_DQUO || keycode == KC_HASH ||
                    keycode == KC_BSLS || keycode == KC_CIRC) {
            rbg_matric_set_color (i, 
                (brightness * 254) / 255, 
                (brightness * 248) / 255, 
                (brightness * 221) / 255); // rgb(254,248,221) beige
        } else if (keycode == KC_QUES || keycode == KC_PERC ||
                keycode == KC_AT) {
            rbg_matric_set_color(i, 
                (brightness * 169) / 255, 
                (brightness * 192) / 255, 
                (brightness * 299) / 255); // rgb(169,192,229) blue ish
        } else if ( keycode == KC_EXLM || keycode == KC_LT ||
                keycode == KC_GT || keycode == KC_EQL) {
            rgb_matrix_set_color(i, 
                (brightness * 233) / 255,
                (brightness * 176) / 255,
                (brightness * 209) / 255); // rgb(233,176,209) pink
        } else if (keycode == KC_PMNS || keycode == KC_PPLS ||
                keycode == KC_PSLS || keycode == KC_PAST) {
            rgb_matrix_set_color(i, 
            (brightness * 166) / 255, 
            (brightness * 208) / 255, 
            (brightness * 130) / 255); // rgb(166,208,130) green
        } else if (keycode != KC_NO) {
            rgb_matrix_set_color(i, 
                brightness, 
                brightness, 
                brightness); // white
        } else {
            rgb_matrix_set_color(i, 
                0, 
                0, 
                0); // no color
        }
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
}