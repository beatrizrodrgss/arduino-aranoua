void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(11, OUTPUT); // Vermelho
  pinMode(12, OUTPUT); // Amarelo
  pinMode(13, OUTPUT); // Verde

}

void loop() {

    digitalWrite(13, HIGH);
    delay(3000);
    digitalWrite(13, LOW);

    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);

    digitalWrite(11, HIGH);
    delay(3000);
    digitalWrite(11, LOW);
    delay(1000);


} 