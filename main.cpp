#include <iostream>
#include <cmath>

int main()
{
    std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    std::cout << "Hi, please enter two whole numbers: ";

    int x,y;
    double output;

    std::cin >> x >> y;

    //addition
    output = x + y;
    std::cout <<x << " + " << y << " = " << output;

    //subtraction
    output = x - y;
    std::cout <<x << " - " << y << " = " << output;

    
    std::cout << "Multiplication: " << x * y << std::endl;
    std::cout << "Division: " << x / y << std::endl;
    std::cout << "Remainder: " << x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;

    return 0;
}
