#include <iostream>
#include <cmath>

int main()
{
    std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    std::cout << "Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    
    //cout << "Addition: " << x + y << endl;
    std::cout << x << "+" << y << "=" << x + y << std::endl;
    
    //cout << "Subtraction: " << x - y << endl;
    std::cout << x << "-" << y << "=" << x - y << std::endl;
    
    //cout << "Multiplication: " << x * y << endl;
    std::cout << x << "*" << y << "=" << x * y << std::endl;

    //cout << "Division: " << x / y << endl;
    //cout << "Remainder: " << x % y << endl;
    
    if (y == 0) {
        std::cout << "Dividing by zero is not a number." << std::endl;
    }
    else {
        std::cout << x << "/" << y << "=" << x / y;
        if (x % y > 0) {
        std::cout << " with remainder of " << x % y << std::endl;
        }
        else {
            std::cout << std::endl;
        }
    }

    //cout << "Square Root: " << sqrt(x) << endl;
    std::cout << "Square root of " << x << " is " << sqrt(x) << std::endl; 
    std::cout << "Square root of " << y << " is " << sqrt(y) << std::endl; 

    //cout << "Square: " << pow(x, y) << endl;
    std::cout << x << "^" << y << "=" << pow(x,y) << std::endl;

    return 0;
}
