#include <iostream>
using namespace std;

class Calculator {
private:
    int a, b;

public:
    void acceptNumbers() {
        cout << "Enter first number: ";
        cin >> a;

        cout << "Enter second number: ";
        cin >> b;
    }

    void calculate() {
        cout << "\nAddition = " << a + b << endl;
        cout << "Subtraction = " << a - b << endl;
        cout << "Multiplication = " << a * b << endl;

        if (b != 0) {
            cout << "Division = " << (float)a / b << endl;
            cout << "Modulus = " << a % b << endl;
        } else {
            cout << "Division and modulus by zero are not possible." << endl;
        }
    }
};

int main() {
    Calculator c;

    c.acceptNumbers();
    c.calculate();

    return 0;
}
