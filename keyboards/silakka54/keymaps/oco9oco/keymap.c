
#include "oco9oco.h" //look for users/oco9oco/
//qmk compile -j 0 -kb keycapsss/kimiko -km oco9oco
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//clang-format off

[_BASE] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
     KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                         __________________NUMROW_R_________________, KC_MINS,
     KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                         __________________QWERTY_R1________________, KC_EQL,
     SFT_CAPS, __________________QWERTY_SACS_L2___________,        __________________QWERTY_R2________________, KC_QUOT,
     G_LNG,  KC_Z, LALT_T(KC_X), KC_C, KC_V, KC_B,                 __________________QWERTY_HOME_R3___________, KC_BSLS,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                                    THUMB_L1,THUMB_L2,THUMB_L3,         THUMB_R3,THUMB_R2,THUMB_R1
),

[_IPC] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, PDF_HL,  KC_P,    KC_X,    ALT_F4,  XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MINS,
    _______, HAEN_B,  HAEN_C,  CLASS_E, CLASS_A, KC_SLSH,                            KC_GRV,  _________NUM_789_________, KC_RBRC, KC_PLUS,
    _______, IPC(A),  IPC(S),  _IPC_MIN, IPC_COMM,KC_DOT,                             XXXXXXX, _________NUM_456_________, KC_COLN, KC_DQUO,
    _______, IPC(Z),  HWP_CITE,IPC(C),  KC_EQL,  KC_BSLS,                             KC_RBRC, _________NUM_123_________, _______, KC_PIPE,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                                        _______, _______, _______,          _______, LT(_NAV, KC_0), _______
),

[_NAV] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
     _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,   KC_F5,           XXXXXXX, A(KC_7), A(KC_5), A(KC_9), A(KC_0), XXXXXXX,
     ALT_TAB, NAV_NS,LCA(KC_J),LCA(KC_K),LCA(KC_L), KC_F6,          S(A(KC_3)), A(KC_4), A(KC_8), A(KC_6), XXXXXXX, XXXXXXX,
     KC_LGUI, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,  KC_F7,           KC_INS,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX,
     G(C(KC_D)), NAV(Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B),        KC_APP,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  XXXXXXX,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                                         BRKT,    KC_BSPC, KC_DEL,           _______, KC_TRNS, _______  
),

[_MOUSE] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
     _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
     KC_U,    MS_BTN4, MS_WHLD, MS_UP, MS_WHLU, KC_F6,            XXXXXXX, MS_WHLL, MS_WHLR, XXXXXXX, XXXXXXX, QK_MAKE,
     KC_P,    KC_LSFT, MS_LEFT, MS_DOWN, MS_RGHT, KC_F7,            XXXXXXX, MS_ACL0, MS_BTN1, MS_BTN2, MS_BTN3, KC_ENT,
     KC_X,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, C(KC_B),          KC_APP,  MS_ACL0, MS_BTN4, MS_BTN5, XXXXXXX, XXXXXXX,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                                 KC_LCTL, KC_SPC,  KC_ENT,                          KC_TRNS, _______, _______
),

[_FUNC] = LAYOUT_kimiko_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            KC_F12, KC_F7,   KC_F8,  KC_F9,    XXXXXXX,  XXXXXXX,
    XXXXXXX, KC_LSFT, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,                            KC_F11, KC_F4,   KC_F5,   KC_F6,   XXXXXXX,   XXXXXXX,
    XXXXXXX, KC_LGUI, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                            KC_F10, KC_F1,   KC_F2,   KC_F3,   XXXXXXX,   XXXXXXX,
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
                               _______, _______, _______,          _______, _______, KC_TRNS
),

// [_ONEHAND] = LAYOUT_kimiko_wrapper(
// // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
//     KC_ESC,  C(KC_F1),XXXXXXX, XXXXXXX, A(KC_F4),XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//     KC_TAB,  MS_WHLU, MS_BTN2, KC_UP,   MS_BTN1, XXXXXXX,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//     XXXXXXX, MS_WHLD, KC_LEFT, KC_DOWN, KC_RGHT, KC_BSPC,                            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
//     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_DEL,  TO_BASE,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
// // |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
//                       KC_LGUI, KC_LALT, KC_LCTL, KC_SPC,  KC_ENT,         TO(_MOUSE),_______, _______, _______, _______
// ),

};
