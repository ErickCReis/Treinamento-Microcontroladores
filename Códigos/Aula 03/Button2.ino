// Button 2 - Utilizando escrita em registradores
/* Consumo de memória:
 *  150 bytes Flash
 *  0 bytes SRAM
*/

const int buttonPin = 2;        // Número da porta do botão
const int ledPin = 5;          // Número do porta do LED

int main(void) {
  // DDRB - Registrador de direção do PORTB
  bitSet(DDRB, ledPin);               // Define D13 (PB5) como saída.

  // DDRD - Registrador de direção do PORTD
  bitClear(DDRD, buttonPin);          // Define D2 (PD2) como entrada.
  bitSet(PORTD, buttonPin);           // habilita o pull_up
  
  while(1) {
    if (bitRead(PIND, buttonPin)) {   // Checa o estado do botão
      bitSet(PORTB, ledPin);          // Liga o LED
    } else {
      bitClear(PORTB, ledPin);        // Desliga o LED
    }
  }
}
