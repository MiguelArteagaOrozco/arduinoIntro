#define led 10

void setup()
{
  //Serial.begin(9600); //velocidad en baudios similar a bits/sec   
  Serial.begin(115200); //este valor es para VS Code   
}

void loop()
{
    for(int i = 0; i < 255; i+=5)
    {
        analogWrite(led, i);
        delay(25);
        Serial.print("Subida: valor de led:");
        Serial.println(i);
    }

    for(int i = 255; i > 0; i-=5)
    {
        analogWrite(led, i);
        delay(25);
        Serial.print("Bajada: valor de led:");
        Serial.println(i);
    }
}
