
#include <iostream>
using namespace std;

class BasicInfo
{
protected:
    int id;
    string name;
    float salary;

public:
    BasicInfo()
    {
        id = 0;
        name = "";
        salary = 0;
    }

    void getBasicInfo()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> ws;
        getline(cin, name);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayBasicInfo()
    {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }

    int getID()
    {
        return id;
    }
};

class DepartmentInfo
{
protected:
    string department;
    string designation;

public:
    DepartmentInfo()
    {
        department = "";
        designation = "";
    }

    void getDepartmentInfo()
    {
        cout << "Enter Department: ";
        cin >> ws;
        getline(cin, department);

        cout << "Enter Designation: ";
        getline(cin, designation);
    }

    void displayDepartmentInfo()
    {
        cout << "Department: " << department << endl;
        cout << "Designation: " << designation << endl;
    }
};

// Multiple inheritance
class Employee : public BasicInfo, public DepartmentInfo
{
public:
    Employee() : BasicInfo(), DepartmentInfo()
    {
    }

    void Accept()
    {
        getBasicInfo();
        getDepartmentInfo();
    }

    void Display()
    {
        displayBasicInfo();
        displayDepartmentInfo();
    }

    bool searchByID(int searchID)
    {
        return id == searchID;
    }
};

int main()
{
    int n, searchID, found = 0;

    cout << "Enter number of employees: ";
    cin >> n;

    Employee emp[100];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        emp[i].Accept();
    }

    cout << "\n--- Employee Details ---\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;
        emp[i].Display();
    }

    cout << "\nEnter Employee ID to search: ";
    cin >> searchID;

    for (int i = 0; i < n; i++)
    {
        if (emp[i].searchByID(searchID))
        {
            cout << "\nEmployee Found!\n";
            emp[i].Display();
            found = 1;
            break;
        }
    }

    if (!found)
    {
        cout << "\nEmployee with ID " << searchID
             << " not found.\n";
    }

    return 0;
}
