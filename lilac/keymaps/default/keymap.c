// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H


// layers
enum layers {
    _BASE = 0,
    _LOWER,
    _RAISE,
    _ADJUST
};


// 58 Keys: 5x6 Left and Right Matrix - 2 ecoder switches

#define LOWER MO(_LOWER)
#define RAISE MO(_RAISE)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───────┬───┬───┬───┬───┬───┐   ┌───┬───┬───┬───┬───┬───────┐
     * │  ESC  │ 1 │ 2 │ 3 │ 4 │ 5 │   │ 6 │ 7 │ 8 │ 9 │ 0 │ BKSPC │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │  TAB  │ Q │ W │ E │ R │ T │   │ Y │ U │ I │ O │ P │   \   │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │  CAP  │ A │ S │ D │ F │ G │   │ H │ J │ K │ L │ ' │ ENTER │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │ LSHFT │ Z │ X │ C │ V │ B │   │ N │ M │ , │ . │ / │ RSHFT │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │ LCTRL │WIN│ALT│LWR│SPC│MUT│   │MPL│SPC│RSE│APP│MNU│ RCTRL │
     * └───────┴───┴───┴───┴───┴───┘   └───┴───┴───┴───┴───┴───────┘
     */
    [_BASE] = LAYOUT(
        KC_ESC,  KC_1,     KC_2,     KC_3,   KC_4,      KC_5,     KC_6,     KC_7,      KC_8,     KC_9,    KC_0,     KC_BSPC,
        KC_TAB,  KC_Q,     KC_W,     KC_E,   KC_R,      KC_T,     KC_Y,     KC_U,      KC_I,     KC_O,    KC_P,     KC_BSLS,
        KC_CAPS, KC_A,     KC_S,     KC_D,   KC_F,      KC_G,     KC_H,     KC_J,      KC_K,     KC_L,    KC_QUOT,  KC_KP_ENTER,
        KC_LSFT, KC_Z,     KC_X,     KC_C,   KC_V,      KC_B,     KC_N,     KC_M,      KC_COMM,  KC_DOT,  KC_SLSH,  KC_RSFT,
        KC_LCTL, KC_LGUI,  KC_LALT,  LOWER,  KC_SPACE,  KC_MUTE,  KC_MPLY,  KC_SPACE,  RAISE,    KC_APP,  KC_MENU,  KC_RCTL
    ),

    /*
     * LOWER - SYMBOlS & Arrows
     * ┌───────┬───┬───┬───┬───┬───┐   ┌───┬───┬───┬───┬───┬───────┐
     * │   `   │ ! │ @ │ # │ $ │ % │   │ ^ │ & │ * │ ( │ ) │   -   │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │ F1│ F2│ F3│ F4│ F5│   │ F6│ F7│ F8│ F9│F10│  DEL  │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │   │   │   │   │   │   │PDU│ UP│PDN│   │   │  END  │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │   │   │   │   │   │   │LFT│DWN│RGT│   │   │       │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │   │   │   │   │   │   │   │   │   │   │   │       │
     * └───────┴───┴───┴───┴───┴───┘   └───┴───┴───┴───┴───┴───────┘    
     */

    [_LOWER] = LAYOUT(
        KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_MINS,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_DEL,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_PGUP, KC_UP,   KC_PGDN, XXXXXXX, XXXXXXX, KC_END,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX, XXXXXXX,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    /*
     * RAISE - EXTRA
     * ┌───────┬───┬───┬───┬───┬───┐   ┌───┬───┬───┬───┬───┬───────┐
     * │       │F11│F12│   │   │   │   │   │   │   │ - │ = │       │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │   │   │   │   │   │   │   │   │   │ [ │ ] │       │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │   │   │   │   │   │   │   │   │   │   │   │       │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │   │   │   │   │   │   │   │   │   │   │   │       │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │   │   │   │   │   │   │   │   │   │   │   │       │
     * └───────┴───┴───┴───┴───┴───┘   └───┴───┴───┴───┴───┴───────┘  
    
    */

    [_RAISE] = LAYOUT(
        _______, KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS, KC_EQL,  _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LBRC, KC_RBRC, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ), 
    
    /*
     * ADJUST - BOOT
     * ┌───────┬───┬───┬───┬───┬───┐   ┌───┬───┬───┬───┬───┬───────┐
     * │ QBOOT │   │   │   │   │   │   │   │   │   │   │   │       │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │   │   │   │   │   │   │   │   │   │   │   │       │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │   │   │   │   │   │   │   │   │   │   │   │       │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │   │   │   │   │   │   │   │   │   │   │   │       │
     * ├───────┼───┼───┼───┼───┼───┤   ├───┼───┼───┼───┼───┼───────┤
     * │       │   │   │   │   │   │   │   │   │   │   │   │       │
     * └───────┴───┴───┴───┴───┴───┘   └───┴───┴───┴───┴───┴───────┘  
    
    */

    [_ADJUST] = LAYOUT(
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, XXXXXXX, XXXXXXX, XXXXXXX,
    )
};


// LOWER + RAISE = ADJUST
layer_state_t layer_state_set_user(layer_state_t state) {
    return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

// Encoder map
#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {


    [_BASE]   = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT)},
    [_LOWER]  = {ENCODER_CCW_CW(KC_LEFT, KC_RGHT), ENCODER_CCW_CW(KC_DOWN, KC_UP  )},
    [_RAISE]  = {ENCODER_CCW_CW(KC_PGDN, KC_PGUP), ENCODER_CCW_CW(_______, _______)},
    [_ADJUST] = {ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______)},
};
#endif
