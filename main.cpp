#include <iostream>
#include <cmath>

int main()
{
    std::cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << "Addition: " << x << " + " << y << " = " << x + y << std::endl;
    std::cout << "Subtraction: " << x << " - " << y << " = " << x - y << std::endl;
    std::cout << "Multiplication: " << x << " * " << y << " = " << x * y << std::endl;
    std::cout << "Division: " << x << " / " << y << " = " << x / y << std::endl;
    std::cout << "Remainder: " << x << " % " << y << " = " << x % y << std::endl;
    std::cout << "Square Root: " << " sqrt(" << x << ") = " << sqrt(x) << std::endl;
    std::cout << "Square: " << "pow(" << x << ", " << y << ") = " << pow(x, y) << std::endl;

    return 0;
}
