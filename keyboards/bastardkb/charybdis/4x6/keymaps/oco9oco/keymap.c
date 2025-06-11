/*
Copyright 2022 oco9oco <oco9oco@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "oco9oco.h" //look for users/oco9oco/


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
//clang-format off

/*
  [LAYER_BASE] = LAYOUT(
  // ╭──────────────────────────────────────────────────────╮ ╭──────────────────────────────────────────────────────╮
        KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,       KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,       KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  // ├──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────┤
       KC_LCTL,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,       KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_LALT,
  // ╰──────────────────────────────────────────────────────┤ ├──────────────────────────────────────────────────────╯
                                   KC_LGUI, KC_SPC,   LOWER,      RAISE,  KC_ENT,
                                           KC_LALT, KC_BSPC,     KC_DEL
  //                            ╰───────────────────────────╯ ╰──────────────────╯
),
 */


 /* 
 [_BASE] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     KC_ESC, __________________NUMROW_L_________________,          __________________NUMROW_R_________________, KC_MINS,
     KC_TAB, __________________QWERTY_L1________________,          __________________QWERTY_R1________________, KC_EQL,
     SFT_CAPS, __________________QWERTY_SACS_L2___________,          __________________QWERTY_R2________________, KC_QUOT,
     KC_ENT,  KC_Z,    KC_X,     KC_C,     KC_V,     KC_B,          __________________QWERTY_HOME_R3___________, KC_BSLS,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                              THUMB_L1,THUMB_L2, THUMB_L3,         THUMB_R3,THUMB_R2,
                                    TG(_BASE_NOMOD), TT(_ONEHAND),         THUMB_R1
//                            ╰───────────────────────────╯       ╰──────────────────╯
 */




[_BASE] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     KC_ESC, KC_WH_L, KC_BTN2, KC_BTN3, KC_BTN1, KC_WH_R,          __________________NUMROW_R_________________, KC_MINS,
     KC_TAB, __________________QWERTY_L1________________,          __________________QWERTY_R1________________, KC_EQL,
     SFT_CAPS, __________________QWERTY_SACS_L2___________,          __________________QWERTY_R2________________, KC_QUOT,
     KC_ENT,  KC_Z,    KC_X,     KC_C,     KC_V,     KC_B,          __________________QWERTY_HOME_R3___________, KC_BSLS,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                              THUMB_L1,THUMB_L2, THUMB_L3,         THUMB_R3,THUMB_R2,
                                    TG(_BASE_NOMOD), TG(_ONEHAND),         THUMB_R1
//                            ╰───────────────────────────╯       ╰──────────────────╯
),

[_BASE_NOMOD] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     KC_ESC,  KC_WH_L, KC_BTN2, KC_BTN3, KC_BTN1, KC_WH_R,          __________________NUMROW_R_________________, KC_MINS,
     ALT_TAB, __________________QWERTY_L1________________,          __________________QWERTY_R1________________, KC_EQL,
     _______, __________________QWERTY_L2_SFTA___________,          __________________QWERTY_R2________________, KC_QUOT,
     _______, __________________QWERTY_L3________________,          __________________QWERTY_HOME_R3___________, KC_PIPE,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                              THUMB_L1,THUMB_L2, THUMB_L3,         THUMB_R3,THUMB_R2,
                                    _______, TT(_ONEHAND),         THUMB_R1
//                            ╰───────────────────────────╯       ╰──────────────────╯
),


[_IPC] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     ALT_F4,  C(KC_F1),XXXXXXX, SCRNSHOT,INV_DSP, XXXXXXX,          KC_LBRC,  KC_RBRC, KC_LPRN, KC_RPRN, XXXXXXX, _______,
     ALT_TAB, INV_DSP, XXXXXXX, CLASS_A, XXXXXXX, XXXXXXX,          KC_GRV,   _________NUM_789_________, XXXXXXX, _______,
     USR_LNG, IPC(A),  IPC(S),  IPC_D_,  IPC(F),  KC_DOT,           AT_IPC,    _________NUM_456_________, KC_COLN, KC_DQUO,
     KC_LGUI, IPC(Z), HWP_CITE, IPC(C),  KC_EQL,  XXXXXXX,          HWP_MACRO, _________NUM_123_________, _______, _______,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                                TO(_DOOM), _______, _______,/*      */_______, LT(_NAV, KC_0),
                                           XXXXXXX, _______,/*      */IME_CHG
