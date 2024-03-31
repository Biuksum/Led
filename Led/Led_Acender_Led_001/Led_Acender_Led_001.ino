// Programa : Pisque um LED

const int ledPino = D5;

void setup() {

  //Define a porta do led como saida
  pinMode(ledPino, OUTPUT);
  
}

void loop() {

  //Acende o led
  digitalWrite(ledPino, HIGH);

  //Aguarda intervalo de tempo em milissegundos
  delay(1000);

  //Apaga o led
  digitalWrite(ledPino, LOW);

  //Aguarda intervalo de tempo em milissegundos
  delay(1000);

}
