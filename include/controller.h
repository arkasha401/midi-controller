#ifndef __CONTROLLER_H__
#define __CONTROLLER_H__
#include <stdint.h>


void    
controller_initialize();

uint8_t
update();

bool 
debounce(int pin);


void 
is_playbutton_pressed();

void 
is_recordbutton_pressed(uint8_t current_chn);

void 
select_bank(uint8_t current_channel);

void 
controller_loop();



#endif