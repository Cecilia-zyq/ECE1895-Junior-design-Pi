
void setup() {
  pinMode(8, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(2) == LOW) {
    digitalWrite(8, HIGH);  
    delay(500); 
    digitalWrite(8, LOW);
    delay(500);
  } else {
    digitalWrite(8, LOW);
  }
}
