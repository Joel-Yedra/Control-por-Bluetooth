//Codigo para una aplicacion de Android que pueda prender el LED que ya viene el pin13 de Arduino 

char orden;
const byte led1= 13;

void setup() {

Serial.begin(9600);
pinMode(led1,OUTPUT);
 
}

void loop() {
 if( Serial.available()> 0 ){
  orden = Serial.read();
 }

 switch(orden){

  case 'A':
  digitalWrite(led1,HIGH);
  break;

  case 'B':
  digitalWrite(led1,LOW);
  break;

 }

}
