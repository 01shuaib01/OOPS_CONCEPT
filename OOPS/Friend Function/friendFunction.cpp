#include <iostream>
using namespace std;

/*
    Friend Function in C++:
    - A friend function is a function that is not a member of a class but has access to its private and protected members.
    - A friend function is declared inside the class using the friend keyword, but its definition is always written outside the class.
    - A friend function can be a global function, a member function of another class, or a function template.
    - Even though it is not a member of the class, it can access all private and protected data members of that class.
    - Friend functions can be used when you need a function to perform operations on a class's data but don't want to make it a member of the class.
*/

class Box {
private:
    int length;
    int width;
    int height;

public:
    // Constructor to initialize the values
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    // Declare the friend function
    friend void displayDimensions(Box b);
};

// Friend function definition 
void displayDimensions(Box b) {
    // Friend function can access private members of Box class
    cout << "Length: " << b.length << endl;
    cout << "Width: " << b.width << endl;
    cout << "Height: " << b.height << endl;
}

int main() {
    Box box(10, 20, 30);  // Create a Box object with dimensions 10x20x30
    displayDimensions(box); // Call the friend function to display the dimensions
    
    return 0;
}
