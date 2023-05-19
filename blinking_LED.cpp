// Blinking LED: Este é o "Hello, World!" do Arduino. Conecte um LED ao pino digital 13 e faça-o piscar a cada segundo.

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}
