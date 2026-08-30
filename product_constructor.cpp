#include <iostream>
using namespace std;

class Product
{
    int ProductID;
    string name;
    float price;
    int quantity;

public:
    // Function to input product details
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> ProductID;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    // Display product details
    void display()
    {
        cout << "\nProduct ID: " << ProductID << endl;
        cout << "Product Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }

    // Calculate total cost
    float calculateCost()
    {
        return price * quantity;
    }
};

int main()
{
    Product p;

    p.input();
    p.display();

    cout << "Total Cost: " << p.calculateCost() << endl;

    return 0;
}
