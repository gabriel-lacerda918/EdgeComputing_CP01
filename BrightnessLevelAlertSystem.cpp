// Definições de pinos
const int ldrPin = A0; // Pino analógico para o LDR
const int greenLedPin = 8; // Pino do LED verde
const int yellowLedPin = 9; // Pino do LED amarelo
const int redLedPin = 10; // Pino do LED vermelho
const int buzzerPin = 7; // Pino do buzzer

// Definições de limites de luminosidade
const int luminosityThresholdOK = 600; // Luminosidade considerada OK
const int luminosityThresholdAlert = 200; // Luminosidade considerada em alerta

// Variáveis globais
int luminosityValue = 0; // Valor de luminosidade lido do LDR
unsigned long buzzerStartTime = 0; // Armazena o tempo de início do som do buzzer

void setup() {
  // Inicialização dos pinos
  pinMode(ldrPin, INPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  
  // Inicialização do monitoramento
  Serial.begin(9600); // Inicialização da comunicação serial
}

void loop() {
  // Leitura da luminosidade
  luminosityValue = analogRead(ldrPin);
      
  // Verificação dos limites e acionamento dos LEDs e buzzer
  if (luminosityValue >= luminosityThresholdOK) {
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, LOW);
    noTone(buzzerPin);
  } else if (luminosityValue >= luminosityThresholdAlert) {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
    tone(buzzerPin, 1000); // Frequência do buzzer
    delay(1000);// Duração de 3 segundos 
    noTone(buzzerPin); // Parada/intervalo do acionamento do buzzer
    delay(3000);// Duração de 3 segundos 
    
  } else {
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
    tone(buzzerPin, 291); // Frequência do buzzer 
    delay(250);// Intervalos de 3 segundos
    noTone(buzzerPin); // Parada/intervalo do acionamento do buzzer
  }

  // Saída de depuração para monitoramento
  Serial.print("Luminosidade: ");
  Serial.println(luminosityValue);
  delay(2000); // Aguarda 2 segundos entre as leituras
}
