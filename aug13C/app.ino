//zona de declaracion
const int ledAzul = 13;
const int ledNaranja  = 12;
const byte boton = 7;
const int pausa = 250;
//int estadoBoton = 0;
bool estadoBoton = 0;
bool aux = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledAzul, OUTPUT);
  pinMode(ledNaranja, OUTPUT);
  pinMode(boton, INPUT);
}

void loop() {
    estadoBoton += digitalRead(boton);

    if(estadoBoton && aux == 0){
    //if(estadoBoton % 2 == 0){
        digitalWrite(ledNaranja, HIGH);
        digitalWrite(ledAzul, LOW);
        aux = 1;
        delay(pausa);
    }
    else if(estadoBoton && aux == 1){
    //else {
        digitalWrite(ledNaranja, LOW);
        digitalWrite(ledAzul, HIGH);
        aux = 0;
        delay(pausa);
    }
}