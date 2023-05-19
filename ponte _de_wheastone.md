# Ponte de Wheatstone

A Ponte de Wheatstone é um circuito elétrico utilizado para medir resistências desconhecidas. Consiste em quatro resistores, sendo dois resistores conhecidos e dois resistores desconhecidos, conectados em uma configuração de circuito de ponte.

![ins0529_0003](https://github.com/alighieribot/arduino-ide-python/assets/131944578/110eb298-84eb-4e50-a5dc-853582004358)

O resistor Rx é a resistência desconhecida que desejamos medir. Os resistores Ra, Rb e Rc são resistores conhecidos.

A ponte é alimentada por uma fonte de tensão. Ao ajustar os valores de Ra, Rb e Rc, é possível equilibrar a ponte, fazendo com que a corrente através de Rx seja zero. Nesse ponto de equilíbrio, podemos determinar o valor de Rx usando a seguinte fórmula:

Rx = (Rb / Ra) * Rc

A partir dessa fórmula, podemos ver que o valor de Rx é proporcional à razão dos resistores Rb e Ra, multiplicado pelo valor de Rc.

A Ponte de Wheatstone é amplamente utilizada em aplicações de medição de resistência, como sensores de temperatura e células de carga. Ela é especialmente útil quando as resistências desconhecidas são muito pequenas ou muito grandes para serem medidas diretamente com um multímetro.

![t725](https://github.com/alighieribot/arduino-ide-python/assets/131944578/fee67a0a-2ffa-4d11-bff5-d0c253698a01)
