// LED Fade: Conecte um LED a qualquer pino PWM e faça-o desvanecer de forma suave.

void setup() {
  pinMode(9, OUTPUT);
}

void loop() {
  for (int i = 0; i <= 255; i++) {
    analogWrite(9, i);
    delay(10);
  }
  for (int i = 255; i >= 0; i--) {
    analogWrite(9, i);
    delay(10);
  }
}
