#include QMK_KEYBOARD_H

#define OS_LSFT OSM(MOD_LSFT)

    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │     │ ¹ │ ² │ ³ │ › │ ‹ │   │                     │   │ ¢ │ ¥ │ ‚ │ ‘ │ ’ │      │
     * ├─────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │     │ … │ _ │ [ │ ] │ ^ │   │                     │   │ ! │ < │ > │ = │ & │    @ │
     * ├─────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │     │ \ │ / │ { │ } │ * ├───┘                     └───┤ ? │ ( │ ) │ - │ : │      │
     * ├─────┼───┼───┼───┼───┼───┤                             ├───┼───┼───┼───┼───┼──────┤
     * │     │ # │ $ │ | │ ~ │ ` │                             │ + │ % │ " │ ' │ ; │      │
     * └─┬───┼───┼───┼───┼───┼───┘ ┌───┬───┬───┐ ┌───┬───┬───┐ └───┼───┼───┼───┼───┼───┬──┘
     *   │   │   │   │   │   │     │   │   │   │ │   │   │   │     │   │   │   │   │   │
     *   └───┴───┴───┴───┴───┘     ├───┼───┼───┤ ├───┼───┼───┤     └───┴───┴───┴───┴───┘
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             └───┴───┴───┘ └───┴───┴───┘
     * missing °, / deadkeys, ſ, ↻
     */

#define KC_NO_IDEA KC_NO
#define MN_EURO RSA(KC_E)
#define MN_1SUP KC_NO_IDEA
#define MN_2SUP RALT(KC_2)
#define MN_3SUP RALT(KC_3)
#define MN_SGLL RSA(KC_Z)
#define MN_SGLR RSA(KC_X)
#define MN_CENT KC_NO_IDEA
#define MN_YEN RSA(KC_Y)
#define MN_SLQM KC_NO_IDEA
#define MN_LSQM KC_NO_IDEA
#define MN_RSQM KC_NO_IDEA
#define MN_ELIP RALT(KC_DOT)
#define MN_UNDS LSFT(KC_SLSH)
#define MN_BRKL RALT(KC_8)
#define MN_BRKR RALT(KC_9)
#define MN_CIRC KC_GRV
#define MN_EXCL LSFT(KC_1)
#define MN_LESS KC_NUBS
#define MN_GRTR LSFT(KC_NUBS)
#define MN_EQAL LSFT(KC_0)
#define MN_AMPS LSFT(KC_6)
#define MN_AT RALT(KC_Q)
#define MN_BKSL RALT(KC_MINS)
#define MN_SLSH LSFT(KC_7)
#define MN_BRCL RALT(KC_7)
#define MN_BRCR RALT(KC_0)
#define MN_ASTK LSFT(KC_RBRC)
#define MN_QUES LSFT(KC_MINS)
#define MN_PARL LSFT(KC_8)
#define MN_PARR LSFT(KC_9)
#define MN_MINS KC_SLSH
#define MN_COLN LSFT(KC_DOT)
#define MN_NUMB KC_NUHS
#define MN_DOLL LSFT(KC_4)
#define MN_BAR RALT(KC_NUBS)
#define MN_TILD RALT(KC_RBRC)
#define MN_GRAV LSFT(KC_EQL)
#define MN_PLUS KC_RBRC
#define MN_PERC LSFT(KC_5)
#define MN_QDBL LSFT(KC_2)
#define MN_APOS LSFT(KC_NUHS)
#define MN_SEMI LSFT(KC_COMM)

    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │     │ ª │ º │ № │   │ · │   │                     │   │ £ │ ¤ │ / │ * │ - │      │
     * ├─────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │     │ ⇞ │ ⌫ │ ⇡ │ ⌦ │ ⇟ │   │                     │   │ ¡ │ 7 │ 8 │ 9 │ + │      │
     * ├─────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │     │ ⇱ │ ⇠ │ ⇣ │ ⇢ │ ⇲ ├───┘                     └───┤ ¿ │ 4 │ 5 │ 6 │ ; │      │
     * ├─────┼───┼───┼───┼───┼───┤                             ├───┼───┼───┼───┼───┼──────┤
     * │     │ ⌧ │ ⇥ │ ⎀ │ ⏎ │ ↶ │                             │ : │ 1 │ 2 │ 3 │ ⏎ │      │
     * └─┬───┼───┼───┼───┼───┼───┘ ┌───┬───┬───┐ ┌───┬───┬───┐ └───┼───┼───┼───┼───┼───┬──┘
     *   │   │   │   │   │   │     │   │   │   │ │   │   │   │     │ 0 │ , │ . │ ⇥ │   │
     *   └───┴───┴───┴───┴───┘     ├───┼───┼───┤ ├───┼───┼───┤     └───┴───┴───┴───┴───┘
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             └───┴───┴───┘ └───┴───┴───┘
     * missing ˙, ˝, " deadkeys
     https://git.neo-layout.org/neo/neo-layout/src/branch/master/linux/xmodmap/bone_de.xmodmap
     https://docs.qmk.fm/#/keycodes
     https://neo-layout.org/Layouts/mine/
     */
