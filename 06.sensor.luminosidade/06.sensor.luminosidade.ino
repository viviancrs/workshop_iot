int ledPin = 9; // o pin que o led está conectado
int ldrPin = A0; // o pin analógico que o sensor ldr está conectado
int ldrValue = 0;

// rotina que é executada ao pressionar reset
void setup() {
  Serial.begin(9600); // inicia a comunicação serial
  pinMode(ledPin, OUTPUT); // define a porta 9 como saída
  pinMode(ldrPin, INPUT); // define a porta A0 como entrada
}

// rotina que é executada o tempo todo
void loop() {
  // lê o valor do sensor ldr
  ldrValue = analogRead(ldrPin);

  // se o valor lido for maior que 500, então acende o led
  if (ldrValue >= 500) {
    digitalWrite(ledPin, HIGH); // acende o led
  } else {
    digitalWrite(ledPin, LOW); // acende o led
  }

  Serial.println(ldrValue);
  
  // espera por 100 milisegundos
  delay(100);
}
