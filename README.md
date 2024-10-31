# semaforo-ponderada

## Descrição do Projeto

O código controla três LEDs (vermelho, amarelo e verde) conectados ao Arduino, simulando um semáforo real com as seguintes fases:
- **6 segundos no vermelho**
- **2 segundos no amarelo**
- **2 + 2 segundos no verde** (tempo adicional para pedestres)
- **2 segundos no amarelo**

### Montagem

1. **LED Vermelho**: Conectado ao pino digital D8 com resistor de 220Ω.
2. **LED Amarelo**: Conectado ao pino digital D9 com resistor de 220Ω.
3. **LED Verde**: Conectado ao pino digital D10 com resistor de 220Ω.
4. **GND** do Arduino conectado ao GND da protoboard.

### Componentes

| Componente  | Quantidade | Especificações           |
|-------------|------------|--------------------------|
| LED Vermelho | 1         | 5mm, 2V                 |
| LED Amarelo  | 1         | 5mm, 2V                 |
| LED Verde    | 1         | 5mm, 2V                 |
| Resistores   | 3         | 220Ω                    |
| Arduino      | 1         | Modelo Uno    |

## Código

O código para controlar o semáforo está disponível no repositório e foi implementado com a função `millis()` para evitar o uso de `delay()`.

## Demonstração

Video chamado "demo" na raiz do projeto.


### Tabela de Avaliação entre Pares
#### Avaliador: Kauan Massuia
|Critério|	Contempla (Pontos)|	Contempla Parcialmente (Pontos)	|Não Contempla (Pontos)	|Observações do Avaliador|
|-|-|-|-|-|
|Montagem física com cores corretas, boa disposição dos fios e uso adequado de resistores	|Até 3	|Até 1,5	| 0 | Nota: 2.9, Esta tudo correto porem nao usou o fio ideal para o positivo. |
|Temporização adequada conforme tempos medidos com auxílio de algum instrumento externo	|Até 3	|Até 1,5	|0 | Nota 3. De acordo conforme o solicitado.|
|Código implementa corretamente as fases do semáforo e estrutura do código (variáveis representativas e comentários) |	Até 3|	Até 1,5 |	0 | Nota: 3. Código possui todas as fases e a estrutura está bem definida.|
|Ir além: Implementou um componente de extra, fez com millis() ao invés do delay() e/ou usou ponteiros no código |	Até 1 |	Até 0,5 |	0 | Nota: 0.5 Sem implementação de ponteiros e nem componente extra, porém usa Milis que é essencial para um bom funcionamento do Arduino|
| | | | |Pontuação Total|
