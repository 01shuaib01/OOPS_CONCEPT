#include <iostream>
using namespace std;

/*
    Exception Handling in C++:
    - Exceptions are errors that occur during program execution.
    - C++ uses the `try`, `catch`, and `throw` keywords for exception handling.
    
    Simple Example:
    - The program attempts to divide two numbers and catches the exception if division by zero occurs.
*/

int divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Error: Division by zero!");
    }
    return a / b;
}

int main() {
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    try {
        int result = divide(x, y);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
