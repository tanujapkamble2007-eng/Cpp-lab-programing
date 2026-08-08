#include <iostream>
using namespace std;

class Greatest {
private:
    int num1, num2;

public:
    void acceptNumbers() {
        cout << "Enter first number: ";
        cin >> num1;

        cout << "Enter second number: ";
        cin >> num2;
    }

    void findGreatest() {
        if (num1 > num2)
            cout << "Greatest number = " << num1 << endl;
        else if (num2 > num1)
            cout << "Greatest number = " << num2 << endl;
        else
            cout << "Both numbers are equal." << endl;
    }
};

int main() {
    Greatest g;

    g.acceptNumbers();
    g.findGreatest();

    return 0;
}
