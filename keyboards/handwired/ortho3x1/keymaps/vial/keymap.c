#include QMK_KEYBOARD_H

#define _DEFAULT 0
#define _FIRST 1
#define _SECOND 2
#define _THIRD 3

#define FIRST MO(_FIRST)
#define SECOND MO(_SECOND)
#define THIRD MO(_THIRD)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_DEFAULT] = LAYOUT(
     LT(FIRST, KC_F13), LT(SECOND, KC_F14), LT(THIRD, KC_F15)
  ),


  [_FIRST] = LAYOUT(
    _______, KC_F16, KC_F17
  ),

  [_SECOND] = LAYOUT(
    KC_F18, _______, KC_F19
  ),

  [_THIRD] = LAYOUT(
    KC_F20, KC_F21, _______
  ),

};
