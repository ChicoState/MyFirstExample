#include <iostream>
#include <cmath>
#include <iomanip>  // for std::setprecision

using std::cin;
using std::cout;
using std::endl;
using std::sqrt;
using std::pow;

int main()
{
    cout << "Hi, please enter two whole numbers: ";

    int x, y;

    cin >> x >> y;
    cout << x << "+" << y << "=" << x + y << endl;
    cout << x << "-" << y << "=" << x - y << endl;
    cout << x << "*" << y << "=" << x * y << endl;
    cout << x << "/" << y << "=" << x / y << " with remainder of " << x % y << endl;
    cout << "Square root of " << x << " is " << sqrt(x) << endl;
    cout << "Square root of " << y << " is " << sqrt(y) << endl;
    cout << x << "^" << y << "=" << pow(x, y) << endl;

    return 0;
}

