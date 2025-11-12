#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include "Animal.h"

class Enclosure {
    Animal* animals;
    int capacity, currentCount;

public:
    Enclosure();

    Enclosure(int capacity);

    void addAnimal(Animal* a);

    void displayAnimals();

    ~Enclosure();
};


#endif
