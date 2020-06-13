// Interrup 2

const uint8_t led2 = 5;
const uint8_t led1 = 4;
const uint8_t led0 = 3;

// Variáveis globais que são acessadas por interrupções devem ser declaradas volatile;
volatile byte last_PINB = PINB;

void setup() {
  cli();
  /* Equivalente a
  pinMode(10, INPUT_PULLUP);
  pinMode(09, INPUT_PULLUP);
  pinMode(08, INPUT_PULLUP);
  */
  DDRB &= ~( (1 << DDB2) | (1 << DDB1) | (1 << DDB0) );
  PORTB |= ( (1 << PORTB2) | (1 << PORTB1) | (1 << PORTB0) );

  /* Equivalente a
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  */
  DDRB |= ( (1 << DDB5) | (1 << DDB4) | (1 << DDB3) );
  PORTB |= ( bit(led2) | bit(led1) | bit(led0) );
  
  // Seta as "chaves" necessárias para que as interrupções cheguem ao vetor;
  PCICR |= (1 << PCIE0);
  PCMSK0 |= ( (1 << PCINT2) | (1 << PCINT1) | (1 << PCINT0) );
  
  sei();
}
void loop() {}

/* Função de Tratamento de Interrupção */
ISR(PCINT0_vect) {
  uint8_t changed_bits;
  changed_bits = PINB ^ last_PINB;
  last_PINB = PINB;
  
  if (changed_bits & bit(PINB2)){
    if (PINB & bit(PINB2)) {
    // D10 mudou de LOW para HIGH;
      PORTB |= bit(led2);
    }
    else {
    // D10 mudou de HIGH para LOW;
      PORTB &= ~bit(led2);
    }
  }
  else if (changed_bits & bit(PINB1)){
    if (PINB & bit(PINB1)) {
    // D09 mudou de LOW para HIGH;
      PORTB |= bit(led1);
    }
    else {
    // D09 mudou de HIGH para LOW;
      PORTB &= ~bit(led1);
    }
  }
  else if (changed_bits & bit(PINB0)){
    if (PINB & bit(PINB0)) {
    // D08 mudou de LOW para HIGH;
      PORTB |= bit(led0);
    }
    else {
    // D08 mudou de HIGH para LOW;
      PORTB &= ~bit(led0);
    }
  }
}
