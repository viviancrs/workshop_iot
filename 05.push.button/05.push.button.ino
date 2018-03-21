int ledPin = 9; // o pin que o led está conectado
int pushButtonPin = 10; // o pin que o push button está conectado

// rotina que é executada ao pressionar reset
void setup() {
  Serial.begin(9600); // inicia a comunicação serial
  pinMode(ledPin, OUTPUT); // define a porta 9 como saída
  pinMode(pushButtonPin, INPUT); // define a porta 10 como entrada
}

// rotina que é executada o tempo todo
void loop() {
  // lê se o botão foi pressionado
  int pushButtonValue = digitalRead(pushButtonPin);

  // se o botão foi pressionado
  if (pushButtonValue == HIGH) {
    digitalWrite(ledPin, HIGH); // acende o led
  } else {
    digitalWrite(ledPin, LOW); // apaga o led
  }

  // espera por 30 milisegundos
  delay(30);
}
