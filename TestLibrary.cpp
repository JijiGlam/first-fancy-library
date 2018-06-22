#include "TestLibrary.h"

const int ledsPerStrip = 10;  //change the number depending on your specific setup
const int stripNum = 1; //change depending on setup
DMAMEM int displayMemory[ledsPerStrip * 6];
int drawingMemory[ledsPerStrip * 6];
const int config = WS2811_GRB | WS2811_800kHz;
OctoWS2811 leds(ledsPerStrip, displayMemory, drawingMemory, config);

Blink::Blink(){
  //Serial.begin(9600);
  
}

void Blink::begin(int baudRate) {
  Serial.begin(baudRate);
  leds.begin();
  leds.show();
}

void Blink::blinkRB(int TIME){
  for (int x = 0; x<ledsPerStrip*stripNum; x++){
     leds.setPixel(x, 255, 0, 0); //test R
     //leds.setPixel(x, 0, 255, 0); //test G
     //leds.setPixel(x, 0, 0, 255); //test B
     //leds.setPixel(x, 255, 255, 255); 
     //test full brightness, useful to measure maximum current consumption
  }
  leds.show();
  delay(TIME);
  Serial.println("here");

  for (int x = 0; x<ledsPerStrip*stripNum; x++){
     leds.setPixel(x, 0, 0, 255); //test R
  }
  leds.show();
  delay(TIME);
}

