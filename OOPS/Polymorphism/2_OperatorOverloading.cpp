// operator_overloading.cpp
#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(int r, int i) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator + (const Complex &c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << "Real: " << real << ", Imaginary: " << imag << endl;
    }
};

int main() {
    Complex c1(10, 20), c2(30, 40);
    Complex c3 = c1 + c2;  // Uses overloaded + operator
    c3.display();
    return 0;
}
