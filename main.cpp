#include <iostream>
#include <cmath>

int main()
{
    std::cout << "This is Elizabeth!\n";
    std::cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << x << "+" << y << "=" << x + y << std::endl;
    std::cout << x << "-" << y << "=" << x - y << std::endl;
    std::cout << x << "*" << y << "=" << x * y << std::endl;
    std::cout << x << "/" << y << "=" << x / y << " with remainder of " << x % y << std::endl;
    // std::cout << "Remainder: " << x % y << std::endl;
    std::cout << "Square Root: " << x << " is " << sqrt(x) << std::endl;
    std::cout << "Square Root: " << y << " is " << sqrt(y) << std::endl;
    std::cout << x << "^" << y << "=" << pow(x, 2) << std::endl;

    return 0;
}
