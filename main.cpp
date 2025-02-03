#include <iostream>
#include <cmath>

using namespace std;

using std::cin;
using std::cout;
using std::endl;


int main()
{
    cout << "Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;

    cout << "Addition: " << x << " + " << y << " = " << x + y << endl;
    cout << "Subtraction: " <<  x << " - " << y << " = " << x - y << endl;
    cout << "Multiplication: " << x << " * " << y << " = " << x * y << endl;
    cout << "Division: " << x << " / " << y << " = " << x / y << endl;
    cout << "Remainder: " << x << " % " << y << " = " << x % y << endl;
    cout << "Square Root: " << x << " * " << x << " = " << sqrt(x) << endl;
    cout << "Square: " << x<< "^" << y << " = " << pow(x, y) << endl;

    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Remainder: " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;
    return 0;
}
