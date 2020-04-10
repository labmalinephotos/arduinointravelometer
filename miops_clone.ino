int i = 1;
int maxpics = 10;
int delay = 10; //seconds
int bulb = 0; //toggle for bulb mode
int duration = 10;

void setup() {
  pinMode(1, OUTPUT); //autofocus ONLY
  pinMode(2, OUTPUT); //focus + shutter, better to leave in manual focus though for faster pics
  //Serial.begin(9600); for debugging purposes 
}

void loop() 
{
    if(i <= maxpics)
    {
      digitalWrite(2, LOW);
      delay(duration*1000);
      digitalWrite(2, HIGH);
      if(bulb == 1)
      {
        delay(duration*1000);
      }
      else
        delay(50); //delay for autofocus + shutter, without this it will not work reliably
      //Serial.println(i);
      i = i + 1;
    }
}
