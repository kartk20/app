String c;
 void setup()  
 {  

  Serial.begin(9600);  
  pinMode(7,OUTPUT);
 }  
 void loop()  
 {  
  if(Serial.available())  
  {  
    c = Serial.read();  
   Serial.print(c);
  if( c=="1211011151310"){
    
  digitalWrite(7,HIGH);
  delay(1000);
  }
  }
 }  
