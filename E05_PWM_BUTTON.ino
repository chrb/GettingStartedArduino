// Example 05: Turn on LED when the button is pressed
// and keep it on after it is released
// including simple de-bouncing.
// If the button is held, brightness changes.

 const int LED = 13;
 const int BUTTON = 7;
 
 int val = 0; // state of input pin
 
 int old_val = 0;
 int state = 0; // 0 = LED off, 1 = LED on
 
 int brightness = 0; // brightness value
 unsigned long startTime = 0;
 
 void setup() {
   pinMode(LED, OUTPUT);
   pinMode(BUTTON, INPUT);
 }
 
 void loop() {
  
   val = digitalRead(BUTTON);
 
   if ((val == HIGH) && (old_val == LOW)) {
    
    state = 1 - state;
    startTime = millis();
    delay(10); 
   }
 
   if (( val == HIGH) && (old_val == HIGH)) {
   
     if (state == 1 && (millis() - startTime) > 500) {
        brightness++;
        delay(10);
        if (brightness > 255) { // maxbrightness = 255
          brightness = 0;
        }
     }
   }
   
   old_val = val;
   
   if (state == 1) {
     analogWrite(LED, brightness); // turn LED on at current brightness
   } else {
     analogWrite(LED, 0); // turn LED off
   }
   
 }
