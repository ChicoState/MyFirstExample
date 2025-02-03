#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;


int main()
{
    cout << "This is Aidan!\n";
    cout<<"Hi there, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " <<x * y << endl;
    if (y !=0) cout << "Division: " << x / y << endl;
    else cout << "Division: Nan, cannot divide by 0" << endl;
    cout << "Remainder: " <<x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;

    return 0;
}
