//zona de declaracion
int led  = 13;
int pausa = 200;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  parpadeo(pausa,3);
  parpadeo(pausa * 5, 3);
}

void parpadeo(int dato, int cant){
  for (int i = 0 ; i < cant ; i++){
    digitalWrite(led, HIGH);
    delay(dato);
    digitalWrite(led, LOW);
    delay(dato);
  } 
}

