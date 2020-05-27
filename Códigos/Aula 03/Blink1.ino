// Blink 1 - Sketch exemplo da IDE.
/* Consumo de memória:
 *  924 bytes Flash
 *  9 bytes SRAM
*/

void setup() {
  // LED_BUILTIN no Arduino Uno e Mega é referecia para a porta digital 13.
  pinMode(LED_BUILTIN, OUTPUT);      // Define LED_BUILTIN como saída.
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Define LED_BUILTIN como nível lógico alto
  delay(1000);                       // Delay 1s
  digitalWrite(LED_BUILTIN, LOW);    // Define LED_BUILTIN como nível lógico baixo
  delay(1000);                       // Delay 1s
}