//                            ╰───────────────────────────╯       ╰──────────────────╯
),

  [_DOOM] = LAYOUT_charybdis_wrapper(
// |--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|--------|
    KC_ESC, __________________NUMROW_L_________________,                   __________________NUMROW_R_________________, KC_MINS,  
    KC_TAB,  KC_ENT,  KC_Q,    KC_W,    KC_E,    KC_R,                     TO(_BASE),XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,
    KC_TAB,  KC_LSFT, KC_A,    KC_S,    KC_D,    KC_G,                     XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,
    KC_ENT,  KC_Z,    KC_X,    KC_4,    KC_V,    KC_B,                     XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX,XXXXXXX, XXXXXXX,
                               KC_F,    KC_SPC,  KC_C,        KC_ENT, THUMB_R3, 
                                  XXXXXXX, TO(_BASE),         THUMB_R2
),

// [_NUM] = LAYOUT_charybdis_wrapper(
// // ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
//      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, 
//      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, KC_7,    KC_8,    KC_9,    XXXXXXX, XXXXXXX, 
//      XXXXXXX, XXXXXXX, KC_BTN2, NUM(D),  KC_BTN1, XXXXXXX,          XXXXXXX, KC_4,    KC_5,    KC_6,    XXXXXXX, XXXXXXX, 
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
     KC_U,    KC_BTN4, KC_WH_D, KC_MS_U, KC_WH_U, KC_F6,            XXXXXXX, KC_WH_L, KC_WH_R, XXXXXXX, XXXXXXX, QK_MAKE,
     KC_P,    KC_LSFT, KC_MS_L, KC_MS_D, KC_MS_R, KC_F7,            XXXXXXX, KC_ACL0, KC_BTN1, KC_BTN2, KC_BTN3, KC_ENT,
     KC_X,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, C(KC_B),          KC_APP,  KC_ACL0, KC_BTN4, KC_BTN5, XXXXXXX, XXXXXXX,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                                 _______, KC_BSPC, KC_DEL,/*      */_______, _______,
                                         _______, _______,/*      */_______
//                            ╰───────────────────────────╯       ╰──────────────────╯
),

[_FUNC] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     _______, AS_OFF,  AS_TOGG, AS_DOWN, AS_UP,   AS_RPT,           XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
     XXXXXXX, XXXXXXX, XXXXXXX, DT_DOWN, DT_UP,   DT_PRNT,          KC_F12,  KC_F7,   KC_F8,   KC_F9,   XXXXXXX, XXXXXXX,
     XXXXXXX, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,          KC_F11,  KC_F4,   KC_F5,   KC_F6,   XXXXXXX, XXXXXXX,
     XXXXXXX, C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_B),          KC_F10,  KC_F1,   KC_F2,   KC_F3,   XXXXXXX, XXXXXXX,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                                _______, _______, _______,/*      */_______, _______,
                                         _______, _______,/*      */_______
//                            ╰───────────────────────────╯       ╰──────────────────╯
),

