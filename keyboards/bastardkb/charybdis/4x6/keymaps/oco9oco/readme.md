
[_BASE] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     KC_ESC, MS_WHLL, MS_BTN2, MS_BTN3, MS_BTN1, MS_WHLR,          __________________NUMROW_R_________________, KC_MINS,
     KC_TAB, __________________QWERTY_L1________________,          __________________QWERTY_R1________________, KC_EQL,
     SFT_CAPS, __________________QWERTY_SACS_L2___________,          __________________QWERTY_R2________________, KC_QUOT,
     KC_LGUI,  KC_Z,    KC_X,     KC_C,     KC_V,     KC_B,          __________________QWERTY_HOME_R3___________, KC_BSLS,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                              THUMB_L1,THUMB_L2, THUMB_L3,         THUMB_R3,THUMB_R2,
                                       KC_LALT,  TG(_BASE_NOMOD),  THUMB_R1
//                            ╰───────────────────────────╯       ╰──────────────────╯
),

[_BASE_NOMOD] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     KC_ESC,  MS_WHLL, MS_BTN2, MS_BTN3, MS_BTN1, MS_WHLR,          __________________NUMROW_R_________________, KC_MINS,
     ALT_TAB, __________________QWERTY_L1________________,          __________________QWERTY_R1________________, KC_EQL,
     _______, __________________QWERTY_L2_SFTA___________,          __________________QWERTY_R2________________, KC_QUOT,
     _______, __________________QWERTY_L3________________,          __________________QWERTY_HOME_R3___________, KC_BSLS,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                              THUMB_L1,THUMB_L2, THUMB_L3,         THUMB_R3,THUMB_R2,
                                        _______, _______,         THUMB_R1
//                            ╰───────────────────────────╯       ╰──────────────────╯
),


[_IPC] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     ALT_F4,  C(KC_F1),XXXXXXX, SCRNSHOT,INV_DSP, TO(_ONEHAND),     XXXXXXX,   KC_LBRC, KC_RBRC, KC_LPRN, KC_RPRN, _______,
     ALT_TAB, INV_DSP, XXXXXXX, CLASS_A, XXXXXXX, XXXXXXX,          KC_GRV,    _________NUM_789_________, XXXXXXX, _______,
     USR_LNG, IPC(A),  IPC(S),  IPC_D_,  IPC(F),  KC_DOT,           AT_IPC,    _________NUM_456_________, KC_COLN, KC_DQUO,
     KC_LGUI, IPC(Z), HWP_CITE, IPC(C),  KC_EQL,  KC_ENT,           HWP_MACRO, _________NUM_123_________, _______, KC_PIPE,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                                TO(_DOOM), _______, _______,/*      */_______, LT(_NAV, KC_0),
                                           XXXXXXX, _______,/*      */IME_CHG
//                            ╰───────────────────────────╯       ╰──────────────────╯
),

  [_DOOM] = LAYOUT_charybdis_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    KC_ESC, __________________NUMROW_L_________________,                   XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,  
    KC_TAB,  KC_T,    KC_Q,    KC_W,    KC_E,    KC_R,                     TO(_BASE),DPI_MOD,DPI_RMOD,XXXXXXX,XXXXXXX, XXXXXXX,
    KC_Y,    KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,                     MS_WHLL, MS_WHLU,MS_BTN4,MS_BTN5,XXXXXXX, DPI_MOD,
    KC_U,    KC_B,    KC_Z,    KC_X,    KC_C,    KC_V,                     MS_WHLR,MS_WHLD,MS_BTN1,MS_BTN2,MS_BTN3, DPI_RMOD,
                               KC_F,    KC_SPC,  KC_G,           KC_ENT, THUMB_R3, 
                                        KC_I, TO(_BASE),         THUMB_R2
),

