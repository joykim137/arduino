void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello, how are you?");
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH);
  Serial.println("On");
  delay(1000);
  digitalWrite(13, LOW);
  Serial.println("Off");
  delay(1000);
}
