#include "Arduino.h"
#include "controller.h"





void setup() 
{
    controller_initialize();

}


void loop() 
{   
    uint8_t current_channel = update();
    select_bank(current_channel);

    is_playbutton_pressed();
    is_recordbutton_pressed(current_channel);
    controller_loop();
}
