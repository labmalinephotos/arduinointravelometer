int i = 0;
void setup() {
  pinMode(1, OUTPUT); //autofocus ONLY
  pinMode(2, OUTPUT); //focus + shutter, better to leave in manual focus though for faster pics
  Serial.begin(9600);
}

void loop() 
{
    digitalWrite(2, LOW);
    delay(5000);
    digitalWrite(2, HIGH);
    delay(50);
    Serial.println(i);
    i = i + 1;
}
