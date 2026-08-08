#include <iostream>
using namespace std;

class Employee {
private:
    int employeeID;
    string name;
    float salary;

public:
    void acceptDetails() {
        cout << "Enter Employee ID: ";
        cin >> employeeID;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;

    e.acceptDetails();
    e.displayDetails();

    return 0;
}
