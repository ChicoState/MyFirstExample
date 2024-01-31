#include <iostream>
#include <cmath>

int main()
{
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " <<x * y << std::endl;
    std::cout << "Division: " << x / y << std::endl;
    std::cout << "Remainder: " <<x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Power (x^y): " << pow(x, y) << std::endl;
    std::cout << "Power (y^x): " << pow(y, x) << std::endl;
    std::cout << "y^2: " << y * y << std::endl;
    std::cout << "x^2: " << x * x << std::endl;  
    return 0;
}
