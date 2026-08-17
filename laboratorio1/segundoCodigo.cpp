int PULSADOR = 2;         // pin del botón
int LED = 3;               // pin del LED
int estadoLED = LOW;        // variable que "recuerda" si el LED está prendido o apagado

void setup() {
  pinMode(PULSADOR, INPUT);
  pinMode(LED, OUTPUT);
  digitalWrite(LED, estadoLED);  // arranca apagado
}

void loop() {

  // se queda esperando aquí mientras el botón NO esté presionado
  // (en tu montaje, "no presionado" = HIGH, por eso el while espera mientras sea HIGH)
  while (digitalRead(PULSADOR) == HIGH) {
    // no hace nada, solo espera
  }

  // en este punto ya detectó que presionaste el botón (pin en LOW)
  estadoLED = !estadoLED;         // invierte el estado: si estaba HIGH pasa a LOW, y viceversa
  digitalWrite(LED, estadoLED);   // aplica el nuevo estado al LED

}