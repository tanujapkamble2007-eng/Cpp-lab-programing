#include <iostream>
using namespace std;

class Student
{
protected:
    int rollno;
    string name;

public:
    void getData()
    {
        cout << "Enter Roll No: ";
        cin >> rollno;
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Student_Marks : public Student
{
protected:
    int marks[5];
    int total = 0;

public:
    void getMarks()
    {
        cout << "Enter marks of 5 subjects: ";
        for(int i = 0; i < 5; i++)
        {
            cin >> marks[i];
            total = total + marks[i];
        }
    }
};

class Student_Percentage : public Student_Marks
{
    float percentage;

public:
    void calculate_per()
    {
        percentage = total / 5.0;
    }

    void display_info()
    {
        cout << "\nRoll No: " << rollno;
        cout << "\nName: " << name;
        cout << "\nTotal Marks: " << total;
        cout << "\nPercentage: " << percentage << "%";
    }
};

int main()
{
    Student_Percentage obj;

    obj.getData();
    obj.getMarks();
    obj.calculate_per();
    obj.display_info();

    return 0;
}
