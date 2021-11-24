#include "whimsy.h"
#define _______ KC_TRNS
#define LT3_TAB LT(3, KC_TAB)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

LAYOUT(
    KC_ESC  , KC_Q    , KC_W    , KC_E    , KC_R  , KC_T   , KC_Y  , KC_U    , KC_I    , KC_O   , KC_P     , KC_BSPC ,
    LT3_TAB , KC_A    , KC_S    , KC_D    , KC_F  , KC_G   , KC_H  , KC_J    , KC_K    , KC_L   , KC_SCLN  , KC_QUOT ,
    KC_LSFT , KC_Z    , KC_X    , KC_C    , KC_V  , KC_B   , KC_N  , KC_M    , KC_COMM , KC_DOT , KC_SLSH  , KC_ENT  ,
    KC_LCTL , KC_RALT , KC_LGUI , KC_BSLS , MO(1) , KC_SPC , MO(2) , KC_LEFT , KC_DOWN , KC_UP  , KC_RIGHT , KC_MPLY
),

LAYOUT( /* LEFT */
  KC_GRV  , KC_1    , KC_2    , KC_3    , KC_4    , KC_5    , KC_6    , KC_7          , KC_8    , KC_9                , KC_0                 , KC_DELETE ,
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , KC_UNDERSCORE , KC_PLUS , KC_LEFT_CURLY_BRACE , KC_RIGHT_CURLY_BRACE , _______   ,
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______       , _______ , _______             , _______              , _______   ,
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , KC_HOME       , KC_PGDN , KC_PGUP             , KC_END               , _______
),

LAYOUT( /* RIGHT */
  KC_TILDE , KC_EXCLAIM , KC_AT   , KC_HASH , KC_DOLLAR , KC_PERCENT , KC_CIRCUMFLEX , KC_AMPERSAND , KC_ASTERISK , KC_LEFT_PAREN , KC_RIGHT_PAREN , KC_DELETE ,
  _______  , RGB_TOG    , RGB_MOD , RGB_VAI , RGB_VAD   , _______    , _______       , KC_MINS      , KC_EQL      , KC_LBRC       , KC_RBRC        , _______   ,
  _______  , _______    , _______ , _______ , _______   , _______    , _______       , _______      , KC_LT       , KC_GT         , _______        , _______   ,
  _______  , _______    , _______ , _______ , _______   , _______    , _______       , KC_MUTE      , KC_VOLD     , KC_VOLU       , KC_MPLY        , _______
),

LAYOUT( /* Tab */
  KC_ESC  , RESET   , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ , _______ ,
  _______ , KC_F11  , KC_F12  , KC_F13  , KC_F14  , KC_F15  , KC_F16  , KC_F17  , KC_F18  , KC_F19  , KC_F20  , _______ ,
  _______ , KC_F1   , KC_F2   , KC_F3   , KC_F4   , KC_F5   , KC_F6   , KC_F7   , KC_F8   , KC_F9   , KC_F10  , _______ ,
  _______ , _______ , _______ , _______ , _______ , _______ , _______ , KC_MS_L , KC_MS_D , KC_MS_U , KC_MS_R , _______
),
};

#ifdef OLED_ENABLE
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    oled_write_P(qmk_logo, false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
       return OLED_ROTATION_180;  // flips the display 180 degrees
}
void oled_task_user(void) {
    render_logo();
}
#endif

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
	// Volume control
	if (clockwise) {
		tap_code(KC_VOLU);
	} else {
		tap_code(KC_VOLD);
	}
	return false;
}
#endif

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
	// keyevent_t event = record->event;

	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}
