void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(9, OUTPUT); // Vermelho
  pinMode(10, OUTPUT); // Verde
  pinMode(11, OUTPUT); // Azul

}

void loop() {

    digitalWrite(9, HIGH);
    delay(1000);
    digitalWrite(9, LOW);

    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10, LOW);

    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11, LOW);

} 