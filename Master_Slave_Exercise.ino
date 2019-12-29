int led = 9;
int brightness = 255;
int fadeAmount = 5;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  analogWrite(led, brightness);
  brightness = brightness - fadeAmount;
  Serial.println(brightness);
  if (brightness == 0){
    brightness = 255;
  }
  delay(20);
}


//#include <Wire.h>
//void setup() {
//  Wire.begin(); // join i2c bus (address optional for master)
//}
//
//byte x = 0;
//
//void loop() {
//  Wire.beginTransmission(8); // transmit to device #8
//  Wire.write("x is ");        // sends five bytes
//  Wire.write(x);              // sends one byte
//  Wire.endTransmission();    // stop transmitting
//
//  x++;
//  delay(500);
//}
