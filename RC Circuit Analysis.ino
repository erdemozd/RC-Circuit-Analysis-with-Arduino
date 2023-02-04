float voltageReading;
int i;
unsigned long time;
void setup()
{
  Serial.begin(9600);
  voltageReading = analogRead(A0)*5/1024.;
}

void loop()
{
  while(fabs(analogRead(A0)*5/1024. - voltageReading) < 0.1)
  {
    time = micros();
  }
  for(i = 0 ; i < 480 ; i++)
  {
    unsigned long nowtime = micros();
    Serial.print(nowtime - time);
    Serial.print(" ");
    
    float currentVoltageReading = analogRead(A0)*5/1024.;
    
    Serial.println(currentVoltageReading);
  }

  while(1)
  {

  }

}
