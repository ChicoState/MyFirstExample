#include <iostream>
#include <cmath>

int main()
{
   std::cout << "This is Kevin!" << std::endl;
   std:: cout<< "Hi, please enter two whole numbers: " << std::endl;

    int x,y;

    std::cin >> x >> y;
    std::cout << "Addition: " << x << "+" << y << "=" << x + y << std::endl;

    std::cout << "Subtraction: " << x << "-" << y << "=" << x - y << std::endl;

    std::cout << "Multiplication: " << x << "*" << y << "=" << x * y << std::endl;

    std::cout << "Division: "<< x << "/" << y << "=" << x / y << " with remainder of " << x % y <<  std::endl;

    std::cout << "Square Root: " << "Square root of " << x << " is "  << sqrt(x) << std::endl;

    std::cout << "Square Root: " << "Square root of " << y << " is "  << sqrt(y) << std::endl;

    std::cout << "Square: " << x << "^" << y << "=" << pow(x, y) << std::endl;

    return 0;
}
