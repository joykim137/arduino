void setup() {
  // put your setup code here, to run once:
  Serial.setTimeout(10);
  Serial.begin(9600);
  Serial.println("Hello, how are you?");
  Serial.println("Send 'On' to turn on the LED.");
  Serial.println("Send 'Off' to turn off the LED.");
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    String command;
    command = Serial.readString();      
    if (command == "On") {
      Serial.println("OK, turning the light on...");  
      digitalWrite(13, HIGH);    
    }
    else if (command == "Off") {
      Serial.println("OK, turning the light off...");
      digitalWrite(13, LOW);
    }
  }
}
