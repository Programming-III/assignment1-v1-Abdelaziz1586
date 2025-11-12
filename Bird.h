#ifndef BIRD_H
#define BIRD_H

#include "Animal.h"

class Bird : public Animal {
    float wingSpan;
public:
    Bird();
    Bird(string name, int age, bool isHungry, float wingSpan);
    ~Bird();
};

#endif
