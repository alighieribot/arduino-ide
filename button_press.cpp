// Button Press: Conecte um botão ao pino digital 2 e um LED ao pino digital 13. Faça o LED acender quando o botão for pressionado.

void setup() {
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
}
