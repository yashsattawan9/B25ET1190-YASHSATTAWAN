#include <iostream>  // Header file for input and output
using namespace std;

// Class to perform arithmetic operations on complex numbers
class complex {
    float real, imag;  // Variables to store real and imaginary parts

public:
    // Function to input a complex number
    void getData() {
        cout << "Enter the real part = ";
        cin >> real;

        cout << "Enter the imaginary part = ";
        cin >> imag;
    }

    // Overloading the + operator to add two complex numbers
    complex operator+(complex c) {
        complex temp;

        // Add the real parts and imaginary parts separately
        temp.real = real + c.real;
        temp.imag = imag + c.imag;

        return temp;  // Return the resulting complex number
    }

    // Overloading the - operator to subtract two complex numbers
    complex operator-(complex c) {
        complex temp;

        // Subtract the real parts and imaginary parts separately
        temp.real = real - c.real;
        temp.imag = imag - c.imag;

        return temp;  // Return the resulting complex number
    }

    // Overloading the * operator to multiply two complex numbers
    complex operator*(complex c) {
        complex temp;

        // Formula: (a + bi)(c + di) = (ac - bd) + (ad + bc)i
        temp.real = (real * c.real) - (imag * c.imag);
        temp.imag = (real * c.imag) + (imag * c.real);

        return temp;  // Return the resulting complex number
    }

    // Overloading the / operator to divide two complex numbers
    complex operator/(complex c) {
        complex temp;

        // Calculate the denominator: c^2 + d^2
        float denominator = (c.real * c.real) +
                            (c.imag * c.imag);

        // Calculate the real part of the quotient
        temp.real = ((real * c.real) + (imag * c.imag))
                    / denominator;

        // Calculate the imaginary part of the quotient
        temp.imag = ((imag * c.real) - (real * c.imag))
                    / denominator;

        return temp;  // Return the resulting complex number
    }

    // Function to display a complex number
    void display() {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main() {
    // Create objects for two input numbers and the result
    complex c1, c2, result;

    // Input the first complex number
    cout << "Enter first complex number:" << endl;
    c1.getData();

    // Input the second complex number
    cout << "Enter second complex number:" << endl;
    c2.getData();

    // Perform addition using the overloaded + operator
    result = c1 + c2;
    cout << "Addition = ";
    result.display();

    // Perform subtraction using the overloaded - operator
    result = c1 - c2;
    cout << "Subtraction = ";
    result.display();

    // Perform multiplication using the overloaded * operator
    result = c1 * c2;
    cout << "Multiplication = ";
    result.display();

    // Perform division using the overloaded / operator
    result = c1 / c2;
    cout << "Division = ";
    result.display();

    return 0;  // End the program successfully
}
