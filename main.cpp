#include <iostream>
using namespace std;
#include <cmath>

int main()
{
    cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    cout << "Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x << "+" << y << "=" << x + y << endl;
    cout << "Subtraction: "<< x << "-" << y << "=" << x - y << endl;
    cout << "Multiplication: " << x << "*" << y << "=" << x * y << endl;
    cout << "Division: " << x << "/" << y << "=" << x / y << endl;
    cout << "Remainder: " << x << "%" << y << "=" << x % y << endl;
    cout << "Square Root: " << "√" << x << "=" << sqrt(x) << endl;
    cout << "Square: " << x << "^" << y << "=" << pow(x, y) << endl;
    return 0;
}
