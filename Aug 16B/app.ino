#define led 10
#define pote A0
int lecturaPote;

void setup()
{
	Serial.begin(115200);
}

void loop()
{
    //leo el valor en crudo
	lecturaPote = analogRead(pote);
    Serial.print("El valor en crudo es:");
    Serial.println(lecturaPote);

    //lecturaPote = map(lecturaPote,0,1023,0,255);
    lecturaPote = map(lecturaPote,0,1023,50,150);
    Serial.print("El valor mapeado es:");
    Serial.println(lecturaPote);

    analogWrite(led, lecturaPote);
}
