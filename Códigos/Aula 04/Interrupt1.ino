// Interrupt 1

/*Interrupção externa utilizando funções do Arduíno.*/

const byte LED = 13;
const byte BUTTON = 2;

void setup (){
  pinMode (LED, OUTPUT);        // led com saída
  digitalWrite (BUTTON, HIGH);  // habilitando resistor de pull_up para o botão
  attachInterrupt (digitalPinToInterrupt (BUTTON), switchPressed, CHANGE);  // configurando interrupção
}

void loop (){} 

// Rotina de interrupção
void switchPressed (){
  if (digitalRead (BUTTON) == HIGH)
    digitalWrite (LED, HIGH);
  else
    digitalWrite (LED, LOW);
}
