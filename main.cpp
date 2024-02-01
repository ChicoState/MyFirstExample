#include <iostream>
#include <cmath>

int main()
{
    std::cout<<"Hi, please enter two whole numbers: ";

    int first,second;

    std::cin >> first >> second;
    std::cout << "Addition: " << first + second << std::endl;
    std::cout << "Subtraction: " << first - second << std::endl;
    std::cout << "Multiplication: " << first * second << std::endl;
    std::cout << "Division: " << first / second << std::endl;
    std::cout << "Remainder: " << first % second << std::endl;
    std::cout << "Square Root: " << sqrt(first) << std::endl;
    std::cout << "Square: " << pow(first, second) << std::endl;

    return 0;
}
