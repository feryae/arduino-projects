const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = LOW;
int x = 0;
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, FALLING);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(ledPin, state);
}

void blink() {//interrupt service routine (ISR)
//  state = !state;
  if(digitalRead(2) == LOW) {
    x++;
  }
  digitalWrite(13, HIGH);
  digitalWrite(12, x % 2);
  delay(1000);

  digitalWrite(13, LOW);
  digitalWrite(12, (x + 1) % 2);
  delay(1000);
}
