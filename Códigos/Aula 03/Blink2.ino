// Blink 2 - Substituindo funções PinMode() e DigitalWrite() pela escrita direta nos registradores.
/* Consumo de memória:
 *  640 bytes Flash
 *  9 bytes SRAM
*/

void setup() {
  // DDRB - Registrador de direção do PORTB
  // DDB5 - Bit 5 do registrador DDRB
  DDRB |= (1 << DDB5);      // Define D13 (PB5) como saída.
}

void loop() {
  // PORTB - Registrador de 'valor' do PORTB
  // PORTB5 - Bit 5 do registrador PORTB
  PORTB |= (1 << PORTB5);   // Define D13 (PB5) como nível lógico alto
  delay(1000);              // Delay 1s
  PORTB &= ~(1 << PORTB5);  // Define D13 (PB5) como nível lógico baixo
  delay(1000);              // Delay 1s
}
