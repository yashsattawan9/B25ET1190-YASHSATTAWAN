#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char str[100];

public:
    // Default constructor
    String()
    {
        str[0] = '\0';
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    String(const char s[])
    {
        strcpy(str, s);
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    String(const String &s)
    {
        strcpy(str, s.str);
        cout << "Copy constructor called." << endl;
    }

    // Accept function
    void Accept()
    {
        cout << "Enter a string: ";
        cin.getline(str, 100);
    }

    // Display function
    void Display()
    {
        cout << "String: " << str << endl;
    }

    // Destructor
    ~String()
    {
        cout << "Destructor called for: " << str << endl;
    }
};

int main()
{
    String s1;
    s1.Accept();
    s1.Display();

    String s2("Hello World");
    s2.Display();

    String s3(s2);
    s3.Display();

    return 0;
}
