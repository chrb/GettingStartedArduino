// Example 03A : Turn on/off LED when the button is pressed

const int LED = 10;
const int BUTTON = 7;

int val = 0;
int state = 0; // 0 = LED off , 1 = LED on

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop()
{
  val = digitalRead(BUTTON);
  
  if (val == HIGH) {
    state = 1 - state;
  }
  
  if (state == 1) {
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}
