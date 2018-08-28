//zona de declaracion
int ledAzul = 13;
int ledNaranja  = 12;
int pausa = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledAzul, OUTPUT);
  pinMode(ledNaranja, OUTPUT);
  
}

void loop() {
  digitalWrite(ledNaranja, HIGH);
  digitalWrite(ledAzul, LOW);
  delay(pausa);

  digitalWrite(ledNaranja, LOW);
  digitalWrite(ledAzul, HIGH);
  delay(pausa);
}