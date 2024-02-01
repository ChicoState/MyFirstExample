#include <iostream>
#include <cmath>

int main()
{
    std::cout << "This is Kevin!\n";
    std::cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    int add = x + y; 
    int minus = x - y;
    int mutilply = x * y;
    int divide = x / y;
    int remainder = x % y;
    std::cout << x << " + " << y << " = " << add << std::endl;
    std::cout << x << " - " << y << " = " << minus << std::endl;
    std::cout << x << " * " << y << " = " << mutilply <<  std::endl;
    std::cout << x << " / " << y << " = " << divide << " with remainder of " << remainder << std::endl;
    std::cout << "Square root of " << x << " is " << sqrt(x) << std::endl;
    std::cout << "Square root of " << y << " is " << sqrt(y) << std::endl;
    std::cout << x << " ^ " << y << " = " << pow(x,y) <<  std::endl;

    return 0;
}
