// multiple_inheritance.cpp
#include <iostream>
using namespace std;

// Base class 1
class Animal {
public:
    void eat() {
        cout << "Animal eats!" << endl;
    }
};

// Base class 2
class Playful {
public:
    void play() {
        cout << "Animal plays!" << endl;
    }
};

// Derived class from both Animal and Playful
class Dog : public Animal, public Playful {
public:
    void bark() {
        cout << "Dog barks!" << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();   // Calling function from Animal
    dog.play();  // Calling function from Playful
    dog.bark();  // Calling function from Dog
    return 0;
}
