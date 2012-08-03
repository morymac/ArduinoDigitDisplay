#include "DigitDisplay.h"

DigitDisplay::DigitDisplay(){
  
pinMode(1,OUTPUT); 
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT); // not even necessary
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(12,OUTPUT);

digitalWrite(1,HIGH);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,HIGH); // not necessary too
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);

}
DigitDisplay::~DigitDisplay(){/*nothing to destruct*/}

void DigitDisplay::setsegment(int digit,int segment,bool state){

//select digit  
switch (digit){
case 1:
digitalWrite(4,HIGH);
break;
case 2:
digitalWrite(5,HIGH);
break;
case 3:
digitalWrite(9,HIGH);
break;
}
//select segment
switch (segment){
case 1:
digitalWrite(1,LOW);
break;
case 2:
digitalWrite(12,LOW);
break;
case 3:
digitalWrite(11,LOW);
break;
case 4:
digitalWrite(10,LOW);
break;
case 5:
digitalWrite(7,LOW);
break;
case 6:
digitalWrite(2,LOW);
break;
case 7:
digitalWrite(8,LOW);
break;
//that's the dot
case 8:
digitalWrite(3,LOW);
break;
}

}