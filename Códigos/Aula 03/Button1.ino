// Button 2 - Sketch exemplo da IDE.
/* Consumo de memória:
 *  892 bytes Flash
 *  9 bytes SRAM
*/

const int buttonPin = 2;        // Número do pino do botão
const int ledPin =  13;         // Número do pino do LED
int buttonState = 0;            // Variável que armazena o estado do botão

void setup() {
  pinMode(ledPin, OUTPUT);      // Define o pino do LED como saída
  pinMode(buttonPin, INPUT);    // Defino o pino do botão com entrada
}

void loop() {
  buttonState = digitalRead(buttonPin); // Lê o estado botão

  if (buttonState == HIGH) {            // Checa se o botão foi pressionado
                                        // Se sim o estado é HIGH / Alto / 1
    digitalWrite(ledPin, HIGH);         // Liga o LED
  } else {
    digitalWrite(ledPin, LOW);          // Desliga o LED
  }
}
