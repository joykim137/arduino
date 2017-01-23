int lightValue = 0; // sets value of lightValue to 0
int delta = 1; // sets value of delta to 1

void setup() {
  Serial.begin(9600); // activates serial connection in USB port and sets baud rate to 9600
  pinMode(9, OUTPUT); // sets pin 9 to output mode
}
void loop() {
  lightValue = lightValue + delta; // lightValue becomes lightValue + delta
  if (lightValue <= 0 || lightValue >= 255) { // sets values that will make the lines beneath true
    delta = -delta; // the variable becomes negative of the value of delta
  }
  analogWrite(9, lightValue); // sends munber of light value to pin 9 in analog form
  Serial.println(lightValue); // makes serial monitor print light value of lightValue on serial monitor
  delay(10); // waits ten milliseconds
}
