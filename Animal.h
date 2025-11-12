#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;

class Animal {
    string name;
    int age;
    bool isHungry;
public:
    Animal();
    Animal(string name, int age, bool isHungry);

    virtual void display() {
        cout << name << "(Age: " << age << ", " << (isHungry ? "Hungry" : "Not Hungry") << ")" << endl;
    }

    void feed();

    virtual ~Animal();

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    bool hungry() {
        return isHungry;
    }

};

#endif
