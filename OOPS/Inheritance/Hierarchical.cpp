// hierarchical_inheritance.cpp
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal eats!" << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks!" << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "Cat meows!" << endl;
    }
};

int main() {
    Dog dog;
    Cat cat;

    dog.eat();  // Calling function from Animal
    dog.bark(); // Calling function from Dog

    cat.eat();  // Calling function from Animal
    cat.meow(); // Calling function from Cat

    return 0;
}
