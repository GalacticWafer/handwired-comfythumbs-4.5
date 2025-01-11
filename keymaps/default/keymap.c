
#include QMK_KEYBOARD_H

#define _QWERTY 0

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTY] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,  KC_F5,   KC_F6,    /**/    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_BRK,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_MINS,  /**/    KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PSCR,
        KC_LBRC, KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,              /**/    KC_SLCK, KC_Y,     KC_U,    KC_I,    KC_O,    KC_P, KC_RBRC,
        KC_DEL,  KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_CAPS,    /**/  KC_INS,  KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,    KC_QUOT,
        KC_MENU, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,               /**/            KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_BSLS,
        KC_PGUP,                           KC_BSPC, KC_LSFT, KC_LGUI, KC_RGUI, KC_SPC,           KC_RSFT,          KC_UP,
        KC_HOME, KC_PGDN, KC_END,           KC_TAB, KC_LCTL, KC_LALT,  /**/    KC_RALT, KC_RCTL,          KC_ENT, KC_LEFT,  KC_DOWN, KC_RIGHT
),
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_PGDN);
        } else {
            tap_code(KC_PGUP);
        }
    } else if (index == 1) { /* Second encoder */
        if (clockwise) {
            tap_code(KC_DOWN);
        } else {
            tap_code(KC_UP);
        }
    }
    return true;
}
srtrsatarstarstrastfartdwf
