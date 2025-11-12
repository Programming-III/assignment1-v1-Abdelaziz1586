#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"

class Reptile : public Animal {
    bool isVenomous;
public:
    Reptile();

    Reptile(string name, int age, bool isHungry, bool isVenomous);

    ~Reptile() override;

    void display() {
        cout << getName() << " (Age: " << getAge() << ", " << (isVenomous ? "Venomous" : "Not Venomous") << ", " << (hungry() ? "Hungry" : "Not Hungry") << ")" << endl;
    }
};


#endif
