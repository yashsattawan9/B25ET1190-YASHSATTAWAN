#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    Complex()
    {
        real = 0;
        imag = 0;
    }

    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }

    void complex(Complex c1, Complex c2)
    {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void complex(Complex c1, Complex c2, Complex c3)
    {
        real = c1.real + c2.real + c3.real;
        imag = c1.imag + c2.imag + c3.imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(4, 5);
    Complex c3(6, 7);

    Complex sum2, sum3;

    sum2.complex(c1, c2);
    cout << "Addition of two complex numbers: ";
    sum2.display();

    sum3.complex(c1, c2, c3);
    cout << "Addition of three complex numbers: ";
    sum3.display();

    return 0;
}
