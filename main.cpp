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
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " <<x * y << endl;
    if (y != 0){
        cout << "Division: " << x / y << endl;
    }
    
    else
            cout << "Dividing by zero is not a number." << endl;
    if (y != 0){
    cout << "Remainder: " <<x % y << endl;
    }
    else
            cout << "Dividing by zero is not a number." << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;
    
    return 0;
}
