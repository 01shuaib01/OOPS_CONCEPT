#include <iostream>
using namespace std;

/*
    1. **Abstract Class**:
        - An abstract class is a class that contains at least one pure virtual function and cannot be instantiated.
        - It provides a blueprint for derived classes.
    
    2. **Function Overriding**:
        - A derived class provides its own version of a function that is already defined in the base class.
    
    3. **Dynamic Binding (Runtime Polymorphism)**:
        - When a virtual function is called using a base class pointer/reference, the function that gets called is determined at runtime.
    
    4. **Pure Virtual Functions**:
        - A pure virtual function is declared in a base class and must be overridden by the derived class.
        - It makes the base class abstract.

    5. **Data Ambiguity**:
        - In multiple inheritance, ambiguity occurs when a derived class inherits from two base classes with the same method.
    
    6. **Virtual Inheritance**:
        - Virtual inheritance is used to resolve ambiguity in multiple inheritance by ensuring that only one instance of a shared base class is inherited.
*/

class Shape {  // Abstract Class
public:
    virtual void draw() = 0;  // Pure virtual function
};

class Circle : public Shape {
public:
    void draw() override {  // Function Overriding
        cout << "Drawing Circle!" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {  // Function Overriding
        cout << "Drawing Square!" << endl;
    }
};

// Virtual Inheritance to resolve Data Ambiguity
class A {
public:
    virtual void show() {
        cout << "Class A show() function" << endl;
    }
};

class B : virtual public A {  // Virtual Inheritance
public:
    void show() override {
        cout << "Class B show() function" << endl;
    }
};

class C : virtual public A {  // Virtual Inheritance
public:
    void show() override {
        cout << "Class C show() function" << endl;
    }
};

class D : public B, public C {
    // Data Ambiguity occurs here without virtual inheritance
public:
    void show() override {
        cout << "Class D show() function" << endl;
    }
};

int main() {
    // Demonstrating Function Overriding and Dynamic Binding
    Shape* shape;
    Circle circle;
    Square square;

    shape = &circle;  // Base class pointer to derived class object
    shape->draw();    // Calls Circle's draw() using dynamic binding

    shape = &square;
    shape->draw();    // Calls Square's draw() using dynamic binding

    // Demonstrating Virtual Inheritance and Resolving Data Ambiguity
    D d;
    d.show();  // Calls D's show() function, resolving ambiguity due to virtual inheritance

    return 0;
}
