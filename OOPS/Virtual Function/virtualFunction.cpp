#include <iostream>
using namespace std;

/*
    Virtual Function in C++:
    - A virtual function is a function in the base class that is overridden in the derived class.
    - It is declared using the `virtual` keyword in the base class.
    - Virtual functions enable dynamic polymorphism, meaning the function that gets called is determined at runtime.
    - Virtual functions are used when you want to ensure that the correct method is called for an object, even when it is being referred to through a base class pointer or reference.
*/

class Animal {
public:
    // Virtual function to be overridden in derived classes
    virtual void sound() {
        cout << "Animal makes a sound!" << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding the virtual function in the derived class
    void sound() override {
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal {
public:
    // Overriding the virtual function in the derived class
    void sound() override {
        cout << "Cat meows!" << endl;
    }
};

int main() {
    // Using base class pointers to refer to derived class objects
    Animal *animal;

    Dog dog;
    Cat cat;

    // Demonstrating runtime polymorphism with virtual functions
    animal = &dog;
    animal->sound();  // Calls Dog's sound() function

    animal = &cat;
    animal->sound();  // Calls Cat's sound() function

    return 0;
}
