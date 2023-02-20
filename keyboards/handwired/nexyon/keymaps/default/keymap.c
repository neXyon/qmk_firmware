#include QMK_KEYBOARD_H

#define OS_LSFT OSM(MOD_LSFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │ `   │ 1 │ 2 │ 3 │ 4 │ 5 │ = │                     │ = │ 6 │ 7 │ 8 │ 9 │ 0 │    - │
     * ├─────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │ Tab │ Q │ W │ E │ R │ T │ = │                     │ = │ Y │ U │ I │ O │ P │    \ │
     * ├─────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │ Esc │ A │ S │ D │ F │ G ├───┤                     └───│ H │ J │ K │ L │ ; │    ' │
     * ├─────┼───┼───┼───┼───┼───┤                             ├───┼───┼───┼───┼───┼──────┤
     * │Shift│ Z │ X │ C │ V │ B │                             │ N │ M │ , │ . │ / │ Shift│
     * └──┬──┼───┼───┼───┼───┼───┴ ┌───┬───┬───┐ ┌───┬───┬───┐ └───┼───┼───┼───┼───┼───┬──┘
     *   │Ctl│F4 │F5 │GUI│Alt│     │   │ C │ V │ │   │ C │ V │     │ ← │ ↓ │ ↑ │ → │GUI│
     *   └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                             │   │   │   │ │PgD│   │   │
     *                             │Bsp│Bsp│   │ │   │Ent│   │
     *                             │   │   │   │ │Ctl│   │   │
     *                             └───┴───┴───┘ └───┴───┴───┘
     */
    [0] = LAYOUT_default(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MSTP,                   KC_MSTP, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_MPLY,                   KC_MPLY, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        OS_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_APP,  KC_LALT, DF(1),                                                         KC_RALT, KC_RGUI, KC_APP,  KC_PSCR, KC_RCTL,
                                                     KC_MPRV, KC_MUTE, KC_MNXT, KC_MPRV, KC_MUTE, KC_MNXT,
                                                     KC_SPC,  KC_ENT,  KC_BSPC, KC_DEL,  KC_BSPC, KC_LSFT
    ),
    [1] = LAYOUT_default(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    DF(0),                     KC_MSTP, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_F1,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    QK_BOOT,                   KC_MPLY, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_G,    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,                                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_H,    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_N,                                        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LGUI, KC_APP,  KC_LALT, KC_V,                                                          KC_RALT, KC_RGUI, KC_APP,  KC_PSCR, KC_RCTL,
                                                     KC_MPRV, KC_MUTE, KC_MNXT, KC_MPRV, KC_MUTE, KC_MNXT,
                                                     KC_SPC,  KC_R,    KC_ENT, KC_DEL,  KC_BSPC, KC_LSFT
    )
};
