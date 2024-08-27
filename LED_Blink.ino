//Exemplo de Código para Controle Básico de LED

void setup() {
  // Configura o pino 8 como saída
  pinMode(8, OUTPUT);
}

void loop() {
  // Liga o LED (definindo o pino 8 como HIGH)
  digitalWrite(8, HIGH);
  // Espera por 1 segundo (1000 milissegundos)
  delay(1000);

  // Desliga o LED (definindo o pino 8 como LOW)
  digitalWrite(8, LOW);
  // Espera por 1 segundo (1000 milissegundos)
  delay(1000);
}


// Aprofundando: PWM (Modulação por Largura de Pulso) e controle de brilho
void setup() {
  // Configura o pino 9 como saída
  pinMode(9, OUTPUT);
}

void loop() {
  // Aumenta o brilho do LED
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(9, brightness);
    delay(10);
  }
  // Diminui o brilho do LED
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(9, brightness);
    delay(10);
  }
}
