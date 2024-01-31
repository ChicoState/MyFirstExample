#include <iostream>
#include <cmath>

int main()
{
    std::cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " <<x * y << std::endl;
    std::cout << "Division: " << (y != 0 ? std::to_string(x / y) : ("Dividing by zero is not a number.")) << std::endl;
    std::cout << "Remainder: " << (y != 0 ? std::to_string(x % y) : ("Dividing by zero is not a number.")) << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;

    return 0;
}
