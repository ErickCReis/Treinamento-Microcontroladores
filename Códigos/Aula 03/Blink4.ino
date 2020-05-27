// Blink 4 - Subtituindo função delay() padrão por delay com for loop
/* Consumo de memória:
 *  172 bytes Flash
 *  0 bytes SRAM
*/

int main(void){
  // DDRB - Registrador de direção do PORTB
  // DDB5 - Bit 5 do registrador DDRB
  DDRB |= (1 << DDB5);      // Define D13 (PB5) como saída.
  
  while (true) {
  // PORTB - Registrador de 'valor' do PORTB
  // PORTB5 - Bit 5 do registrador PORTB
  PORTB |= (1 << PORTB5);   // Define D13 (PB5) como nível lógico alto
  delay();                  // Delay 1s
  PORTB &= ~(1 << PORTB5);  // Define D13 (PB5) como nível lógico baixo
  delay();                  // Delay 1s
  }
}

void delay() {
  for (long i=0; i<500000; i++) asm("");  // Dalay 1s
}
