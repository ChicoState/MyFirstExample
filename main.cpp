#include <iostream>
#include <cmath>

int main()
{
    std::cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << x << "+" << y << "=" << x + y << std::endl;
    std::cout << x << "-" << y << "=" << x - y << std::endl;
    std::cout << x << "*" << y << "=" <<x * y << std::endl;
    std::cout << x << "/" << y << "=" << x / y;
    std::cout << " with remainder of " << x % y << std::endl;
    std::cout << "Square Root of "<<x<<" is " << sqrt(x) << std::endl;
    std::cout << "Square Root of "<<y<<" is " << sqrt(y) << std::endl;
    std::cout << x << "^" << y << "=" << pow(x, y) << std::endl;

    return 0;
}
