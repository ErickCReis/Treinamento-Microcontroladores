// Button

/*  Acionamento de um LED ao pressionar um botão. 
 *  Utiliza o resistor de pull-up interno para garantir 
 *  o nível lógico alto na entrada do Arduíno.
 *  
 *  
 *  Consumo de memória:
 *  150 bytes Flash
 *  0 bytes SRAM
*/

#define buttonPin 2                 // bit que representa o pino do botão
#define ledPin 5                    // bit que representa o pino do LED

int main(void) {
  // DDRB - Registrador de direção do PORTB
  bitSet(DDRB, ledPin);             // define o pino do LED como saída

  // DDRD - Registrador de direção do PORTD
  bitClear(DDRD, buttonPin);        // define o pino do botão como entrada
  bitSet(PORTD, buttonPin);         // habilita o resistor de pull_up no pino do botão
  
  while(1) {
    bool status = bitRead(PIND, buttonPin); // lê e salvo o estado do botão
    
    if (status) {                   // checa de estado está como ativo
                                    // por conta do resistor de pull_up este será o valor padrão
      bitClear(PORTB, ledPin);      // desliga o LED
    } else {
      bitSet(PORTB, ledPin);      // liga o LED
    }
  }
}
