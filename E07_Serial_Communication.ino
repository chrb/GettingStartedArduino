// Example 07: Send to the computer the values read from
// analog input 

const int SENSOR = 2;
const int LED = 8;

int val = 0; // value from sensor
int negVal = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  
  val = analogRead(SENSOR);
  
  Serial.println(val);
  negVal = 1023 - val;
  analogWrite(LED, negVal/4);
  
  delay(100);
}
