#include <iostream>
using namespace std;

class Number {
    int x;

public:
    Number(int n) {
        x = n;
    }

    void operator++() {
        ++x;
    }

    void display() {
        cout << "Value = " << x;
    }
};

int main() {
    Number n1(10);

    ++n1;
    n1.display();

    return 0;
}
