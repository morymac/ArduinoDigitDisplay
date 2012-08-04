#ifndef DigitDisplay_H
#define DigitDisplay_H
#include <Arduino.h>

class DigitDisplay {
public:
DigitDisplay();
~DigitDisplay();
void setsegment(int digit,int segment,bool state);
void clear();
};
#endif
