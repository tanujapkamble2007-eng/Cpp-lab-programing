#include <iostream>
using namespace std;

int area(int s);
int area(int l, int b);
float area(float r);
float area(float b, float h);

int main()
{
    int s, l, b;
    float r, bh, h;

    cout << "Enter side of square: ";
    cin >> s;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter base and height of triangle: ";
    cin >> bh >> h;

    cout << "Area of square = " << area(s);
    cout << "\nArea of rectangle = " << area(l, b);
    cout << "\nArea of circle = " << area(r);
    cout << "\nArea of triangle = " << area(bh, h);

    return 0;
}

int area(int s)
{
    return s * s;
}

int area(int l, int b)
{
    return l * b;
}

float area(float r)
{
    return 3.14 * r * r;
}

float area(float b, float h)
{
    return 0.5 * b * h;
}
