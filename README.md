
   # Introdução de Eletrônica:

   Eletrônica é o ramo da ciência e da engenharia que lida com o controle de elétrons em circuitos e componentes eletrônicos. Compreender alguns conceitos básicos de eletrônica é fundamental para entender os códigos e circuitos usados no Arduino.

   1. Circuitos elétricos:
      Um circuito elétrico é uma rota fechada através da qual a corrente elétrica pode fluir. Ele é composto por uma fonte de energia (como uma bateria), fios condutores e componentes eletrônicos (como resistores, LEDs, sensores, etc.).

   2. Tensão (Voltagem):
      A tensão, medida em volts (V), é a diferença de potencial elétrico entre dois pontos em um circuito. Ela é responsável por impulsionar a corrente elétrica através dos componentes.

   3. Corrente elétrica:
      A corrente elétrica, medida em ampères (A), é o fluxo de elétrons em um circuito. Ela é causada pela diferença de potencial (tensão) aplicada a um circuito e é influenciada pela resistência dos componentes.

   4. Resistência:
      A resistência, medida em ohms (Ω), é a oposição ao fluxo de corrente em um circuito. Ela pode ser introduzida por componentes como resistores e é influenciada pelo material e geometria desses componentes.

   5. Pinos do Arduino:
      O Arduino possui pinos digitais e analógicos que podem ser usados para conectar componentes eletrônicos. Os pinos digitais podem ser configurados como entradas ou saídas e são usados para enviar ou receber sinais digitais (ligado/desligado). Os pinos analógicos são usados para ler sinais analógicos, como sensores de luz ou temperatura.

   6. Conexões:
      Para conectar componentes ao Arduino, são usados fios condutores para estabelecer as conexões elétricas. Cada componente é conectado aos pinos corretos do Arduino para garantir que a corrente elétrica flua corretamente.
      
      
      
      
   # Regras Básicas de Eletrônica:

   1. Tensão (Voltagem):
      - A tensão, medida em volts (V), representa a diferença de potencial elétrico entre dois pontos em um circuito.
      - Ela é responsável por impulsionar a corrente elétrica através dos componentes.
      - A tensão é expressa como ΔV, que representa a diferença de potencial entre dois pontos (ΔV = V2 - V1).

   2. Corrente Elétrica:
      - A corrente elétrica, medida em ampères (A), representa o fluxo de elétrons em um circuito.
      - Ela é causada pela diferença de potencial (tensão) aplicada a um circuito.
      - A corrente elétrica é expressa como I e é medida usando um amperímetro.

   3. Lei de Ohm:
      - A Lei de Ohm relaciona tensão, corrente e resistência em um circuito.
      - A fórmula da Lei de Ohm é V = I * R, onde V é a tensão, I é a corrente e R é a resistência.
      - Ela estabelece que a corrente em um circuito é diretamente proporcional à tensão aplicada e inversamente proporcional à resistência total do circuito.

   4. Resistência Elétrica:
      - A resistência elétrica, medida em ohms (Ω), é a oposição ao fluxo de corrente em um circuito.
      - Ela pode ser introduzida por componentes como resistores, que limitam a corrente elétrica.
      - A resistência elétrica é expressa como R e é medida usando um ohmímetro.

   5. Associação de Resistores:
      - Resistores podem ser conectados em série ou em paralelo para obter valores de resistência desejados.
      - Resistores em série são conectados um após o outro, aumentando a resistência total do circuito.
      - Resistores em paralelo são conectados em pontos comuns, diminuindo a resistência total do circuito.

   6. Potência Elétrica:
      - A potência elétrica, medida em watts (W), é a taxa de transferência de energia em um circuito.
      - Ela pode ser calculada usando as fórmulas P = V * I ou P = I^2 * R, onde P é a potência, V é a tensão, I é a corrente e R é a resistência.





    # Exercícios:
    
    Calcule a diferença de potencial entre dois pontos A e B, em um circuito, se V(A) = 10V e V(B) = 5V.
    
    Determine a corrente elétrica em um circuito se a tensão aplicada for de 12V e a resistência for de 4Ω.
    
    Calcule a resistência de um resistor que possui uma tensão de 9V aplicada a ele e uma corrente de 3A passando por ele.
    
    Conecte dois resistores em série de 10Ω cada. Calcule a resistência total do circuito.
    
    Conecte três resistores em paralelo de 20Ω cada. Calcule a resistência total do circuito.
    
    Determine a potência dissipada em um resistor de 5Ω quando uma corrente de 2A passa por ele.



    # Respostas:

    ΔV = 10V - 5V = 5V
    I = 12V / 4Ω = 3A
    R = 9V / 3A = 3Ω
    RT = 10Ω + 10Ω = 20Ω
    RT = 20Ω/3
    P = (2A)^2 * 5Ω = 20W

  Desafio: Crie um circuito no Arduino que acenda um LED quando a tensão lida por uma entrada analógica ultrapassar um determinado valor. Use as regras de tensão e comparadores para controlar o LED.

