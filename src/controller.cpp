
#include "controller.h"
#include "midi_objects.h"
#include "pins_states.h"
#include "gpio.h"



void controller_initialize()
{
    midi.begin();
    Control_Surface.begin();  
    pinMode(o_button_pin, INPUT_PULLUP); // orientation button pin
    pinMode(play_pin, INPUT_PULLUP); // play button pin.
    pinMode(record_pin, INPUT_PULLUP); // record button pin
    for (int i = 0; i < numLEDs; i++) 
    {
        pinMode(ledPins[i], OUTPUT);
    }
    p_write(ledPins[0], HIGH);

    for (int i = 0; i < numCtrlButtons; i++) 
    {
        pinMode(ch_buttonPins[i], INPUT_PULLUP);
        p_write(ch_buttonPins[i], HIGH);
        lastButtonState[i] = p_read(ch_buttonPins[i]);
    }
}


//method for update orientation of the device and update led states.

uint8_t 
update()
{
    o_buttonState = digitalRead(o_button_pin);
    if (o_buttonState != o_lastButtonState) 
    {
    if (o_buttonState == LOW) 
    {
        orientation = !orientation;
    }
    o_lastButtonState = o_buttonState;
    }



    for (size_t i = 0; i < numCtrlButtons; i++)
    {
        if (p_read(ch_buttonPins[i]) == LOW)
        {
            current_chn = i;
        }
    }

   for (int i = 0; i < 4; i++) 
   {
    if (digitalRead(ch_buttonPins[i]) == LOW) 
    {
        for (int j = 0; j < 4; j++) 
        {
            digitalWrite(ledPins[j], LOW);
        }
        digitalWrite(ledPins[i], HIGH);
    }
  }

    if (orientation)
    {
        return current_chn+4;
    } 
    else 
    {
        return current_chn;
    }
}



bool
debounce(int pin) 
{

    bool button_state = digitalRead(pin);

    if (button_state != last_button_state_rec_play[pin]) 
    {
        last_button_time[pin] = millis();
    }

    if (millis() - last_button_time[pin] > DEBOUNCE_TIME) 
    {
        last_button_state_rec_play[pin] = button_state;
    }

    return last_button_state_rec_play[pin] == LOW;
}

void 
is_playbutton_pressed()
{
    bool play_button_pressed = debounce(play_pin);
        if (play_button_pressed)
    {
        midi.send(0xFA); // play
    } 

}

void 
is_recordbutton_pressed(uint8_t current_channel)
{
    
    bool record_button_pressed = debounce(record_pin);
    if (record_button_pressed) 
    {
        if (last_sender_state == false)
        {
            sender.sendOn(current_channel);
            last_sender_state = true;
        } 
        else 
        {
            sender.sendOff(current_channel);
            last_sender_state = false;
        }
    }
}

void controller_loop()
{
    Control_Surface.loop(); 
}

void select_bank(uint8_t current_channel)
{

bank.select(current_channel);

}
