#include <iostream>
#include <cmath>

int main()
{
    std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    std::cout << "Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << x << " + " << y << " = " << x + y << std::endl;
    std::cout << x << " - " << y << " = " << x - y << std::endl;
    std::cout << x << " * " << y << " = " << x * y << std::endl;
    std::cout << x << " / " << y << " = " << x / y << " with remainder of " << x % y << std::endl;
    std::cout << "Square Root(" << x << ") = " << sqrt(x) << std::endl;
    std::cout << "Square Root(" << y << ") = " << sqrt(y) << std::endl;
    std::cout << x << " ^ " << y << " = " << pow(x, y) << std::endl;

    return 0;
}
