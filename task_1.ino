int red = 7 ;
int green = 8 ;
int blue = 9 ;
int ON = 500 ;
int OFF = 500 ;

 


void setup() {
  
pinMode(red,OUTPUT);
pinMode(green,OUTPUT);
pinMode(blue,OUTPUT);

}

void loop() {
  digitalWrite(red,HIGH);
  delay(ON);

  
  digitalWrite(green,HIGH);
  delay(ON);
  digitalWrite(green,LOW);
  delay(OFF);
   digitalWrite(green,HIGH);
  delay(ON);
  digitalWrite(green,LOW);
  delay(OFF);
   digitalWrite(green,HIGH);
  delay(ON);
  digitalWrite(green,LOW);
  digitalWrite(red,LOW);
  delay(OFF);
  
   digitalWrite(blue,HIGH);
  delay(ON);
   digitalWrite(blue,LOW);
  delay(OFF);
  








  
}
