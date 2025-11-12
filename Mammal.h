#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"

class Mammal : public Animal {
    string furColor;
public:
    Mammal();
    Mammal(string name, int age, bool isHungry, string furColor);
    ~Mammal();
};


#endif
