// Definindo os pinos para os LEDs das luzes do semáforo
const int redLight = 8;
const int yellowLight = 9;
const int greenLight = 10;

// Definindo tempos para cada fase em milissegundos
const unsigned long redDuration = 6000;      // 6 segundos
const unsigned long yellowDuration = 2000;   // 2 segundos
const unsigned long greenDuration = 2000;    // 2 segundos
const unsigned long greenExtraDuration = 2000;  // 2 segundos extras para pedestres

// Variáveis de controle
unsigned long previousMillis = 0;   // Marca o último momento de transição
int currentPhase = 0;               // Armazena a fase atual do semáforo

void setup() {
  // Configurando os pinos como saídas
  pinMode(redLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  switch (currentPhase) {
    case 0:  // Luz vermelha
      if (currentMillis - previousMillis >= redDuration) {
        previousMillis = currentMillis;
        currentPhase = 1;
      }
      setLights(HIGH, LOW, LOW);
      break;

    case 1:  // Luz amarela após o vermelho
      if (currentMillis - previousMillis >= yellowDuration) {
        previousMillis = currentMillis;
        currentPhase = 2;
      }
      setLights(LOW, HIGH, LOW);
      break;

    case 2:  // Luz verde inicial
      if (currentMillis - previousMillis >= greenDuration) {
        previousMillis = currentMillis;
        currentPhase = 3;
      }
      setLights(LOW, LOW, HIGH);
      break;

    case 3:  // Tempo extra de luz verde para pedestres
      if (currentMillis - previousMillis >= greenExtraDuration) {
        previousMillis = currentMillis;
        currentPhase = 4;
      }
      setLights(LOW, LOW, HIGH);
      break;

    case 4:  // Luz amarela após o verde
      if (currentMillis - previousMillis >= yellowDuration) {
        previousMillis = currentMillis;
        currentPhase = 0;  // Retorna para o vermelho
      }
      setLights(LOW, HIGH, LOW);
      break;
  }
}

// Função para definir o estado dos LEDs
void setLights(int redState, int yellowState, int greenState) {
  digitalWrite(redLight, redState);
  digitalWrite(yellowLight, yellowState);
  digitalWrite(greenLight, greenState);
}
