#include <iostream>
#include <cmath>

int main()
{
    std::cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << x << "+" << y << "=" << x + y << endl;
    std::cout << x << "-" << y << "=" << x - y << endl;
    std::cout << x << "*" << y << "=" << x * y << endl;
    std::cout << x << "/" << y << "=" << x / y << " with remainder of " << x % y <<  endl;
    std::cout << "Square Root of " << x << " is " << sqrt(x) << endl;
    std::cout << "Square Root of " << y << " is " << sqrt(y) << endl;
    std::cout << x << "^" << y << "=" << pow(x, y) << endl;

    return 0;
}