#define MN_ORDF RSA(KC_F)
#define MN_ORDM RSA(KC_0)
#define MN_NUMO KC_NO_IDEA
#define MN_CPER KC_NO_IDEArueir
#define MN_STRL RSA(KC_3)
#define MN_CURR RSA(KC_4)
#define MN_EXCD RSA(KC_1)
#define MN_QUED RSA(KC_MINS)
#define MN_UNDO LCTL(KC_Y)
#define MN_COPY LCTL(KC_C)
#define MN_PAST LCTL(KC_V)
#define MN_CUT LCTL(KC_X)
#define MN_FIND LCTL(KC_F)

#define MN_SOUT LSFT(KC_F11)
#define MN_CWIN LALT(KC_F4)
#define MN_ATOC LCTL(KC_SPC)
#define MN_FILE LGUI(KC_E)
#define MN_TERM LGUI(KC_R)
#define MN_EXEC LALT(KC_F2)

#define MN_OSL3 OSL(2)
#define MN_OSL4 OSL(3)
#define MN_OSLM OSL(4)

#define MN_SWL3 TG(2)
#define MN_SWL4 TG(3)

#define MN_SWML TG(4)
#define MN_SWQW TG(1)
#define MN_SWGL TG(5)

#define MN_CTSP CTL_T(KC_SPC)
#define MN_L3SP LT(2, KC_SPC)
#define MN_LMEN LT(4, KC_ENT)
#define MN_CTEN CTL_T(KC_ENT)
#define MN_SHSP SFT_T(KC_SPC)
#define MN_ALEN ALT_T(KC_ENT)
#define MN_MLBS LT(4, KC_BSPC)
#define MN_L3BS LT(2, KC_BSPC)
#define MN_L4DL LT(3, KC_DEL)
#define MN_L4BS LT(3, KC_BSPC)
#define MN_L3DL LT(2, KC_DEL)
#define MN_L1RS TO(0)
#define MN_CTEN CTL_T(KC_ENT)
#define MN_ALBS ALT_T(KC_BSPC)

// Enums defined for all examples:
enum {
    TD_LEFT,
    TD_RIGHT,
    TD_BACKSPACE
};

#define MN_TCLE TD(TD_LEFT)
#define MN_TCRI TD(TD_RIGHT)
#define MN_TCBS TD(TD_BACKSPACE)

typedef struct {
    uint16_t key;
    uint16_t mod;
} tap_dance_mod_repeat_t;

void tap_dance_mod_repeat_each_tap(qk_tap_dance_state_t *state, void *user_data) {
    tap_dance_mod_repeat_t *mod_repeat = (tap_dance_mod_repeat_t *)user_data;

    if(state->count == 1) {
        register_code16(mod_repeat->key);
    }
    else {
        unregister_code16(mod_repeat->key);
        wait_ms(50);
        register_code16(mod_repeat->mod);
        wait_ms(50);
        register_code16(mod_repeat->key);
    }
}

void tap_dance_mod_repeat_finished(qk_tap_dance_state_t *state, void *user_data) {
}

void tap_dance_mod_repeat_reset(qk_tap_dance_state_t *state, void *user_data) {
    tap_dance_mod_repeat_t *mod_repeat = (tap_dance_mod_repeat_t *)user_data;

    unregister_code16(mod_repeat->key);

    if(state->count > 1) {
        wait_ms(50);
        unregister_code16(mod_repeat->mod);
    }
}

#define ACTION_TAP_DANCE_MOD_REPEAT(key, mod) \
    { .fn = {tap_dance_mod_repeat_each_tap, tap_dance_mod_repeat_finished, tap_dance_mod_repeat_reset}, .user_data = (void *)&((tap_dance_mod_repeat_t){key, mod}), }

