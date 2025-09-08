#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Hi, please enter two whole numbers: ";

    int x, y;

    cin >> x >> y;
    cout << x << "+" << y << "=" << x + y << endl;
    cout << x << "-" << y << "=" << x - y << endl;
    cout << x << "*" << y << "=" << x * y << endl;
    if (y == 0)
    {
        cout << "Division by zero is not allowed." << endl;
    }
    else
    {
        cout << x << "/" << y << "=" << x / y << endl;
        cout << "remainder: " << x << "/" << y << "=" << x % y << endl;
    }
    cout << "Square root of " << x << ": " << sqrt(x) << endl;
    cout << "square root of " << y << ": " << sqrt(y) << endl;
    cout << x << "^" << y << "=" << pow(x, y) << endl;
    return 0;
}
