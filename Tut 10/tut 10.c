#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n--- Exception Handling Menu ---" << endl;
        cout << "1. Invalid Input" << endl;
        cout << "2. Division by Zero" << endl;
        cout << "3. Negative Value" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";

        try
        {
            if (!(cin >> choice))
            {
                throw "Invalid input! Please enter a number.";
            }

            switch (choice)
            {
                case 1:
                {
                    int num;
                    cout << "Enter an integer: ";

                    if (!(cin >> num))
                    {
                        throw "Invalid input! Integer required.";
                    }

                    cout << "You entered: " << num << endl;
                    break;
                }

                case 2:
                {
                    int a, b;
                    cout << "Enter two integers: ";

                    if (!(cin >> a >> b))
                    {
                        throw "Invalid input! Integers required.";
                    }

                    if (b == 0)
                    {
                        throw "Division by zero is not allowed.";
                    }

                    cout << "Result: " << (double)a / b << endl;
                    break;
                }

                case 3:
                {
                    int num;
                    cout << "Enter a positive number: ";

                    if (!(cin >> num))
                    {
                        throw "Invalid input! Integer required.";
                    }

                    if (num < 0)
                    {
                        throw "Negative values are not allowed.";
                    }

                    cout << "Valid value: " << num << endl;
                    break;
                }

                case 4:
                    cout << "Exiting program..." << endl;
                    break;

                default:
                    cout << "Invalid menu choice!" << endl;
            }
        }
        catch (const char *msg)
        {
            cout << "Exception: " << msg << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (choice != 4);

    return 0;
}
