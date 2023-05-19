//Controle de LED com potenciômetro: Conecte um LED a qualquer pino PWM e um potenciômetro ao pino analógico A0. Use o potenciômetro para controlar a intensidade do LED.
void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  int potValue = analogRead(A0);
  int ledValue = map(potValue, 0, 1023, 0, 255);
  analogWrite(9, ledValue);
}
