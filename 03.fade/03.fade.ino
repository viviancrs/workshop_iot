int ledPin = 9; // o pin pwm que o led está conectado
int brilho = 0; // quantidade de brilho do led
int fade = 5; // quantidade de brilho para somar

// rotina que é executada ao pressionar reset
void setup() {
  Serial.begin(9600); // inicia a comunicação serial
  pinMode(ledPin, OUTPUT); // define a porta 9 como saída
}

// rotina que é executada o tempo todo
void loop() {
  // seta o brilho do pin 9
  analogWrite(ledPin, brilho); 

  // aumenta o brilho para a próxima vez que entrar no loop
  brilho = brilho + fade;
  Serial.println(brilho);
  
  // ao chegar no término do fade, inverte a direção (para apagar ou acender)
  if (brilho <= 0 || brilho >= 255) {
    fade = fade * - 1;
  }

  // espera por 30 milisegundos
  delay(30);
}
