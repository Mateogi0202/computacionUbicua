int PULSADOR = 2;        // pin del botón
int LED = 3;              // pin del LED
int estadoLED = LOW;       // variable que guarda el estado actual del LED

void setup() {
  pinMode(PULSADOR, INPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, estadoLED);  // arranca apagado
}

void loop() {

  // 1) espera aquí mientras el botón esté SUELTO (HIGH en tu montaje)
  while (digitalRead(PULSADOR) == HIGH) {
    // no hace nada, solo bloquea el programa hasta que presiones
  }

  // 2) apenas detecta la pulsación (pin en LOW), cambia el estado del LED
  estadoLED = !estadoLED;
  digitalWrite(LED, estadoLED);

  // 3) espera aquí mientras el botón siga PRESIONADO (LOW en tu montaje)
  while (digitalRead(PULSADOR) == LOW) {
    // no hace nada, solo bloquea el programa hasta que sueltes
  }

  // 4) cuando sueltas, sale del segundo while y vuelve a empezar el loop desde el paso 1

}