// Example 03B: Turn on/off LED when the button is pressed
// improved formula

const int LED = 10;
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
  if ( (val == HIGH) && (old_val == LOW) ){
    state = 1 - state;
  }
  
  old_val = val; // save state of val
  
  if (state == 1) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
