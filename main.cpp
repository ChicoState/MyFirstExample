#include <iostream>
#include <cmath>

int main()
{
    cout << "This is Kevin!\n";
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << x + y << std::endl;
    std::cout << x - y << std::endl;
    std::cout << x * y << std::endl;
    std::cout << x / y << std::endl;
    std::cout << x % y << std::endl;
    std::cout << sqrt(x) << std::endl;
    std::cout << pow(x, y) << std::endl;

    return 0;
}
