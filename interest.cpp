#include <iostream>
using namespace std;

class Interest {
private:
    float principal;
    float rate;
    float time;

public:
    void acceptDetails() {
        cout << "Enter Principal Amount: ";
        cin >> principal;

        cout << "Enter Rate of Interest: ";
        cin >> rate;

        cout << "Enter Time (in years): ";
        cin >> time;
    }

    void calculateInterest() {
        float simpleInterest;

        simpleInterest = (principal * rate * time) / 100;

        cout << "Simple Interest = " << simpleInterest << endl;
    }
};

int main() {
    Interest i;

    i.acceptDetails();
    i.calculateInterest();

    return 0;
}
