#include QMK_KEYBOARD_H

#include "g/keymap_engine.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Photoshop tools layer
 *
 *       ,----------------------------------------------------------------------------------------.
 *       |  LR actions    | Clone stamp define    | Clone stamp           | Spot healing brush    |
 *       |----------------+-----------------------+-----------------------+-----------------------|
 *       |  PS actions    | Undo         	      | Brush size down       | Brush size up         |
 *       `----------------+-----------------------+-----------------------+-----------------------'
 */
  [0] = LAYOUT_faunch(	MO(2),  	KC_LALT,  		KC_S,  			KC_J,
						MO(1), 		LCTL(KC_Z), 	KC_LBRACKET,  	KC_RBRACKET),
						
/* Keymap 1: Photoshop actions layer
 *
 *       ,----------------------------------------------------------------------------------------.
 *       |  Media control | Ruler/eyedropper      | Rotate arbitrary      | Zoom to 100%          |
 *       |----------------+-----------------------+-----------------------+-----------------------|
 *       |                | Open curves           | Zoom out              | Zoom in               |
 *       `----------------+-----------------------+-----------------------+-----------------------'
 */
  [1] = LAYOUT_faunch(	MO(3),  	LSFT(KC_I),  	LCTL(KC_R),  	LCTL(KC_1),
						KC_TRNS, 	LCTL(KC_M),  	LCTL(KC_PMNS),  LCTL(KC_PPLS)),
						
/* Keymap 2: Lightroom actions layer
 *
 *       ,----------------------------------------------------------------------------------------.
 *       |                | Open in Photoshop     | Spot removal tool     | Rotate                |
 *       |----------------+-----------------------+-----------------------+-----------------------|
 *       |  Media control | Brush overlay         | Adjust down           | Adjust up             |
 *       `----------------+-----------------------+-----------------------+-----------------------'
 */
  [2] = LAYOUT_faunch(	KC_TRNS,  	LCTL(KC_E),  	KC_Q,  			KC_R,
						MO(3), 		KC_O,  			KC_DOWN,  		KC_UP),
						
/* Keymap 3: Media control
 *
 *       ,----------------------------------------------------------------------------------------.
 *       |                | Volume up             | Mute                  | Print screen (window) |
 *       |----------------+-----------------------+-----------------------+-----------------------|
 *       |                | Volume down           | Open calculator       | Open "This PC"        |
 *       `----------------+-----------------------+-----------------------+-----------------------'
 */
  [3] = LAYOUT_faunch(	KC_TRNS,  	KC_VOLU,  		KC_MUTE,  		LALT(KC_PSCR),
						KC_TRNS,	KC_VOLD,  		KC_CALC,		KC_MYCM),
};

// Don't fuck with this, thanks.
size_t keymapsCount  = sizeof(keymaps)/sizeof(keymaps[0]);
