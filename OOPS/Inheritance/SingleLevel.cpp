// single_inheritance.cpp
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void speak() {
        cout << "Animal speaks!" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks!" << endl;
    }
};

int main() {
    Dog dog;
    dog.speak();  // Calling function from base class
    dog.bark();   // Calling function from derived class
    return 0;
}
