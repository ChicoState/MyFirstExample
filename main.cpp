//Lawrence Elias Boyd
//2/3/2025

#include <iostream>
#include <cmath>


using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "This is Kevin!\n";
    cout << "Hi, please enter two whole numbers: ";


    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Remainder: " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;

    return 0;
}
