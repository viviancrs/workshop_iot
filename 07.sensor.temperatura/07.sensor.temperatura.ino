int ledPin = 9; // o pin que o led está conectado
int lm35Pin = A0; // o pin analógico que o sensor ldr está conectado
float lm35Value;

// rotina que é executada ao pressionar reset
void setup() {
  Serial.begin(9600); // inicia a comunicação serial
  pinMode(ledPin, OUTPUT); // define a porta 9 como saída
  pinMode(lm35Pin, INPUT); // define a porta A0 como entrada
}

// rotina que é executada o tempo todo
void loop() {
  // lê o valor do sensor ldr
  lm35Value = (float(analogRead(lm35Pin))*5/(1023))/0.01;

  // se o valor lido for maior que 28, então acende o led
  if (lm35Value >= 28) {
    digitalWrite(ledPin, HIGH); // acende o led
  } else {
    digitalWrite(ledPin, LOW); // acende o led
  }

  Serial.println(lm35Value);
  
  // espera por 100 milisegundos
  delay(100);
}
