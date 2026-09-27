#include <iostream>
using namespace std;

class complex {
    float real, imag;

public:
    void getData() {
        cout << "Enter the real part = ";
        cin >> real;
        cout << "Enter the imaginary part = ";
        cin >> imag;
    }

    complex operator+(complex c) {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    complex operator-(complex c) {
        complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }

    complex operator*(complex c) {
        complex temp;
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);
        return temp;
    }

    complex operator/(complex c) {
        complex temp;
        float denominator = (c.real * c.real) + (c.imag * c.imag);

        temp.real = ((real * c.real) + (imag * c.imag)) / denominator;
        temp.imag = ((imag * c.real) - (real * c.imag)) / denominator;

        return temp;
    }

    void display() {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main() {
    complex c1, c2, result;

    cout << "Enter first complex number:" << endl;
    c1.getData();

    cout << "Enter second complex number:" << endl;
    c2.getData();

    result = c1 + c2;
    cout << "Addition = ";
    result.display();

    result = c1 - c2;
    cout << "Subtraction = ";
    result.display();

    result = c1 * c2;
    cout << "Multiplication = ";
    result.display();

    result = c1 / c2;
    cout << "Division = ";
    result.display();

    return 0;
}
