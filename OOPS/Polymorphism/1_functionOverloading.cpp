// function_overloading.cpp
#include <iostream>
using namespace std;

class Calculator {
public:
    // Function to add two integers
    int add(int a, int b) {
        return a + b;
    }

    // Overloaded function to add three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Overloaded function to add two doubles
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    
    cout << "Sum of 2 integers: " << calc.add(10, 20) << endl;        // Calls add(int, int)
    cout << "Sum of 3 integers: " << calc.add(10, 20, 30) << endl;    // Calls add(int, int, int)
    cout << "Sum of 2 doubles: " << calc.add(10.5, 20.5) << endl;    // Calls add(double, double)
    
    return 0;
}
