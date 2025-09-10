#include <iostream>
#include <cmath>

int main()
{
    std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    std::cout << "Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;

    std::cout << x << " + " << y << " = " << x+y << std::endl;
    std::cout << x << " - " << y << " = " << x-y << std::endl;
    std::cout << x << " * " << y << " = " << x*y << std::endl;
    std::cout << x << " / " << y << " = " << x+y << " remainder: " <<  x%y << std::endl;
    std::cout << "Square root of x = " << sqrt(x) << std::endl;
    std::cout << "Square root of y = " << sqrt(y) << std::endl;
    std::cout << x << "^" << y << " = " << pow(x,y) << std::endl;

    return 0;
}
