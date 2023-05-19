/*
   Programação no Arduino IDE:

   O Arduino IDE é um ambiente de desenvolvimento integrado (IDE) amplamente utilizado para programar placas Arduino. Ele fornece uma interface amigável e simplificada para criar projetos de eletrônica interativa. A programação no Arduino IDE é baseada na linguagem C++.

   Diferenças em relação à programação padrão:

   1. Funções setup() e loop():
      No Arduino IDE, a estrutura básica de um programa consiste nas funções setup() e loop(). A função setup() é executada apenas uma vez, no início do programa, e é usada para configurar os pinos, inicializar bibliotecas, definir variáveis iniciais, etc. A função loop() é executada repetidamente em um loop infinito, após a execução da função setup(), e é usada para definir o comportamento contínuo do programa.

   2. Bibliotecas do Arduino:
      O Arduino IDE fornece uma biblioteca padrão que contém uma vasta coleção de funções e definições úteis para o desenvolvimento em Arduino. Essas bibliotecas simplificam o uso de dispositivos e módulos, como sensores, atuadores, displays, comunicação, entre outros. As bibliotecas são incluídas no programa por meio da diretiva "#include", como "#include <Wire.h>".

   3. Funções e macros específicas do Arduino:
      O Arduino IDE oferece uma série de funções e macros específicas para facilitar o desenvolvimento em Arduino. Por exemplo, as funções pinMode(), digitalWrite() e analogRead() são usadas para controlar os pinos do Arduino. Além disso, existem macros pré-definidas para notas musicais, como NOTE_C4, NOTE_D4, etc., usadas para reproduzir melodias em um buzzer.

   4. Ambiente de execução limitado:
      A programação no Arduino IDE é executada em um ambiente limitado, com recursos de memória e processamento restritos em comparação com computadores tradicionais. É importante otimizar o uso de recursos e evitar práticas que possam consumir muita memória, como alocação dinâmica de memória.

   5. Portabilidade:
      Uma vantagem da programação no Arduino IDE é a portabilidade. Os programas desenvolvidos no Arduino IDE podem ser facilmente transferidos para diferentes placas Arduino, pois a maioria das funcionalidades é compatível entre elas.

   6. Facilidade de uso:
      O Arduino IDE foi projetado para ser fácil de usar, especialmente para iniciantes em programação e eletrônica. Ele fornece uma interface intuitiva, exemplos de código prontos e uma comunidade ativa que compartilha projetos e soluções.

   7. Integração com a plataforma Arduino:
      O Arduino IDE oferece suporte integrado para carregar o código para a placa Arduino por meio de uma porta serial. Ele também inclui ferramentas de depuração e um monitor serial para facilitar o desenvolvimento e a depuração de projetos.

   8. Estrutura básica do programa:
      No Arduino IDE, um programa é composto por uma função setup() para configurações iniciais, uma função loop() para a lógica principal do programa e outras funções personalizadas, se necessário. O código dentro da função setup() é executado uma vez, enquanto o código dentro da função loop() é executado repetidamente em um loop infinito.

   9. Hardware específico do Arduino:
      O Arduino IDE é projetado para funcionar com placas Arduino específicas, que possuem hardware e recursos específicos. As placas Arduino possuem uma variedade de pinos digitais e analógicos, interfaces de comunicação, memória limitada, entre outros. A programação no Arduino IDE deve levar em consideração essas características do hardware.

   Tenha em mente que essas são apenas algumas das características e diferenças mais importantes da programação no Arduino IDE em relação à programação padrão em C++.

   Referências:
   - https://www.arduino.cc/reference/en/
   - https://www.arduino.cc/
*/

#include <Arduino.h>  // (7) Inclusão da biblioteca Arduino

const int ledPin = 13;  // (2) Pino do LED

void setup() {
  pinMode(ledPin, OUTPUT);  // (3) Configuração do pino do LED como saída
}

void loop() {
  digitalWrite(ledPin, HIGH);  // (3) Acende o LED
  delay(1000);  // (4) Aguarda 1 segundo

  digitalWrite(ledPin, LOW);  // (3) Apaga o LED
  delay(1000);  // (4) Aguarda 1 segundo
}
