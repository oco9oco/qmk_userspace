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
#include "oco9oco.h"

bool is_alt_tab_active = false; // ADD this near the beginning of keymap.c
uint16_t alt_tab_timer = 0;     // we will be using them soon.

void appcmd(uint16_t keycode) {
    tap_code(KC_APP);
    tap_code(keycode);
}

/*
    오토쉬프트 on qwertp
*/



bool get_custom_auto_shifted_key(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case KC_Q:
        case KC_W:
        case KC_E:
        case KC_R:
        case KC_T:
        case KC_P:
            return true;
        default:
            return false;
    }
}






// process_record_user
bool process_record_user(uint16_t keycode, keyrecord_t *record) {

//GETREUR
    //     if (record->event.pressed) {
//     static deferred_token token = INVALID_DEFERRED_TOKEN;
//     static report_mouse_t report = {0};
//     if (token) {
//       // If jiggler is currently running, stop when any key is pressed.
//       cancel_deferred_exec(token);
//       token = INVALID_DEFERRED_TOKEN;
//       report = (report_mouse_t){};  // Clear the mouse.
//       host_mouse_send(&report);
//     } else if (keycode == JIGGLE) {

//       uint32_t jiggler_callback(uint32_t trigger_time, void* cb_arg) {
//         // Deltas to move in a circle of radius 20 pixels over 32 frames.
//         static const int8_t deltas[32] = {
//             0, -1, -2, -2, -3, -3, -4, -4, -4, -4, -3, -3, -2, -2, -1, 0,
//             0, 1, 2, 2, 3, 3, 4, 4, 4, 4, 3, 3, 2, 2, 1, 0};
//         static uint8_t phase = 0;
//         // Get x delta from table and y delta by rotating a quarter cycle.
//         report.x = deltas[phase];
//         report.y = deltas[(phase + 8) & 31];
//         phase = (phase + 1) & 31;
//         host_mouse_send(&report);
//         return 16;  // Call the callback every 16 ms.
//       }

//       token = defer_exec(1, jiggler_callback, NULL);  // Schedule callback.
//     }
//   }









    switch (keycode) {
        case THUMB_L2:
        case THUMB_L3:
            if (__PRESSED__) {
                prns_pressed = false;
                brkt_pressed = false;
                num_in_prns  = false;
                switch_cite  = 0;
                cite_done    = true;
            } else {
                if (num_in_prns) {
                    if(prns_pressed){tap_code(KC_RGHT);}
                    if(brkt_pressed){
                        cite_done = true;
                        tap_code(KC_RGHT);
                    }
                }
            }
            return true;
            break;

        case CLASS_A:
            if (__PRESSED__) {
                if (!cite_done) {
                    tap_code(KC_BSPC);
                    tap_code(KC_BSPC);
                    tap_code(KC_BSPC);
                    tap_code(KC_BSPC);
                    // if(switch_cite ==0){
                    //     tap_code(KC_BSPC);
                    //     tap_code(KC_BSPC);
                    //     tap_code(KC_BSPC);
                    // }
                }
                switch (switch_cite) {
                    case 0:
                        SEND_STRING("A62B");
                        switch_cite = 1;
                        break;
                    case 1:
                        SEND_STRING("E05B");
                        switch_cite = 2;  // case 2 추가되는 경우 switch_cite = 2;
                        break;
                    case 2:
                        SEND_STRING("E06B");
                        switch_cite = 0;
                        break;
                }
            } else {
                cite_done = false;
            }
            break;
        case CLASS_E:
            if (__PRESSED__) {
                if (!cite_done) {
                    tap_code(KC_BSPC);
                    tap_code(KC_BSPC);
                    tap_code(KC_BSPC);
                    tap_code(KC_BSPC);
                }
                switch (switch_cite) {
                    case 0:
                        SEND_STRING("E05B");
                        switch_cite = 1;
                        break;
                    case 1:
                        SEND_STRING("E05C");
                        switch_cite = 2;
                        break;
                    case 2:
                        SEND_STRING("E06B");
                        switch_cite = 3;
                        break;
                    case 3:
                        SEND_STRING("E05G");
                        switch_cite = 0;
                        break;
                }
            } else {
                cite_done = false;
            }
            break;
//
#ifdef CHARYBDIS_CONFIG_SYNC
        case DRG_TOG:
            if (__PRESSED__) {
                register_code(KC_F15);
                } else {
                unregister_code(KC_F15);
                }
            return true;
            break;
#endif


            // appcmd function
        case JOINTBL:
            if (__PRESSED__) {
                appcmd(KC_J);
            }
            break;

        case PDF_HL:
            if (__PRESSED__) {
                appcmd(KC_H);
            }
            break;

#ifdef RGBLIGHT_ENABLE
        case TO_NOMOD:
            if (__PRESSED__) {
                rgblight_setrgb(0, 0, 50);
            }
            return true;
        case TO_BASE:
            if (__PRESSED__) {
                rgblight_setrgb(RGB_OFF);
            }
            return true;
#endif
            // 괄호 커서이동 기능
        case KC_COMM:
            if (__PRESSED__ /* && (brkt_pressed||prns_pressed)*/) {
                cite_done = true;
            }
            return true;
        case KC_1 ... KC_0:
            if (__PRESSED__ && (prns_pressed || brkt_pressed)) {
                num_in_prns = true;
                cite_done   = true;
            }
            return true;
            break;

        // HWP_CITE
        case HWP_MACRO:
            if(__PRESSED__){
                tap_code_delay(KC_F6,200);

                register_code(KC_LALT);
                    tap_code_delay(KC_O,200);
                    tap_code_delay(KC_F,200);
                unregister_code(KC_LALT);

                tap_code_delay(KC_DOWN,100);
                tap_code_delay(KC_DOWN,100);
                tap_code(KC_ENT);
                register_code(KC_LALT);
                    tap_code_delay(KC_I,200);
                unregister_code(KC_LALT);

                tap_code(KC_DOWN);
                register_code(KC_LALT);
                    tap_code_delay(KC_B,200);
                    tap_code_delay(KC_Y,200);
                    tap_code_delay(KC_A,200);
                    tap_code_delay(KC_Y,200);
                    tap_code_delay(KC_N,200);
                    tap_code_delay(KC_D,200);
                unregister_code(KC_LALT);
                tap_code_delay(KC_ESC,200);

                register_code(KC_LCTL);
                    tap_code_delay(KC_K,200);
                    tap_code_delay(KC_O,200);
                unregister_code(KC_LCTL);

                register_code(KC_LALT);
                    tap_code_delay(KC_N,200);
                unregister_code(KC_LALT);

                tap_code_delay(KC_PGDN,100);
                tap_code_delay(KC_END,100);

                register_code(KC_LALT);
                    tap_code_delay(KC_D,200);
                unregister_code(KC_LALT);

            }
        break;
        case HWP_CITE:
            // prns 안에서는 cite_done = false
            // comma 누르면 cite_done = true
            // prns && num 상태에서는 cite_done = true, SPC_COMM

            // START                          ---   added 15:27 241016
            // if (__TAPPED__ && __PRESSED__) {
            //     SEND_STRING("{}" SS_TAP(X_LEFT));
            //     } else {
            // END                            ---   added 15:27 241016

            if (__PRESSED__) {
                switch (switch_cite) {
                    case 0:
                        if (!cite_done) {
                            user_i = 0;
                            while (user_i < 2) {
                                tap_code(KC_BSPC);
                                user_i++;
                            }
                        }
                        if (!brkt_pressed) {
                            SEND_STRING("[]" SS_TAP(X_LEFT));
                            brkt_pressed = true;
                        }
                        switch_cite = 3;
                        break;
                    case 3:
                        SEND_STRING("anseks ");
                        switch_cite = 4;
                        cite_done   = false;
                        break;
                    case 4:
                        if (!cite_done) {
                            user_i = 0;
                            while (user_i < 3) {
                                tap_code(KC_BSPC);
                                user_i++;
                            }
                        }
                        if (brkt_pressed && num_in_prns) {
                            SEND_STRING(", ");
                            num_in_prns = false;
                        }
                        SEND_STRING("cjdrngkd ");
                        switch_cite = 2;
                        cite_done   = false;
                        break;
                    case 2:
                        if (!cite_done) {
                            user_i = 0;
                            while (user_i < 4) {
                                tap_code(KC_BSPC);
                                user_i++;
                            }
                        }
                        if (brkt_pressed && num_in_prns) {
                            SEND_STRING(", ");
                            num_in_prns = false;
                        }
                        SEND_STRING("eh ");
                        switch_cite = 0;
                        cite_done   = false;
                        break;
                }
            }
            break;
            // Intercept mod-tap

            // case LT(_BASE,KC_DEL):
            // if (__TAPPED__ && __PRESSED__) {
            //     tap_code(KC_DEL);
            // } else if (__PRESSED__) {
            //     register_code16(DRGSCRL);
            // } else {
            //     unregister_code16(DRGSCRL);
            // }
            // return false;
            // break;

            case LT(_BASE,KC_ENT):
            if (__TAPPED__ && __PRESSED__) {
                tap_code(KC_ENT);
            } else if (__PRESSED__) {
                register_code(KC_LNG1);
            } else {
                unregister_code(KC_LNG1);
            }
            return false;
            break;

        case IPC(A):
            if (__TAPPED__ && __PRESSED__) {
                if(!cite_done){tap_code(KC_BSPC);}
                    switch (switch_cite){
                    case 0:
                    SEND_STRING(SS_TAP(X_LNG1) SS_TAP(X_A) SS_TAP(X_LNG1));
                    switch_cite = 1;
                    break;
                    case 1:
                    SEND_STRING(SS_TAP(X_LNG1) SS_TAP(X_B) SS_TAP(X_LNG1));
                    switch_cite = 2;
                    break;
                    case 2:
                    SEND_STRING(SS_TAP(X_LNG1) SS_TAP(X_C) SS_TAP(X_LNG1));
                    switch_cite = 3;
                    break;
                    case 3:
                    SEND_STRING(SS_TAP(X_LNG1) SS_TAP(X_D) SS_TAP(X_LNG1));
                    switch_cite = 4;
                    break;
                    case 4:
                    SEND_STRING(SS_TAP(X_LNG1) SS_TAP(X_E) SS_TAP(X_LNG1));
                    switch_cite = 0;
                    break;
                    }
            } else if (__PRESSED__) {
                register_code(KC_LSFT);
            } else {
                unregister_code(KC_LSFT);
                cite_done=false;
            }
            return false;
            break;

        case IPC(S):
            if (__TAPPED__ && __PRESSED__) {
                SEND_STRING("()" SS_TAP(X_LEFT));
                prns_pressed = true;
            } else if (__PRESSED__) {
                register_code(KC_LALT);
            } else {
                unregister_code(KC_LALT);
            }
            return false;
            break;

        case IPC(F):
            if (__TAPPED__ && __PRESSED__) {
                SEND_STRING(", ");
            } else if (__PRESSED__) {
                register_code(KC_LSFT);
            } else {
                unregister_code(KC_LSFT);
            }
            return false;
            break;

        case IPC(Z):
            if (__TAPPED__ && __PRESSED__) {
                tap_code16(KC_LNG1);
            } else if (__PRESSED__) {
                register_code(KC_LGUI);
            } else {
                unregister_code(KC_LGUI);
            }
            return false;
            break;

        case IPC(C):
            if (__TAPPED__ && __PRESSED__) {
                tap_code16(KC_UNDS);
            } else if (__PRESSED__) {
                tap_code16(KC_PLUS);
            }
            return false;
            break;

        case NAV(Z):
            if (__TAPPED__ && __PRESSED__) {
                tap_code16(C(KC_Z));
            } else if (__PRESSED__) {
                register_code(KC_LGUI);
            } else {
                unregister_code(KC_LGUI);
            }
            return false;
            break;

        case SFT_CAPS:
            if (__TAPPED__ && __PRESSED__) {
                tap_code(KC_CAPS);
            } else if (__PRESSED__) {
                register_code(KC_LGUI);
            } else {
                unregister_code(KC_LGUI);
            }
            return false;
            break;

#ifdef __SCROLL_THUMB__
        case THUMB_L3:
            if (__TAPPED__ && __PRESSED__) {
                tap_code16(KC_DEL);
            } else if (__PRESSED__) {
                layer_move(_ONEHAND);
            }
            return false;
            break;
#endif
        // CLOSING BRACKET PAIRS
        case BRKT:
            if (__PRESSED__) {
                SEND_STRING("[]" SS_TAP(X_LEFT));
                brkt_pressed = true; // 괄호입력상태
            }
            break;
        case ABRK:
            if (__PRESSED__) {
                SEND_STRING("<>" SS_TAP(X_LEFT));
                prns_pressed = true; // 괄호입력상태
            }
            break;

        case CMM_SPC:
            if (__PRESSED__) {
                SEND_STRING(", ");
            }
            break;
        case CLN_SPC:
            if (__PRESSED__) {
                SEND_STRING(": ");
            }
            break;
        case ENT_HOME:
            if (__PRESSED__) {
                tap_code(KC_ENT);
                layer_move(_BASE);
            }
            break;
        case AT_IPC:
            if (__PRESSED__) {
                SEND_STRING("@IPC");
            }
            break;
            // case SLSH_LL:
            //     if (__PRESSED__) {
            //         SEND_STRING(SS_TAP(X_LEFT) SS_TAP(X_LEFT) SS_TAP(X_SLSH) SS_TAP(X_RGHT) SS_TAP(X_RGHT));
            //     }
            //     break;
        case NAV_NS:
            if(__PRESSED__){
                tap_code16(LCA(KC_J));
                tap_code16(LCA(KC_H));
            }
            break;
        case ALT_TAB:
            if (record->event.pressed) {
                if (!is_alt_tab_active) {
                    is_alt_tab_active = true;
                    register_code(KC_LALT);
                }
                alt_tab_timer = timer_read();
                register_code(KC_TAB);
            } else {
                unregister_code(KC_TAB);
            }
            break;
        case USR_LNG:
            if (__TAPPED__  && __PRESSED__) {
                tap_code(KC_LNG1);
            } else if (__PRESSED__) {
                register_code(KC_LNG2);
            } else {
                unregister_code(KC_LNG2);
            }
            return false;
            break;

        case LT(_ONEHAND,KC_BTN2):
            if (__TAPPED__ && __PRESSED__) {
                tap_code(KC_BTN2);
            } else if (__PRESSED__) {
                register_code(KC_LALT);
            } else {
                unregister_code(KC_LALT);
            }
            return false;
            break;
    }

return true;
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {

        // case THUMB_L2:
            // return TAPPING_TERM - 50;
        // case SFTT_A:
        // case SFTT_F:
        // case CTLT_D:
        //     return TAPPING_TERM ;
        case SFTT_F:
        case LGUI_T(KC_Z):
            return TAPPING_TERM + 200;
        case SFTT_J:
        case GUIT_A:
        case GUIT_SCL:
            return TAPPING_TERM + 50;
        case NAV(S):
        case NAV(D):
        case NAV(F):
            return TAPPING_TERM - 50;
        default:
            return TAPPING_TERM;
    }
}
// Get hold on other key press
// bool get_permissive_hold(uint16_t keycode, keyrecord_t *record){
//     switch (keycode) {
//         case SFTT_A:
//             return true;
//         default:
//             return false;
//     }
// }
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
//        case LSFT_T(KC_W):
        case THUMB_L1:
        case THUMB_L2:
        case THUMB_L3:
        case THUMB_R1:
        case THUMB_R3:
        case SFT_CAPS:
        // case THUMB_R2:
        // case SFTT_A:
        // case SFTT_F:
        case IPC(A):
        case IPC(S):
        case IPC_D_: 
        case IPC(F):
        case IPC(Z):
            return true;
        default:
            return false;
    }
}


