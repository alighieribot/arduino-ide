// Melodia: Tocar uma música usando a biblioteca toneAC

/*
Definir pinos do buzzer e botão

Definir melodia da música
Definir duração de cada nota

Definir variáveis de controle (índice da melodia, reproduzindo)

Configurar pinos do buzzer e botão

Enquanto verdadeiro:
    Se o botão for pressionado:
        Se não estiver reproduzindo:
            Reproduzir melodia
        Senão:
            Interromper melodia
        Aguardar um pequeno intervalo de tempo

Função para reproduzir melodia:
    Definir reproduzindo como verdadeiro
    Para cada nota na melodia:
        Se não estiver reproduzindo:
            Sair do loop
        Tocar a nota no buzzer
        Aguardar a duração da nota
        Parar o som do buzzer
        Aguardar um pequeno intervalo de tempo
    Definir reproduzindo como falso

Função para interromper melodia:
    Definir reproduzindo como falso
    Parar o som do buzzer
*/

#include "toneAC.h"

// pinos
const int buzzerPin = 9;
const int buttonPin = 2;

// array de frequências das notas
const int melody[] = {NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_A4, NOTE_B4, NOTE_C5};

// duração de cada nota (correspondente às frequências da melodia)
const int noteDuration = 250;

// variáveis de controle da reprodução da música
int melodyIndex = 0;
boolean isPlaying = false;

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // verifica se o botão foi pressionado para iniciar/parar a música
  if (digitalRead(buttonPin) == LOW) {
    if (!isPlaying) {
      playMelody();
    } else {
      stopMelody();
    }
    delay(200); // ***debounce
  }
}


void playMelody() {
  isPlaying = true;
  for (melodyIndex = 0; melodyIndex < sizeof(melody) / sizeof(int); melodyIndex++) {
    if (!isPlaying) {
      break; // se a música for interrompida, sai do loop
    }
    toneAC(buzzerPin, melody[melodyIndex], noteDuration);
    delay(noteDuration);
    noToneAC(buzzerPin);
    delay(noteDuration / 2);
  }
  isPlaying = false;
}

// para a melodia
void stopMelody() {
  isPlaying = false;
  noToneAC(buzzerPin);
}
