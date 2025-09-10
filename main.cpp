#include <iostream>
#include <cmath>

int main()
{
    std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    std::cout << "Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    
    //cout << "Addition: " << x + y << endl;
    cout << x << "+" << y << "=" << x + y << endl;
    
    //cout << "Subtraction: " << x - y << endl;
    cout << x << "-" << y << "=" << x - y << endl;
    
    //cout << "Multiplication: " << x * y << endl;
    cout << x << "*" << y << "=" << x * y << endl;

    //cout << "Division: " << x / y << endl;
    //cout << "Remainder: " << x % y << endl;
    
    if (y == 0) {
        cout << "Dividing by zero is not a number." << endl;
    }
    else {
        cout << x << "/" << y << "=" << x / y;
        if (x % y > 0) {
        cout << " with remainder of " << x % y << endl;
        }
        else {
            cout << endl;
        }
    }

    //cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square root of " << x << " is " << sqrt(x) << endl; 
    cout << "Square root of " << y << " is " << sqrt(y) << endl; 

    //cout << "Square: " << pow(x, y) << endl;
    cout << x << "^" << y << "=" << pow(x,y) << endl;

    return 0;
}
