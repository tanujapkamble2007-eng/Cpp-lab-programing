#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int n) {
        x = n;
    }

    Number operator+(Number n) {
        return Number(x + n.x);
    }

    void display() {
        cout << "Sum = " << x;
    }
};

int main() {
    Number n1(10), n2(20);
    Number n3 = n1 + n2;

    n3.display();

    return 0;
}
