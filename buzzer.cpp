// Buzzer: Conecte um buzzer ao pino digital 8 e faça-o tocar uma nota quando um botão conectado ao pino digital 2 for pressionado.

void setup() {
  pinMode(2, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) {
    tone(8, 440, 1000); // Toca a nota A (440 Hz) por 1 segundo
    delay(1000);
  }
}