qk_tap_dance_action_t tap_dance_actions[] = {
    [TD_LEFT] = ACTION_TAP_DANCE_MOD_REPEAT(KC_LEFT, KC_LCTL),
    [TD_RIGHT] = ACTION_TAP_DANCE_MOD_REPEAT(KC_RIGHT, KC_LCTL),
    [TD_BACKSPACE] = ACTION_TAP_DANCE_MOD_REPEAT(KC_BSPC, KC_LCTL),
};

    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │     │ ° │ § │ ℓ │ » │ « │   │                     │   │ $ │ € │ „ │ “ │ ” │    — │
     * ├─────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │     │ J │ L │ U │ A │ Q │   │                     │   │ W │ B │ D │ G │ Y │    ẞ │
     * ├─────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │     │ C │ R │ I │ E │ O ├───┘                     └───┤ M │ N │ T │ S │ H │    Z │
     * ├─────┼───┼───┼───┼───┼───┤                             ├───┼───┼───┼───┼───┼──────┤
     * │     │ V │ X │ Ü │ Ä │ Ö │                             │ P │ F │ – │ • │ K │      │
     * └─┬───┼───┼───┼───┼───┼───┘ ┌───┬───┬───┐ ┌───┬───┬───┐ └───┼───┼───┼───┼───┼───┬──┘
     *   │   │   │   │   │   │     │   │   │   │ │   │   │   │     │   │   │   │   │   │
     *   └───┴───┴───┴───┴───┘     ├───┼───┼───┤ ├───┼───┼───┤     └───┴───┴───┴───┴───┘
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             └───┴───┴───┘ └───┴───┴───┘
     */

#define MN_RING LSFT(KC_GRV)
#define MN_PRGR LSFT(KC_3)
#define MN_UCSS RSA(KC_S)
#define MN_DASH RSA(KC_SLSH)

const key_override_t key_override_one = ko_make_basic(MOD_MASK_SHIFT, KC_1, MN_RING);
const key_override_t key_override_two = ko_make_basic(MOD_MASK_SHIFT, KC_2, MN_PRGR);
const key_override_t key_override_six = ko_make_basic(MOD_MASK_SHIFT, KC_6, MN_DOLL);
const key_override_t key_override_seven = ko_make_basic(MOD_MASK_SHIFT, KC_7, MN_EURO);
const key_override_t key_override_sharps = ko_make_basic(MOD_MASK_SHIFT, KC_MINS, MN_UCSS);
const key_override_t key_override_comma = ko_make_basic(MOD_MASK_SHIFT, KC_COMM, MN_MINS);
const key_override_t key_override_minus = ko_make_basic(MOD_MASK_SHIFT, KC_SLSH, MN_DASH);

