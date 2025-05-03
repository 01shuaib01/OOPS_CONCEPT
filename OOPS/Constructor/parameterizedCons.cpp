// parameterized_constructor.cpp
#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    // Parameterized constructor
    MyClass(int val) {
        x = val; // Initialize x with the given value
        cout << "Parameterized constructor called. x = " << x << endl;
    }

    // Function to display value of x
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    // Creating an object using the parameterized constructor
    MyClass obj2(100);
    obj2.display();
    return 0;
}
