void setup()
{
  Serial.begin(9600);
  
    pinMode(flexs, INPUT); 
  pinMode(buzzer, OUTPUT); 


}

void loop()
{

flexdata = analogRead(flexs); 
Serial.print("flex value;"); 
Serial.print(flexdata); 
Serial.println("");
if( flexdata < 220) 
{
    analogWrite(buzzer, 150);  
}

if( flexdata > 220) 
{
   analogWrite(buzzer, 0);   
}
   
  delay(1000);
               
}