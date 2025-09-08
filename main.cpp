#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

//Lecture 09/08

int main()
{
    cout << "Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x << "+" << y << "= " << x + y << endl;
    cout << "Subtraction: " << x << "-" << y << "= " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << " with remainder of " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;

    return 0;
}
