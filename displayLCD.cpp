// Display LCD: Conecte um display LCD ao seu Arduino (os pinos exatos dependem do tipo de LCD) e imprima uma mensagem no display.

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello, World!");
}

void loop() {
  lcd.setCursor(0, 1);
  lcd.print(millis() / 1000);
}
