// Example 06A: Blink LED at a rate specified by the
// value of the analoge input

const int LED = 8;

int val = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  
  val = analogRead(2);
  
  digitalWrite(LED, HIGH);
  
  delay(val);
  
  digitalWrite(LED, LOW);
  
  delay(val);
}

