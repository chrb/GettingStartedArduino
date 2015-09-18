// Example 05_test

const int LED = 13;
const int BUTTON = 7;

int val = 0;
int old_val = 0;
int state = 0;
int i = 0;


void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  val = digitalRead(BUTTON);
  
  // check if there was a transition
  if ( (val == HIGH) && (old_val == LOW) ) {
    state = 1 - state;
    // simple de-bouncing
    delay(10);
  }
  
  old_val = val;
  
  if (state == 1) {
    for (i = 1; i < 255; i++) {
      analogWrite(LED, i);
      delay(10);
    }
    
    for (i = 255; i > 1; i--) {
      analogWrite(LED, i);
      delay(10);
    }
  } else {
    analogWrite(LED, 0);
  }
}
