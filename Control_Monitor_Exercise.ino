void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

char c;
char d;
void loop() {
  if (Serial.available() > 0) {
      c = Serial.read();
      if(d != NULL){
        c = d;
      }
      if(c == '3'){
        Serial.println("Hello World");
        c = NULL;
      }
  }

  if (c == '1'){
    digitalWrite(LED_BUILTIN, HIGH);
    delay(1000);
    digitalWrite(LED_BUILTIN, LOW);
  }
  else if(c == '2'){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  delay(1000);
  d = Serial.read();
}
