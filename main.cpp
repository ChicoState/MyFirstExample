#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "This is Kevin!\n";
    cout << "Hi, please enter two whole numbers: ";

    int x, y;

    cin >> x >> y;
    cout << x << "+" << y << "=" << x + y << std::endl;
    cout << x << "-" << y << "=" << x - y << std::endl;
    cout << x << "*" << y << "=" << x * y << std::endl;
    if (y != 0)
    {
        cout << x << "/" << y << "=" << x / y << " with remainder of " << x % y << endl;
    }
    else
    {
        cout << "Dividing by zero is not a number." << endl;
    }
    cout << "The Square Root of " << x << " is " << sqrt(x) << std::endl;
    cout << "The Square Root of " << y << " is " << sqrt(y) << std::endl;
    cout << x << "^" << y << "=" << pow(x, y) << std::endl;

    return 0;
}
