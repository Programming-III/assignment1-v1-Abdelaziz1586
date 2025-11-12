#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "Bird.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"

Animal::Animal() {
    this->age = 0;
    this->isHungry = false;
}

Animal::Animal(string name, int age, bool isHungry) {
    this->name = name;
    this->age = age;
    this->isHungry = isHungry;
}

void Animal::feed() {
    if (isHungry) {
        isHungry = false;
        return;
    }

    cout << "Animal is not hungry" << endl;
}

Animal::~Animal() {
}

Mammal::Mammal() {
}

Mammal::Mammal(string name, int age, bool isHungry, string furColor) : Animal(name, age, isHungry) {
    this->furColor = furColor;
}

Mammal::~Mammal() {
}

Reptile::Reptile() {
    this->isVenomous = false;
}

Reptile::~Reptile() {
}

Reptile::Reptile(string name, int age, bool isHungry, bool isVenomous) : Animal(name, age, isHungry) {
    this->isVenomous = isVenomous;
}

Enclosure::Enclosure() {
    this->capacity = 0;
    this->currentCount = 0;
    this->animals = new Animal[capacity];
}

Enclosure::Enclosure(int capacity) {
    this->capacity = capacity;
    this->currentCount = 0;
    this->animals = new Animal[capacity];
}

Enclosure::~Enclosure() {
    delete[] animals;
}

Visitor::Visitor() {
    this->ticketsBought = 0;
}

Visitor::Visitor(string visitorName, int ticketsBought) {
    this->visitorName = visitorName;
    this->ticketsBought = ticketsBought;
}

Visitor::~Visitor() {
}

void Visitor::displayInfo() {
    cout << "Name: " << visitorName << endl << endl;
    cout << "Tickets Bought: " << ticketsBought << endl;
}

void Visitor::addTicketBought() {
    ticketsBought++;
}

int Visitor::getTicketsBought() {
    return ticketsBought;
}

void Enclosure::addAnimal(Animal *a) {
    if (currentCount == capacity) {
        cout << "Maximum capacity has been reached" << endl;
        return;
    }
    animals[currentCount++] = *a;
}

void Enclosure::displayAnimals() {
    for (int i = 0; i < currentCount; i++) {
        animals[i].display();
    }
}

Bird::Bird() {
    this->wingSpan = false;
}

Bird::~Bird() {
}

Bird::Bird(string name, int age, bool isHungry, float wingSpan) : Animal(name, age, isHungry) {
    this->wingSpan = wingSpan;
}

int main() {
    Animal* lion = new Mammal("Lion", 5, true, "Orange");
    Animal* parrot = new Bird("Parrot", 2, false, 12);
    Reptile* snake = new Reptile("Snake", 3, true, true);

    Enclosure* enclosure = new Enclosure(3);

    enclosure->addAnimal(lion);
    enclosure->addAnimal(parrot);
    enclosure->addAnimal(snake);

    Visitor* visitor = new Visitor("Sarah Ali", 3);

    cout << "Enclosure 1 Animals:" << endl << endl;

    lion->display();
    parrot->display();
    snake->display();

    // enclosure->displayAnimals();

    cout << endl;

    visitor->displayInfo();

    delete enclosure;
    delete lion;
    delete parrot;
    delete snake;
    delete visitor;
    return 0;
}
