void setup() {
  // put your setup code here, to run once:
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH); // turns light on
  delay(1000); // duration is 1 second
  digitalWrite(12, LOW); // turns light off
  delay(2000); // duration is 2 seconds
  digitalWrite(12, HIGH); // turns light on
  delay(2000); // duration is 2 seconds
  digitalWrite(12, LOW); // turns light off
  delay(3000); // duration is 3 seconds
  digitalWrite(12, HIGH); // turns light on
  delay(3000); // duration is 3 seconds
  digitalWrite(12, LOW); // turns light off
  delay(4000); // duration is 4 seconds
  digitalWrite(12, HIGH); // turns light on
  delay(4000); // duration is 4 seconds
  digitalWrite(12, LOW); // turns light off
  delay(5000); // duration is 5 seconds
}
