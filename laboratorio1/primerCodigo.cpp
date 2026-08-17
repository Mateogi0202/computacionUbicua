int PULSADOR = 2;      // pin donde está conectado el botón
int LED = 3;            // pin donde está conectado el LED

void setup() {
  pinMode(PULSADOR, INPUT);   // el pin 2 va a leer el estado del botón
  pinMode(LED, OUTPUT);       // el pin 3 va a controlar el LED
}

void loop() {
  // OJO: en tu montaje, el pin lee LOW cuando presionas el botón
  // por eso la condición se invierte respecto a la guía original
  if (digitalRead(PULSADOR) == LOW) {  
    digitalWrite(LED, HIGH);   // si detecta botón presionado, prende el LED
  } else {
    digitalWrite(LED, LOW);    // si el botón está suelto, apaga el LED
  }
}