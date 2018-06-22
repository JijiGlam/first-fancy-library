#ifndef tl
#define tl

#include <Arduino.h>
#include <OctoWS2811.h>

class Blink {
  public:
   //constructor
   Blink();
   //~Blink_();
   //methods
   void begin(int baudRate=9600);
   void blinkRB(int TIME);

  private:
};

#endif
