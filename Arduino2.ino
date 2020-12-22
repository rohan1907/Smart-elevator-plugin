#include<SoftwareSerial.h>

#define TxD 12
#define RxD 13


SoftwareSerial bluetoothSerial(TxD, RxD);

int c;

void setup(){
  
  // initialize the LED pins as an output:
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10,OUTPUT);
  pinMode (11,OUTPUT);
  bluetoothSerial.begin(9600);
  Serial.begin (9600); // initialize serial communications:
}

void loop (){
  
  // read the value of the potentiometer:
  if(bluetoothSerial.available()){
    c = bluetoothSerial.read();
    Serial.println(c);
  // delay in between reads for stability:
  delay (100);
  
 if (c==48){ 
  digitalWrite(2, HIGH);
  delay(2000);
} else {
  digitalWrite(2, LOW);
}
 if (c==49){ 
  digitalWrite(3, HIGH);
  delay(2000);
} else {
  digitalWrite(3, LOW);
}
  if (c==50){ 
  digitalWrite(4, HIGH);
  delay(2000);
} else {
  digitalWrite(4, LOW);
}
 // if the analog value is high enough, turn on the LED:
if (c==51){ 
  digitalWrite(5, HIGH);
  delay(2000);
} else {
  digitalWrite(5, LOW);
}
if (c==52){ 
  digitalWrite(6, HIGH);
  delay(2000);
} else {
  digitalWrite(6, LOW);
}
if (c==53){ 
  digitalWrite(7, HIGH);
  delay(2000);
} else {
  digitalWrite(7, LOW);
}
if (c==54){ 
  digitalWrite(8, HIGH);
  delay(2000);
} else {
  digitalWrite(8, LOW);
}
if (c==55){ 
  digitalWrite(9, HIGH);
  delay(2000);
} else {
  digitalWrite(9, LOW);
}
if (c==56){ 
  digitalWrite(10, HIGH);
  delay(2000);
} else {
  digitalWrite(10, LOW);
}
if (c==57){ 
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  delay(200);
  digitalWrite(11, HIGH);
  delay(200);
  digitalWrite(11, LOW);
  
  
} else {
  digitalWrite(11, LOW);
}
  }
}
