int ledPin = 9;  // qual a porta do led

// rotina que é executada ao pressionar reset
void setup() {
  Serial.begin(9600); // inicia a comunicação serial
  pinMode(ledPin, OUTPUT); // define a porta 9 como saída
}

// rotina que é executada o tempo todo
void loop() {
  digitalWrite(ledPin, HIGH); // acende o led
  delay(2000); // espera dois segundos
  
  digitalWrite(ledPin, LOW); // apaga o led
  delay(2000); // espera dois segundos
}
