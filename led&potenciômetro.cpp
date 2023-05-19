// LEDs conectados aos pinos digitais 9, 10 e 11 do Arduino
// Potenciômetro conectado ao pino analógico A0.

// pinos para os LEDs
const int ledPin1 = 9;
const int ledPin2 = 10;
const int ledPin3 = 11;

// pino para o potenciômetro
const int potPin = A0;

void setup() {
  // LEDs como saída
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // valor do potenciômetro (0 a 1023)
  int potValue = analogRead(potPin);

  // desliga todos os LEDs
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);

  // acende um LED diferente com base no valor do potenciômetro
  if (potValue < 342) {
    // se o valor for menor que 342, acende o primeiro LED
    digitalWrite(ledPin1, HIGH);
  } else if (potValue < 684) {
    // se o valor for menor que 684, acende o segundo LED
    digitalWrite(ledPin2, HIGH);
  } else {
    // se o valor for maior ou igual a 684, acende o terceiro LED
    digitalWrite(ledPin3, HIGH);
  }
}
