#ifndef __GPIO_H__
#define __GPIO_H__
#include "Arduino.h"


  int
  p_read(uint8_t pin) {return digitalRead(pin);};

  void
  p_write(uint8_t u8, uint8_t val) { return digitalWrite(u8, val);}

#endif