
#include <Wire.h>


int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

void setup() {
  Serial.begin(9600);
}



void loop() {
  int brightness = analogRead(A5);
  brightness = map(brightness, 0, 1023, 0, 255);
  
  delay(50);
    Serial.println(brightness);

}
