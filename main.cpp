#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "This is Angelina!\n";
    cout << "Hi, please enter two whole numbers: ";

    int x, y;
    cin >> x >> y;

    cout << x << " + " << y << " = " << x + y << endl;
    cout << x << " - " << y << " = " << x - y << endl;
    cout << x << " * " << y << " = " << x * y << endl;

    if (y == 0) {
        cout << "Dividing by zero is not a number." << endl;
    } else {
        cout << x << " / " << y << " = " << x / y << " with remainder of " << x % y << endl;
    }

    cout << "Square root of " << x << " is " << sqrt(x) << endl;
    cout << "Square root of " << y << " is " << sqrt(y) << endl;
    cout << x << " ^ 2 = " << pow(x, 2) << endl;

    return 0;
}

