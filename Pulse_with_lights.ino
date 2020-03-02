/***
 * Author: J Newland
 * 2018/07/27
 * 
 * Use the Adafruit Circuit Playground Express
 * to detect and display the pulse using an 
 * on-board LED and the on-board light sensor.
 ***/
#include "Adafruit_CircuitPlayground.h"

// Initialize variables.
int lightSensor;
int ppg;
int brightness;
int ledPin=10;

void setup() {
  // How fast you read can make a difference.
  // Go as fast as your hardware can handle.
  Serial.begin(9600);
  Serial.println("Circuit Playground Express PPG");
 //pinMode(ledPin, OUTPUT);
  
  CircuitPlayground.begin();
  CircuitPlayground.setPixelColor(1,0,255,0);
}

void loop() {
  lightSensor= CircuitPlayground.lightSensor();
  ppg = 1024-lightSensor;
Serial.println(ppg);

//brightness=map(ppg, 900, 1000, 0, 255);
CircuitPlayground.setBrightness(50);
//digitalWrite(ledPin, HIGH);


if(1000-ppg>100){
CircuitPlayground.setPixelColor(2,0,255,255);
CircuitPlayground.setPixelColor(3,0,255,255);
CircuitPlayground.setPixelColor(4,0,255,255);
CircuitPlayground.setPixelColor(5,0,255,255);
CircuitPlayground.setPixelColor(6,0,255,255);
CircuitPlayground.setPixelColor(7,0,255,255);
CircuitPlayground.setPixelColor(8,0,255,255);
CircuitPlayground.setPixelColor(9,0,255,255);
            
//digitalWrite(ledPin, HIGH);
  
  }
  else{
CircuitPlayground.setPixelColor(2,0,0,0);
CircuitPlayground.setPixelColor(3,0,0,0);
CircuitPlayground.setPixelColor(4,0,0,0);
CircuitPlayground.setPixelColor(5,0,0,0);
CircuitPlayground.setPixelColor(6,0,0,0);
CircuitPlayground.setPixelColor(7,0,0,0);
CircuitPlayground.setPixelColor(8,0,0,0);
CircuitPlayground.setPixelColor(9,0,0,0);
  // digitalWrite(ledPin, LOW);  
    }


  // Delay to allow the sensor to reset.
  delay(20); 
}
