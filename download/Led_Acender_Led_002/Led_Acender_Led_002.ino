// Duas formas de definir os pinos:
// Pela numeração do NodeMCU:

//#define LED_1   D1
//#define LED_2   D2

// Pela numeração do GPIO:
//#define LED_1   5
//#define LED_2   4

const int ledPino_1 = D5;
const int ledPino_2 = D6;

void setup() {
  // Configura pinos como saída
  Serial.begin(9600);
  
  pinMode(ledPino_1, OUTPUT);
  pinMode(ledPino_2, OUTPUT);
}

void loop() {
  // Pisca os LEDs de forma intercalada a cada 1 segundo
  digitalWrite(ledPino_1, HIGH);

  digitalWrite(ledPino_2, LOW);

  delay(1000);

  digitalWrite(ledPino_1, LOW);

  digitalWrite(ledPino_2, HIGH);

  delay(1000);
}
