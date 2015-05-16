// Example 01 : Blinking LED

const int LED = 10; // digital pin 10

void setup()
{
  pinMode(LED, OUTPUT);
  
}

void loop()
{
  digitalWrite(LED, HIGH);
  delay(2500);
  digitalWrite(LED, LOW);
  delay(2500);
}
