#include <iostream>
using namespace std;

class Employee
{
    int EmployeeID;
    string name;
    float salary;

public:
    // Default Constructor
    Employee()
    {
        EmployeeID = 0;
        name = "Unknown";
        salary = 0;
    }

    // Parameterized Constructor
    Employee(int id, string n, float s)
    {
        EmployeeID = id;
        name = n;
        salary = s;
    }

    // Copy Constructor
    Employee(Employee &e)
    {
        EmployeeID = e.EmployeeID;
        name = e.name;
        salary = e.salary;
    }

    void display()
    {
        cout << "Employee ID: " << EmployeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;
    cout << "Default Constructor:" << endl;
    e1.display();

    Employee e2(101, "Tanuja", 35000);
    cout << "\nParameterized Constructor:" << endl;
    e2.display();

    Employee e3(e2);
    cout << "\nCopy Constructor:" << endl;
    e3.display();

    return 0;
}
