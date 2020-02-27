int value;
void setup() {
 pinMode (A5, INPUT);
 pinMode (9, OUTPUT);
 Serial.begin(9600);
}
void loop () {
 int value = analogRead(A5);
 value = map(value, 0, 1023, 0, 255);
 digitalWrite(9, HIGH);
 digitalWrite(9, value % 2);
 delay(value);

 digitalWrite(9, LOW);
 digitalWrite(9, (value + 1) % 2);
 delay(value);
// digitalWrite(9,LOW);
// delay(value/4);
// digitalWrite(9,HIGH);
// delay(value/4);
 Serial.println(value);
}
