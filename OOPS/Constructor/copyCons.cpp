// copy_constructor.cpp
#include <iostream>
using namespace std;

class MyClass {
private:
    int x;

public:
    // Copy constructor
    MyClass(const MyClass &obj) {
        x = obj.x; // Copy the value of x from another object
        cout << "Copy constructor called. x = " << x << endl;
    }

    // Function to display value of x
    void display() {
        cout << "Value of x: " << x << endl;
    }
};

int main() {
    MyClass obj2(100); // Create an object using the parameterized constructor
    MyClass obj3 = obj2; // Copying the values from obj2 using the copy constructor
    obj3.display();
    return 0;
}
