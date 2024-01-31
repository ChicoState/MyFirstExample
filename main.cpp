#include <iostream>
#include <cmath>
using namespace std; 
int main()
{
    cout << "This is Kevin!\n";
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x + y << std::endl;
    cout << "Subtraction: " << x - y << std::endl;
    cout << "Multiplication: " <<x * y << std::endl;
    cout << "Division: " << x / y << std::endl;
    cout << "Remainder: " <<x % y << std::endl;
    cout << "Square Root: " << sqrt(x) << std::endl;
    cout << "Square: " << pow(x, y) << std::endl;

    return 0;
}
