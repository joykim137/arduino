void setup() {
  Serial.begin(9600); // activates serial connection in USB port and sets baud rate to 9600
  pinMode(9, OUTPUT); // sets pin 9 to output mode
}
void loop() {
  for (int lightValue = 0; lightValue <= 255; lightValue++) { // sets the initialization, test, and increment/decrement
    analogWrite(9, lightValue); // sends munber of light value to pin 9 in analog form
    Serial.println(lightValue); // makes serial monitor print light value of the light in serial monitor
    delay(10); // waits ten milliseconds
  }
  for (int lightValue = 255; lightValue >= 0; lightValue--) { // sets the initiralization, test, and increment/decrement
    analogWrite(9, lightValue); // sends munber of light value to pin 9 in analog form
    Serial.println(lightValue); // makes serial monitor print light value of the light in serial monitor
    delay(10); // waits ten milliseconds
  }
}
