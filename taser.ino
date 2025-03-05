int pin = 3;

void setup() {
  pinMode(pin, OUTPUT);  
  Serial.begin(9600);            
}

void loop() {
  // If receiving data from PC
  if (Serial.available() > 0) {
    char command = Serial.read();
    if (command == '1') {
      digitalWrite(pin, HIGH);  // Turn on
    } else if (command == '0') {
      digitalWrite(pin, LOW);  // Turn off
    }
  }
}
