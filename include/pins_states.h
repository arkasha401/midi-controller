#ifndef __PINS_H__
#define __PINS_H__
#include <stdint.h>

//Debounce time
const uint8_t DEBOUNCE_TIME = 100;

// amount of buttons that we use.
const uint8_t numLEDs = 4;
const uint8_t numCtrlButtons = 4;

/*Channel, buttons and led states*/
int current_chn = 1;
int currentLED = -1;    
bool orientation = false;
bool o_buttonState;
bool o_lastButtonState = HIGH;
bool o_led_state = LOW;
bool last_sender_state = false;
int lastButtonState[numCtrlButtons] = {LOW, LOW, LOW, LOW};
static bool last_button_state_rec_play[2] = {HIGH, HIGH};
static unsigned long last_button_time[2] = {0, 0};

// Button and led pins.
const uint8_t play_pin = 0;
const uint8_t record_pin = 21;
const uint8_t o_button_pin = 26;
const uint8_t ledPins[numLEDs] = {22,23,24,25};
const uint8_t ch_buttonPins[numCtrlButtons] = {17,18,19,20};
#endif