[_ONEHAND] = LAYOUT_charybdis_wrapper(
// ╭──────────────────────────────────────────────────────╮       ╭──────────────────────────────────────────────────────╮
     _______, CTRL_F1, C(KC_W), XXXXXXX, ALT_F4,  KC_F5,          S_D_MOD,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT,
     ALT_TAB, _______, _______, DRGSCRL, A(KC_S), KC_F5,           S_D_RMOD,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_MAKE,
     ALT_TAB, KC_LSFT, LT(_ONEHAND,KC_BTN2), SNIPING, KC_BTN1, KC_F6, DPI_MOD, KC_ENT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     KC_ENT,  C(KC_Z), C(KC_X), C(KC_C), C(KC_V), KC_F7,         DPI_RMOD, A(KC_S), KC_BTN1, KC_BTN2, SNIPING, XXXXXXX,
// ╰──────────────────────────────────────────────────────┤       ├──────────────────────────────────────────────────────╯
                                _______, _______, _______,/*      */_______, _______,
                                         C(KC_TAB), _______,/*      */_______
//                            ╰───────────────────────────╯       ╰──────────────────╯
),
};
#ifdef CHORDAL_HOLD
const char chordal_hold_layout[MATRIX_ROWS][MATRIX_COLS] PROGMEM =
    LAYOUT(
        '*', '*', '*', '*', '*', '*',  '*', '*', '*', '*', '*', '*', 
        '*', '*', 'R', 'R', 'R', 'R',  'L', 'L', 'L', 'L', 'R', '*',  
        '*', 'L', '*', '*', 'L', '*',  'L', 'L', 'L', 'L', '*', '*', 
        '*', '*', '*', '*', '*', '*',  'L', 'L', '*', '*', '*', '*', 
                       '*', '*', '*',  '*', '*', 
                            '*', '*',  '*' 
    );

// char chordal_hold_handedness(keypos_t key) {
     // if (key.col == 0 || key.col == MATRIX_COLS - 1) {
     //      return '*';  // Exempt the outer columns.
     // }
     // // On split keyboards, typically, the first half of the rows are on the
     // // left, and the other half are on the right.
     // return key.row < MATRIX_ROWS / 2 ? 'L' : 'R';
     // }
#endif


#ifdef POINTING_DEVICE_AUTO_MOUSE_ENABLE
     void pointing_device_init_user(void) {
     set_auto_mouse_layer(_ONEHAND); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
     set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
     }

     layer_state_t layer_state_set_user(layer_state_t state) {
     // checks highest layer other than target layer
     switch(get_highest_layer(remove_auto_mouse_layer(state, true))) {
          case _MOUSE:
          case _NAV:
          case _IPC:
          case _FUNC:
          case _BASE_NOMOD:
               // remove_auto_mouse_target must be called to adjust state *before* setting enable
               state = remove_auto_mouse_layer(state, false);
               set_auto_mouse_enable(false);
               break;

          default:
               set_auto_mouse_enable(true);
               break;
     }
     // recommend that any code that makes adjustment based on auto mouse layer state would go here

     static bool mouse_layer_on = false;
     bool now_on = layer_state_cmp(state, _ONEHAND);    
     if (now_on && !mouse_layer_on) {
          // 마우스 레이어 진입 시
          tap_code(KC_F13);  // 예: 음소거 키 입력
     } else 
     if (!now_on && mouse_layer_on) {
          // 마우스 레이어 탈출 시
          tap_code(KC_F13);
     } 
     mouse_layer_on = now_on;
     return state;
     }

     bool is_mouse_record_kb(uint16_t keycode, keyrecord_t* record) {
     switch(keycode) {
          case KC_BTN1:
          case KC_BTN2:
          case KC_BTN3:
          case DRGSCRL:
          case DRG_TOG:
          case SNIPING:
          case ALT_TAB:
          case KC_LCTL:
          case KC_LSFT:
          case KC_F5:
          case KC_F6:
          case KC_F7:
               return true;
          default:
               return false;
     }
     return is_mouse_record_user(keycode, record);
     }
#endif

bool is_flow_tap_key(uint16_t keycode) {
    if ((get_mods() & (MOD_MASK_CG | MOD_BIT_LALT)) != 0) {
        return false; // Disable Flow Tap on hotkeys.
    }
    switch (get_tap_keycode(keycode)) {
        case KC_A ... KC_Z:
        case KC_DOT:
        case KC_COMM:
        case KC_SCLN:
        case KC_SLSH:
            return true;
    }
    return false;
}