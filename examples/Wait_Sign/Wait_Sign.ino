#include <DigitDisplay.h>
DigitDisplay DigitDisplay; //Setting up the pins
void setup(){
//nothing here, everything done before
}

void loop(){
//make a simple 'wait' blink

int duration = 1;
while(duration <= 6){
DigitDisplay.setsegment(1,duration,HIGH);
DigitDisplay.setsegment(2,duration,HIGH);
DigitDisplay.setsegment(3,duration,HIGH);
delay(500);
DigitDisplay.setsegment(1,duration,HIGH);
DigitDisplay.setsegment(2,duration,HIGH);
DigitDisplay.setsegment(3,duration,HIGH);
duration++; 
setup();
}
duration = 1;
DigitDisplay.clear();
delay(1000);

}

