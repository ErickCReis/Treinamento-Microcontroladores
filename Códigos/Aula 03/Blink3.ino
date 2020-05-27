// Blink 2 - Substituindo funções setup() e loop() por apenas 1 main()
/* Consumo de memória:
 *  494 bytes Flash
 *  9 bytes SRAM
*/

int main(void){
  // DDRB - Registrador de direção do PORTB
  // DDB5 - Bit 5 do registrador DDRB
  DDRB |= (1 << DDB5);      // Define D13 (PB5) como saída.
  
  while (true) {
  // PORTB - Registrador de 'valor' do PORTB
  // PORTB5 - Bit 5 do registrador PORTB
  PORTB |= (1 << PORTB5);   // Define D13 (PB5) como nível lógico alto
  delay(1000);              // Delay 1s
  PORTB &= ~(1 << PORTB5);  // Define D13 (PB5) como nível lógico baixo
  delay(1000);              // Delay 1s
  }
}