// [_NUM] = LAYOUT_charybdis_wrapper(
// // ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
//      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
//      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX, XXXXXXX, 
//      XXXXXXX, XXXXXXX, MS_BTN2, NUM(D),  MS_BTN1, XXXXXXX,          XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX, 
//      XXXXXXX, XXXXXXX, HWP_CITE,XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, KC_1,    KC_2,    KC_3,    XXXXXXX, XXXXXXX, 
// // ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
//                                 _______, _______, _______,/*      */_______, LT(_NUM, KC_0),
//                                          _______, _______,/*      */IME_CHG
// //                            ╰───────────────────────────╯       ╰──────────────────╯
// ),
[_NAV] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,   KC_F5,           XXXXXXX, A(KC_7), A(KC_5), A(KC_9), A(KC_0), XXXXXXX,
     ALT_TAB, NAV_NS,LCA(KC_J),LCA(KC_K),LCA(KC_L), KC_F6,          S(A(KC_3)), A(KC_4), A(KC_8), A(KC_6), XXXXXXX, XXXXXXX,
     KC_LGUI, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT,  KC_F7,           KC_INS,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, DPI_MOD,
     G(C(KC_D)), NAV(Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B),        KC_APP,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  DPI_RMOD,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                                 USR_LNG, KC_BSPC, KC_DEL,/*      */_______, _______,
                                         _______, _______,/*      */_______
//                            ╰───────────────────────────╯       ╰──────────────────╯
),
[_MOUSE] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     _______, CTRL_F1, KC_F2,   KC_F3,   ALT_F4,  KC_F5,            XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
     KC_U,    MS_BTN4, MS_WHLD, MS_UP, MS_WHLU, KC_F6,            XXXXXXX, MS_WHLL, MS_WHLR, XXXXXXX, XXXXXXX, QK_MAKE,
     KC_P,    KC_LSFT, MS_LEFT, MS_DOWN, MS_RGHT, KC_F7,            XXXXXXX, MS_ACL0, MS_BTN1, MS_BTN2, MS_BTN3, KC_ENT,
     KC_X,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, C(KC_B),          KC_APP,  MS_ACL0, MS_BTN4, MS_BTN5, XXXXXXX, XXXXXXX,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                                 _______, KC_BSPC, KC_DEL,/*      */_______, _______,
                                         _______, _______,/*      */_______
//                            ╰───────────────────────────╯       ╰──────────────────╯
),

[_FUNC] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     _______, AS_OFF,  AS_TOGG, AS_DOWN, AS_UP,   AS_RPT,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
     XXXXXXX, TO(_BASE_NOMOD), TO(_ONEHAND), DT_DOWN, DT_UP,   DT_PRNT,          KC_F12,  KC_F7,   KC_F8,   KC_F9,   XXXXXXX, XXXXXXX,
     XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,          KC_F11,  KC_F4,   KC_F5,   KC_F6,   XXXXXXX, XXXXXXX,
     XXXXXXX, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B),          KC_F10,  KC_F1,   KC_F2,   KC_F3,   XXXXXXX, XXXXXXX,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                                _______, _______, _______,/*      */_______, _______,
                                         _______, _______,/*      */_______
//                            ╰───────────────────────────╯       ╰──────────────────╯
),

[_ONEHAND] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     _______, CTRL_F1, C(KC_W), XXXXXXX, ALT_F4,  KC_F5,           S_D_MOD,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
     XXXXXXX, _______, _______, DRGSCRL, A(KC_S), KC_F6,           S_D_RMOD,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAKE,
     ALT_TAB, KC_LSFT, LT(_ONEHAND,MS_BTN2), SNIPING, MS_BTN1, KC_F7, DPI_MOD, KC_ENT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     KC_ENT,  C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B),         DPI_RMOD, A(KC_S), MS_BTN1, MS_BTN2, SNIPING, XXXXXXX,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                                _______, _______, _______,/*      */_______, _______,
                                        C(KC_TAB), _______,/*      */TO(_BASE)
//                            ╰───────────────────────────╯       ╰──────────────────╯
),
};
