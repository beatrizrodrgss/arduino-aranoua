void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
}

void loop() {
  for(int i = 0; i < 1000; i = i + 50){
    digitalWrite(12, HIGH);
    delay(i);
    digitalWrite(12, LOW);
    delay(i);

  }

  for(int i = 1000; i > 0; i = i - 50){
    digitalWrite(12, HIGH);
    delay(i);
    digitalWrite(12, LOW);
    delay(i);


  }
}  
  