void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // activates serial connection in USB port and sets baud rate to 9600
  Serial.setTimeout(10); // makes Arduino scan the serial buffer every ten milliseconds
  Serial.println("Hello, how are you?"); // say "Hello, how are you?" when it first boots up
  Serial.println("Send 'On' to turn on the LED."); // tells user to use command On to turn light on
  Serial.println("Send 'Off' to turn off the LED."); // tells user to use command Off to turn light off
  pinMode(13, OUTPUT); // set pin 13 to output mode
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) { // checks to see if anything is in the serial buffer
    String command; // create String variable comments
    command = Serial.readString(); // reads contents of serial buffer and stores them as command variable
    if (command == "On") { // lines beneath are true if the command variable is On
      Serial.println("OK, turning the light on..."); // makes serial monitor say "OK, turning the light on..."
      digitalWrite(13, HIGH); // turns light on
    }
    else if (command == "Off") { // lines beneath are true if the command variable is Off 
      Serial.println("OK, turning the light off..."); // makes serial monitor say "OK, turning the light off..." 
      digitalWrite(13, LOW); // turns light off
    }
  }
}
