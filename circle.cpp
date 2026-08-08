#include <iostream>
using namespace std;

class Circle {
private:
    float radius;

public:
    void acceptRadius() {
        cout << "Enter radius: ";
        cin >> radius;
    }

    void calculate() {
        float area = 3.14159 * radius * radius;
        float circumference = 2 * 3.14159 * radius;

        cout << "Area = " << area << endl;
        cout << "Circumference = " << circumference << endl;
    }
};

int main() {
    Circle c;

    c.acceptRadius();
    c.calculate();

    return 0;
}
