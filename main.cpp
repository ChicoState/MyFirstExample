#include <iostream>
#include <cmath>

using std::endl;
using std::cin;
using std::cout;

int main()
{
    cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    cout << "Hi, please enter two whole numbers: ";

    int x, y;

    std::cin >> x >> y;
    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " << x * y << std::endl;

    if (y != 0) {
        std::cout << "Division: " << x / y << std::endl;
        std::cout << "Remainder: " << x % y << std::endl;
    } else {
        std::cout << "Division: undefined (division by zero)" << std::endl;
        std::cout << "Remainder: undefined (division by zero)" << std::endl;
    }
    
    if (x >= 0) {
        std::cout << "Square Root: " << sqrt(x) << std::endl;
    } else {
        std::cout << "Square Root: undefined (negative number)" << std::endl;
    }
    
    std::cout << "Power: " << pow(x, y) << std::endl;

    return 0;
}
