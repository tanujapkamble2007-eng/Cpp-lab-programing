#include <iostream>
using namespace std;

class Result {
private:
    float marks[5];
    float total;
    float percentage;

public:
    void acceptMarks() {
        cout << "Enter marks for 5 subjects:" << endl;

        for (int i = 0; i < 5; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculateResult() {
        total = 0;

        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }

        percentage = total / 5;
    }

    void displayResult() {
        cout << "\n--- Exam Result ---" << endl;
        cout << "Total Marks = " << total << " / 500" << endl;
        cout << "Percentage = " << percentage << "%" << endl;

        bool passed = true;

        for (int i = 0; i < 5; i++) {
            if (marks[i] < 40) {
                passed = false;
                break;
            }
        }

        if (passed)
            cout << "Result: PASSED" << endl;
        else
            cout << "Result: FAILED" << endl;
    }
};

int main() {
    Result r;

    r.acceptMarks();
    r.calculateResult();
    r.displayResult();

    return 0;
}
