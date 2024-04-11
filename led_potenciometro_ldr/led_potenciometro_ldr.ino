const int LED_R = 9;
const int LED_G = 10;
const int LED_B = 11;

void setup() {

  Serial.begin(9600);
  pinMode(LED_R, OUTPUT); // Vermelho
  pinMode(LED_G, OUTPUT); // Verde
  pinMode(LED_B, OUTPUT); // Azul
  
  pinMode(A0, INPUT); // 
}

void loop() {
  int valor = analogRead (A0);
  int val = map(valor, 0, 1023, 0, 255);

  int leitura = analogRead (A3);
  int tensiometro = map(leitura, 0, 1023, 0, 255);

  Serial.print("Valor recebido: ");
  Serial.println(valor);
  Serial.print("Valor convertido: ");
  Serial.println(val);
  Serial.print("Valor tensiometro: ");
  Serial.println(leitura);


  analogWrite(LED_R, val);
  analogWrite(LED_B, tensiometro);

  /*digitalWrite(LED_R, HIGH);
  delay(1000);

  digitalWrite(LED_G, HIGH);
  delay(1000);

  digitalWrite(LED_B, HIGH);
  delay(1000);

  digitalWrite(LED_R, LOW);
  delay(1000);

  digitalWrite(LED_G, LOW);
  delay(1000);

  digitalWrite(LED_B, LOW);*/
  delay(500);

}
