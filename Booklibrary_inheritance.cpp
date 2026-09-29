#include <iostream>
using namespace std;

class Library
{
protected:
    string name;

public:
    void getLibrary()
    {
        cout << "Enter Library Name: ";
        cin >> name;
    }
};

class Book : public Library
{
public:
    void displayBook()
    {
        cout << "\nLibrary: " << name;
        cout << "\nType: Book";
    }
};

class Magazine : public Library
{
public:
    void displayMagazine()
    {
        cout << "\nLibrary: " << name;
        cout << "\nType: Magazine";
    }
};

int main()
{
    Book b;
    Magazine m;

    b.getLibrary();
    b.displayBook();

    m.getLibrary();
    m.displayMagazine();

    return 0;
}
