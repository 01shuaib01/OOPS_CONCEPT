// multilevel_inheritance.cpp
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats!" << endl;
    }
};

// Derived class from Animal
class Mammal : public Animal {
public:
    void move() {
        cout << "Mammal moves!" << endl;
    }
};

// Further derived class from Mammal
class Dog : public Mammal {
public:
    void bark() {
        cout << "Dog barks!" << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();   // Calling function from base class Animal
    dog.move();  // Calling function from Mammal
    dog.bark();  // Calling function from Dog
    return 0;
}
