// default_constructor.cpp
#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    // Default constructor
    MyClass() {
        x = 0; // Initialize x to 0
        cout << "Default constructor called. x = " << x << endl;
    }

    // Function to display value of x
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    // Creating an object using the default constructor
    MyClass obj1;
    obj1.display();
    return 0;
}
