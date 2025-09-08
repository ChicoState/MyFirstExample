#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x << "+" << y << "=" << x + y << endl;
    cout << "Subtraction: " << x << "-" << y << "=" << x - y << endl;
    cout << "Multiplication: " << x << "*" << y << "=" << x * y << endl;
    cout << "Division: " << x << "/" << y << "=" << x / y << " with a remainder of " << x % y << endl;
    cout << "Square root of " << x << " is " << sqrt(x) << endl;
    cout << "Square root of " << y << " is " << sqrt(x) << endl;
    cout << "Square: " << x << "^" << y << "=" << pow(x, y) << endl;

    return 0;
}