int pirsensor = 0;

void setup()
{
  pinMode(5,INPUT);
  pinMode(13,OUTPUT);
}

void loop()
{

 pirsensor = digitalRead(5);
 if(pirsensor == HIGH)
 {      
   digitalWrite(13,HIGH);
 }
 else
 { 
   digitalWrite(13,LOW);
 }
 
 delay(10);  
}
