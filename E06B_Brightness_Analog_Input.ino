// Example 06B: Set the brightness of LED to 
// a brightness specified by the
// value of the analog input

const int LED = 8;

int val = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  val = analogRead(2);
  analogWrite(LED, val/4);
  delay(10);
}
