//zona de declaracion
int ledAzul = 13;
int ledNaranja  = 12;
int pausa = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledAzul, OUTPUT);
  pinMode(ledNaranja, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  parpadeo(pausa,3, ledAzul);
  parpadeo(pausa * 5, 3, ledNaranja);
}

void parpadeo(int dato, int cant, int led){
  for (int i = 0 ; i < cant ; i++){
    digitalWrite(led, HIGH);
    delay(dato);
    digitalWrite(led, LOW);
    delay(dato);
  } 
}
