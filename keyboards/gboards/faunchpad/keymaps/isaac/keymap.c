#include QMK_KEYBOARD_H

#include "g/keymap_engine.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap 0: Photoshop tools layer
 *
 *       ,-----------------------+-----------------------+-----------------------+-----------------------.
 *       |  PS actions           | Redo                  | Clone stamp           | Spot healing brush    |
 *       |-----------------------+-----------------------+-----------------------+-----------------------|
 *       |  PS zoom/color        | Undo         	     | Brush size down       | Brush size up         |
 *       `-----------------------+-----------------------+-----------------------+-----------------------'
 */
  [0] = LAYOUT_faunch(	MO(2),  	LCTL(LSFT(KC_Z)),  		KC_S,  					KC_J,
						MO(1), 		LCTL(KC_Z), 			KC_LBRACKET,  			KC_RBRACKET),
						
/* Keymap 1: Photoshop zoom/color layer		
 *
 *       ,-----------------------+-----------------------------------------------------------------------.
 *       |  Media control        | Open HSL              | Zoom to fit           | Zoom to 100%          |
 *       |-----------------------+-----------------------+-----------------------+-----------------------|
 *       |                       | Open curves           | Zoom out              | Zoom in               |
 *       `-----------------------+-----------------------+-----------------------+-----------------------'
 */
  [1] = LAYOUT_faunch(	MO(3),  	LCTL(KC_U),  			LCTL(KC_0),  			LCTL(KC_1),
						KC_TRNS, 	LCTL(KC_M),  			LCTL(KC_PMNS),  		LCTL(KC_PPLS)),
						
/* Keymap 2: Photoshop actions layer
 *
 *       ,-----------------------+-----------------------+-----------------------+-----------------------.
 *       |                       | Ruler/eyedropper      | Selection subtract    | Selection add         |
 *       |-----------------------+-----------------------+-----------------------+-----------------------|
 *       |  Media control        | Rotate arbitrary      | Marquee               | Lasso                 |
 *       `-----------------------+-----------------------+-----------------------+-----------------------'
 */
  [2] = LAYOUT_faunch(	KC_TRNS,	KC_I,  					KC_LALT,  				KC_LSFT,
						MO(3), 		LCTL(KC_R),  			KC_M,  					KC_L),
						
/* Keymap 3: Media control
 *
 *       ,-----------------------+-----------------------+-----------------------+-----------------------.
 *       |                       | Volume up             | Mute                  | Print screen (window) |
 *       |-----------------------+-----------------------+-----------------------+-----------------------|
 *       |                       | Volume down           | Open calculator       | Open "This PC"        |
 *       `-----------------------+-----------------------+-----------------------+-----------------------'
 */
  [3] = LAYOUT_faunch(	KC_TRNS,  	KC_VOLU,  				KC_MUTE,  				LALT(KC_PSCR),
						KC_TRNS,	KC_VOLD,  				KC_CALC,				KC_MYCM),
};

// Don't fuck with this, thanks.
size_t keymapsCount  = sizeof(keymaps)/sizeof(keymaps[0]);
