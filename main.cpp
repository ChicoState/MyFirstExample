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
    cout << "Addition: "  << x << "+" << y << " = " << x + y << endl;
    cout << "Subtraction: "  << x << "-" << y << " = " << x - y << endl;
    cout << "Multiplication: " << x << "*" << y << " = " << x * y << endl;
    cout << "Division: "  << x << "/" << y << " = " << x / y << endl;
    cout << "Remainder: "  << x << "%" << y << " = " << x/y << " with remainder of " << x % y << endl;
    cout << "Square Root of "  << x << " is " << sqrt(x) << endl;
    cout << "Square Root of "  << y << " is " << sqrt(y) << endl;
    cout << x << "Squared is " << pow(x, 2) << endl;
    cout << y << "Squared is " << pow(y, 2) << endl;

    return 0;
}
