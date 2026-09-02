#include <iostream>
#include <cmath>
#include <cstdint>

int main()
{
    std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    std::cout << "Hi, please enter two whole numbers\n";
    std::cout << "(Limited to whole numbers between -2,147,483,648 and 2,147,483,647): ";

    int32_t x,y;

    if (!(cin >> x >> y)) {
        std::cout << "Error: The number is not within the limit.\n";
        return 1;
    }

    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " << x * y << std::endl;
    std::cout << "Division: " << x / y << std::endl;
    std::cout << "Remainder: " << x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;

    return 0;
}
