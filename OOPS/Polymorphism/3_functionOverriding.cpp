// function_overriding.cpp
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    virtual void speak() {  // Virtual function for runtime polymorphism
        cout << "Animal speaks!" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void speak() override {  // Function overriding
        cout << "Dog barks!" << endl;
    }
};

// Derived class
class Cat : public Animal {
public:
    void speak() override {  // Function overriding
        cout << "Cat meows!" << endl;
    }
};

int main() {
    Animal *animal;
    Dog dog;
    Cat cat;

    // Demonstrating runtime polymorphism
    animal = &dog;
    animal->speak();  // Calls Dog's speak()

    animal = &cat;
    animal->speak();  // Calls Cat's speak()
    
    return 0;
}
