#include <iostream>
#include <cmath>

int main()
{
    std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    std::cout << "Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    
    if(y == 0) {
        cout << "Dividing by zero is not a number." << endl;
    } else {
        cout << "Division: " << x / y << endl;
    }

    if(y == 0) {
        cout << "Dividing by zero is not a number." << endl;
    } else {
        cout << "Remainder: " << x % y << endl;
    }
    
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;
    

    return 0;
}
