// Example 04: Fade an LED in and out
// PWM Pulsweitenmodulation

const int LED = 9;
int i = 0;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
 
 for (i = 0; i < 255; i++) {
  analogWrite(LED, i);
  delay(10);
 }
 
 for (i = 255; i > 0; i--) {
   analogWrite(LED, i);
   delay(10);
 }
 
}
