// Example 03C: Turn on/off LED when the button is pressed
// improved forumla including simple de-bouncing

const int LED = 13;
const int BUTTON = 7;

int val = 0;
int old_val = 0;
int state = 0;

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
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
