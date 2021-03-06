// Blink

/*  Código simples para piscar um LED, utiliza o acesso direto 
 *  aos registradores e um delay em assembly para minimizar 
 *  o tamanho do programa gerado.
 *  
 *  Consumo de memória:
 *  172 bytes Flash
 *  0 bytes SRAM
*/

#define LED 5             // bit que representa o pino do LED

int main(void){
  // DDRB - Registrador de direção do PORTB
  bitSet(DDRB, LED);      // define o pino do LED como saída.
  
  while (true) {
  // PORTB - Registrador de 'valor' do PORTB
  bitSet(PORTB, LED);     // define o pino do LED como nível lógico alto
  delay();                // delay de 1s
  bitClear(PORTB, LED);   // define o pino do LED como nível lógico baixo
  delay();                // delay de 1s
  }
}

void delay() {
  // Generated by delay loop calculator
  // at http://www.bretmulvey.com/avrdelay.html
  //
  // Delay 16 000 000 cycles
  // 1s at 16.0 MHz
  
  asm volatile (
      "    ldi  r18, 82"  "\n"
      "    ldi  r19, 43"  "\n"
      "    ldi  r20, 0" "\n"
      "1:  dec  r20"  "\n"
      "    brne 1b" "\n"
      "    dec  r19"  "\n"
      "    brne 1b" "\n"
      "    dec  r18"  "\n"
      "    brne 1b" "\n"
      "    lpm" "\n"
      "    nop" "\n"
  );
}