// This globally defines all key overrides to be used
const key_override_t **key_overrides = (const key_override_t *[]){
    &key_override_one,
    &key_override_two,
    &key_override_six,
    &key_override_seven,
    &key_override_sharps,
    &key_override_comma,
    &key_override_minus,
    NULL // Null terminate the array of overrides!
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │     │ 1 │ 2 │ 3 │ 4 │ 5 │   │                     │   │ 6 │ 7 │ 8 │ 9 │ 0 │    - │
     * ├─────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │     │ J │ L │ U │ A │ Q │   │                     │   │ W │ B │ D │ G │ Y │    ß │
     * ├─────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │     │ C │ R │ I │ E │ O ├───┘                     └───┤ M │ N │ T │ S │ H │    Z │
     * ├─────┼───┼───┼───┼───┼───┤                             ├───┼───┼───┼───┼───┼──────┤
     * │     │ V │ X │ Ü │ Ä │ Ö │                             │ P │ F │ , │ . │ K │      │
     * └─┬───┼───┼───┼───┼───┼───┘ ┌───┬───┬───┐ ┌───┬───┬───┐ └───┼───┼───┼───┼───┼───┬──┘
     *   │   │   │   │   │   │     │   │   │   │ │   │   │   │     │   │   │   │   │   │
     *   └───┴───┴───┴───┴───┘     ├───┼───┼───┤ ├───┼───┼───┤     └───┴───┴───┴───┴───┘
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             └───┴───┴───┘ └───┴───┴───┘
     * missing: ^, `, ', M3 dead keys (KC_GRV, KC_EQL, KC_NUHS, KC_RBRC)
     * mods: alt, ctrl, shift, M3, M4, M5
     */
    [0] = LAYOUT_default(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_VOLU,                   KC_MSTP, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_SLSH,
        KC_TAB,  KC_J,    KC_L,    KC_U,    KC_A,    KC_Q,    KC_VOLD,                   KC_MPLY, KC_W,    KC_B,    KC_D,    KC_G,    KC_Z,    KC_MINS,
        KC_ESC,  KC_C,    KC_R,    KC_I,    KC_E,    KC_O,                                        KC_M,    KC_N,    KC_T,    KC_S,    KC_H,    KC_Y,
        OS_LSFT, KC_V,    KC_X,    KC_LBRC, KC_QUOT, KC_SCLN,                                     KC_P,    KC_F,    KC_COMM, KC_DOT,  KC_K,    KC_RSFT,
        KC_LCTL, KC_LGUI, KC_APP,  KC_LGUI, MN_OSL3,                                                       MN_OSL4, KC_RGUI, KC_APP,  KC_PSCR, KC_RCTL,
                                                     OS_LSFT, MN_OSLM, MN_SWGL, MN_SWQW, KC_LALT, MN_OSL4,
                                                     MN_CTSP, MN_ALEN, MN_L4BS, MN_L3BS, MN_OSLM, OS_LSFT
    ),
    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │     │ 1 │ 2 │ 3 │ 4 │ 5 │   │                     │   │ 6 │ 7 │ 8 │ 9 │ 0 │   ß  │
     * ├─────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │     │ Q │ W │ E │ R │ T │   │                     │   │ Z │ U │ I │ O │ P │   Ü  │
     * ├─────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │     │ A │ S │ D │ F │ G ├───┘                     └───│ H │ J │ K │ L │ Ö │   Ä  │
     * ├─────┼───┼───┼───┼───┼───┤                             ├───┼───┼───┼───┼───┼──────┤
     * │     │ Y │ X │ C │ V │ B │                             │ N │ M │ , │ . │ / │      │
     * └─┬───┼───┼───┼───┼───┼───┘ ┌───┬───┬───┐ ┌───┬───┬───┐ └───┼───┼───┼───┼───┼───┬──┘
     *   │   │   │   │   │   │     │   │   │   │ │   │   │   │     │   │   │   │   │   │
     *   └───┴───┴───┴───┴───┘     ┌───┼───┼───┤ ├───┼───┼───┐     └───┴───┴───┴───┴───┘
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             └───┴───┴───┘ └───┴───┴───┘
     */
    [1] = LAYOUT_default(
        MN_L1RS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,                   KC_TRNS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TRNS, KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_TRNS,                   KC_TRNS, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_TRNS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_TRNS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │     │ ¹ │ ² │ ³ │ › │ ‹ │   │                     │   │ ¢ │ ¥ │ ‚ │ ‘ │ ’ │      │
     * ├─────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │     │ … │ _ │ [ │ ] │ ^ │   │                     │   │ ! │ < │ > │ = │ & │    @ │
     * ├─────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │     │ \ │ / │ { │ } │ * ├───┘                     └───┤ ? │ ( │ ) │ - │ : │      │
     * ├─────┼───┼───┼───┼───┼───┤                             ├───┼───┼───┼───┼───┼──────┤
     * │     │ # │ $ │ | │ ~ │ ` │                             │ + │ % │ " │ ' │ ; │      │
     * └─┬───┼───┼───┼───┼───┼───┘ ┌───┬───┬───┐ ┌───┬───┬───┐ └───┼───┼───┼───┼───┼───┬──┘
     *   │   │   │   │   │   │     │   │   │   │ │   │   │   │     │   │   │   │   │   │
     *   └───┴───┴───┴───┴───┘     ├───┼───┼───┤ ├───┼───┼───┤     └───┴───┴───┴───┴───┘
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             └───┴───┴───┘ └───┴───┴───┘
     * missing °, / deadkeys, ſ, ↻
     */
    [2] = LAYOUT_default(
        QK_BOOT, KC_NO,   MN_2SUP, MN_3SUP, MN_SGLL, MN_SGLR, KC_MPRV,                   KC_MSEL, MN_EURO, MN_YEN,  KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
        KC_TRNS, MN_ELIP, MN_UNDS, MN_BRKL, MN_BRKR, MN_CIRC, KC_MNXT,                   KC_MUTE, MN_EXCL, MN_LESS, MN_GRTR, MN_EQAL, MN_AMPS, MN_AT,
        KC_TRNS, MN_BKSL, MN_SLSH, MN_BRCL, MN_BRCR, MN_ASTK,                                     MN_QUES, MN_PARL, MN_PARR, MN_MINS, MN_COLN, KC_TRNS,
        KC_TRNS, MN_NUMB, MN_DOLL, MN_BAR,  MN_TILD, MN_GRAV,                                     MN_PLUS, MN_PERC, MN_QDBL, MN_APOS, MN_SEMI, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │     │ ª │ º │ № │   │ · │   │                     │   │ £ │ ¤ │ / │ * │ - │      │
     * ├─────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │     │ ⇞ │ ⌫ │ ⇡ │ ⌦ │ ⇟ │   │                     │   │ ¡ │ 7 │ 8 │ 9 │ + │      │
     * ├─────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │     │ ⇱ │ ⇠ │ ⇣ │ ⇢ │ ⇲ ├───┘                     └───┤ ¿ │ 4 │ 5 │ 6 │ ; │      │
     * ├─────┼───┼───┼───┼───┼───┤                             ├───┼───┼───┼───┼───┼──────┤
     * │     │ ⌧ │ ⇥ │ ⎀ │ ⏎ │ ↶ │                             │ = │ 1 │ 2 │ 3 │ : │      │
     * └─┬───┼───┼───┼───┼───┼───┘ ┌───┬───┬───┐ ┌───┬───┬───┐ └───┼───┼───┼───┼───┼───┬──┘
     *   │   │   │   │   │   │     │   │   │   │ │   │   │   │     │ 0 │ , │ . │ ⇥ │ ⏎ │
     *   └───┴───┴───┴───┴───┘     ├───┼───┼───┤ ├───┼───┼───┤     └───┴───┴───┴───┴───┘
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             └───┴───┴───┘ └───┴───┴───┘
     * missing ˙, ˝, " deadkeys
     */
    [3] = LAYOUT_default(
        KC_TRNS, MN_ORDF, MN_ORDM, KC_NO,   KC_NO,   KC_NO,   MN_EXEC,                   MN_FILE, MN_STRL, MN_CURR, KC_PSLS, KC_PAST, KC_PMNS, KC_TRNS,
        KC_TRNS, KC_PGUP, MN_TCBS, KC_UP,   KC_DEL,  KC_PGDN, KC_LGUI,                   MN_TERM, MN_EXCD, KC_7,    KC_8,    KC_9,    KC_PPLS, KC_TRNS,
        KC_TRNS, KC_HOME, MN_TCLE, KC_DOWN, MN_TCRI, KC_END,                                      MN_QUED, KC_4,    KC_5,    KC_6,    MN_SEMI, KC_TRNS,
        KC_TRNS, MN_PAST, MN_CUT,  MN_COPY, MN_FIND, MN_UNDO,                                     MN_EQAL, KC_1,    KC_2,    KC_3,    MN_COLN, KC_TAB,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                                       KC_TRNS, KC_0,    KC_COMM, KC_DOT,  KC_PENT,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │     │ ª │ º │ № │   │ · │   │                     │   │ £ │ ¤ │ / │ * │ - │      │
     * ├─────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │     │ ⇞ │ ⌫ │ ⇡ │ ⌦ │ ⇟ │   │                     │   │ ¡ │ 7 │ 8 │ 9 │ + │      │
     * ├─────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │     │ ⇱ │ ⇠ │ ⇣ │ ⇢ │ ⇲ ├───┘                     └───┤ ¿ │ 4 │ 5 │ 6 │ ; │      │
     * ├─────┼───┼───┼───┼───┼───┤                             ├───┼───┼───┼───┼───┼──────┤
     * │     │ ⌧ │ ⇥ │ ⎀ │ ⏎ │ ↶ │                             │ = │ 1 │ 2 │ 3 │ : │      │
     * └─┬───┼───┼───┼───┼───┼───┘ ┌───┬───┬───┐ ┌───┬───┬───┐ └───┼───┼───┼───┼───┼───┬──┘
     *   │   │   │   │   │   │     │   │   │   │ │   │   │   │     │ 0 │ , │ . │ ⇥ │ ⏎ │
     *   └───┴───┴───┴───┴───┘     ├───┼───┼───┤ ├───┼───┼───┤     └───┴───┴───┴───┴───┘
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             │   │   │   │ │   │   │   │
     *                             └───┴───┴───┘ └───┴───┴───┘
     * 
     */
    [4] = LAYOUT_default(
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,                    KC_F12,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
        KC_TRNS, KC_F9,   KC_F10,  KC_F11,  MN_SOUT, KC_TRNS, QK_BOOT,                   KC_TRNS, KC_WH_L, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_R, KC_TRNS,
        KC_TRNS, KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_TRNS,                                     KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                     KC_BTN3, KC_BTN4, KC_BTN5, KC_BTN6, KC_BTN7, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MN_L1RS,                                                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     MN_ATOC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [5] = LAYOUT_default(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_F1,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_G,    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,                                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_H,    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_N,                                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_LCTL, KC_LGUI, KC_APP,  KC_LALT, KC_V,                                                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_SPC,  KC_R,    KC_ENT,  KC_TRNS, KC_TRNS, KC_TRNS
    )
};