void matrix_scan_user(void) { // The very important timer.
  if (is_alt_tab_active) {
    if (timer_elapsed(alt_tab_timer) > 2000) {
      unregister_code(KC_LALT);
      is_alt_tab_active = false;
    }
  }
}
#ifdef CHORDAL_HOLD
// bool get_chordal_hold(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
//     uint16_t other_keycode, keyrecord_t* other_record) {
// // Exceptionally allow some one-handed chords for hotkeys.
// switch (tap_hold_keycode) {
// case LSFT_T(KC_A):
//     if (other_keycode == KC_Q ||other_keycode == KC_W || other_keycode == KC_E || other_keycode == KC_R || other_keycode == KC_T) {
//     return true;
//     } else {return false;}
//     break;
// }
// // Otherwise defer to the opposite hands rule.
// return get_chordal_hold_default(tap_hold_record, other_record);
// }
#endif
// charybdis trackball angular alignment calibration(floating point)
// This code rotates the mouse report by 15 degrees counter-clockwise.


// #include "math.h"

// report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
//     report_mouse_t new_report = mouse_report;

//     // 15도 회전 변환 공식 (반시계 방향)
//     // x' =  cos(15°) * x - sin(15°) * y
//     // y' =  sin(15°) * x + cos(15°) * y

//     float old_x = (float)mouse_report.x;
//     float old_y = (float)mouse_report.y;

//     float new_x =  COS15 * old_x - SIN15 * old_y;
//     float new_y =  SIN15 * old_x + COS15 * old_y;

//     new_report.x = (int8_t)roundf(new_x);
//     new_report.y = (int8_t)roundf(new_y);

//     return new_report;
// }