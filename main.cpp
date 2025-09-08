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
    
    // more descriptive operations that are operated on x & y
    cout << x << " + " << y << " = " << (x + y)   << endl;
    cout << x << " - " << y << " = " << (x - y)   << endl;
    cout << x << " * " << y << " = " << (x * y)   << endl;
    cout << x << " / " << y << " = " << (x / y)   << endl;
    cout << x << " % " << y << " = " << (x % y)   << endl;
    cout << x << "^(1/2)"   << " = " << sqrt(x)   << endl;
    cout << y << "^(1/2)"   << " = " << sqrt(y)   << endl;
    cout << x << "^"   << y << " = " << pow(x, y) << endl;

    return 0;
}
