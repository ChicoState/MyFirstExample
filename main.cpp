#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << x << "+" <<  y << "=" << x + y << endl;
    cout << x << "-" <<  y << "=" << x - y << endl;
    cout << x << "*" <<  y << "=" << x * y << endl;
    int remainder = x % y;
    cout << x << "/" <<  y << "=" << x / y  << "with remainder of" << remainder << endl;
    cout << "Square root of " << x << " is " << sqrt(x) << endl;
    cout << "Square root of " << y << " is " << sqrt(y) << endl;
    cout << x << "^" <<  y << "=" << pow(x, y) << endl;
    
    return 0;
}
