#include <Arduino.h>
#define LED_PIN 2  // Pin asignado al LED

void setup() {
  pinMode(LED_PIN, OUTPUT);  // Configurar como salida
}

void loop() {
  GPIO.out_w1ts = (1 << LED_PIN);  // Activar LED

  // Espera sin usar delay
  while (millis() %
