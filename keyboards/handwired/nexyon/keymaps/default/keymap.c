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

#define MN_OSL3 OSL(1)
#define MN_OSL4 OSL(2)
#define MN_OSLM OSL(3)

#define MN_SWL3 TG(1)
#define MN_SWL4 TG(2)

#define MN_SWML TG(3)
#define MN_SWQW TG(4)
#define MN_SWGL TG(5)

#define MN_CTSP CTL_T(KC_SPC)
#define MN_L3SP LT(1, KC_SPC)
#define MN_LMEN LT(3, KC_ENT)
#define MN_CTEN CTL_T(KC_ENT)
#define MN_SHSP SFT_T(KC_SPC)
#define MN_ALEN ALT_T(KC_ENT)
#define MN_MLBS LT(3, KC_BSPC)
#define MN_L3BS LT(1, KC_BSPC)
#define MN_L4DL LT(2, KC_DEL)
#define MN_L4BS LT(2, KC_BSPC)
#define MN_L3DL LT(1, KC_DEL)
#define MN_L1RS TO(0)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬───┬───┬───┬───┬───┬───┐                     ┌───┬───┬───┬───┬───┬───┬──────┐
     * │     │ 1 │ 2 │ 3 │ 4 │ 5 │   │                     │   │ 6 │ 7 │ 8 │ 9 │ 0 │    - │
     * ├─────┼───┼───┼───┼───┼───┼───┤                     ├───┼───┼───┼───┼───┼───┼──────┤
     * │     │ J │ L │ U │ A │ Q │   │                     │   │ W │ B │ D │ G │ Y │    Z │
     * ├─────┼───┼───┼───┼───┼───┤   │                     │   ├───┼───┼───┼───┼───┼──────┤
     * │     │ C │ R │ I │ E │ O ├───┘                     └───┤ M │ N │ T │ S │ H │    ß │
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
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MSTP,                   KC_F5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_SLSH,
        KC_TAB,  KC_J,    KC_L,    KC_U,    KC_A,    KC_Q,    KC_MPLY,                   KC_F4,   KC_W,    KC_B,    KC_D,    KC_G,    KC_Z,    KC_Y,
        KC_ESC,  KC_C,    KC_R,    KC_I,    KC_E,    KC_O,                                        KC_M,    KC_N,    KC_T,    KC_S,    KC_H,    KC_MINS,
        OS_LSFT, KC_V,    KC_X,    KC_LBRC, KC_QUOT, KC_SCLN,                                     KC_P,    KC_F,    KC_COMM, KC_DOT,  KC_K,    KC_RSFT,
        KC_LCTL, KC_LGUI, KC_APP,  KC_LALT, MN_OSL3,                                                       MN_OSL4, KC_RGUI, KC_APP,  KC_PSCR, KC_RCTL,
                                                     MN_SWL3, MN_SWL3, MN_SWGL, MN_SWQW, MN_SWML, MN_SWL4,
                                                     MN_CTSP, MN_ALEN, MN_L4BS, MN_L3DL, MN_OSLM, OS_LSFT
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
    [1] = LAYOUT_default(
        KC_TRNS, KC_NO,   MN_2SUP, MN_3SUP, MN_SGLL, MN_SGLR, KC_TRNS,                   KC_TRNS, MN_EURO, MN_YEN,  KC_NO,   KC_NO,   KC_NO,   KC_TRNS,
        KC_TRNS, MN_ELIP, MN_UNDS, MN_BRKL, MN_BRKR, MN_CIRC, QK_BOOT,                   KC_TRNS, MN_EXCL, MN_LESS, MN_GRTR, MN_EQAL, MN_AMPS, MN_AT,
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
    [2] = LAYOUT_default(
        KC_TRNS, MN_ORDF, MN_ORDM, KC_NO,   KC_NO,   KC_NO,   KC_TRNS,                   KC_TRNS, MN_STRL, MN_CURR, KC_PSLS, KC_PAST, KC_PMNS, KC_TRNS,
        KC_TRNS, KC_PGUP, KC_BSPC, KC_UP,   KC_DEL,  KC_PGDN, QK_BOOT,                   KC_TRNS, MN_EXCD, KC_P7,   KC_P8,   KC_P9,   KC_PPLS, KC_TRNS,
        KC_TRNS, KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END,                                      MN_QUED, KC_P4,   KC_P5,   KC_P6,   MN_SEMI, KC_TRNS,
        KC_TRNS, KC_ESC,  KC_TAB,  KC_INS,  KC_ENT,  MN_UNDO,                                     MN_EQAL, KC_P1,   KC_P2,   KC_P3,   MN_COLN, KC_TAB,
        KC_TRNS, MN_PAST, MN_CUT,  MN_COPY, KC_TRNS,                                                       KC_TRNS, KC_P0,   KC_PDOT, KC_DOT,  KC_PENT,
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
     // TO PUT:  KC_MPRV, KC_MUTE, KC_MNXT, KC_VOLD, KC_VOLU, KC_MSTP, KC_MPLY
    [3] = LAYOUT_default(
        KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F11,                    KC_F12,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT,                   KC_TRNS, KC_WH_L, KC_BTN1, KC_MS_U, KC_BTN2, KC_WH_R, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                     KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                     KC_BTN3, KC_BTN4, KC_BTN5, KC_BTN6, KC_BTN7, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MN_L1RS,                                                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
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
    [4] = LAYOUT_default(
        KC_TRNS, KC_1,   KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,                   KC_TRNS, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_TRNS, KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    QK_BOOT,                   KC_TRNS, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                        KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_TRNS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MN_L1RS,                                                       KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    ),
    [5] = LAYOUT_default(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_TRNS,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_F1,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    QK_BOOT,                   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_G,    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,                                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_H,    KC_LCTL, KC_Z,    KC_X,    KC_C,    KC_N,                                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_LCTL, KC_LGUI, KC_APP,  KC_LALT, KC_V,                                                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                                                     KC_SPC,  KC_R,    KC_ENT,  KC_TRNS, KC_TRNS, KC_TRNS
    )
};
