const int ControlPin = A0;
const int LED = 13;
int inputValue = 0;

void setup() {
  pinMode (LED, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  inputValue = analogRead(ControlPin);
  Serial.println(inputValue);
  digitalWrite(LED,HIGH);
  delay(inputValue);
  digitalWrite(LED, LOW);
  delay(inputValue);

}
