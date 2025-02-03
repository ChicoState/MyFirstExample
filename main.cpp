#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "This is Angelina!\n";
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;
    std::cin >> x >> y;
    std::cout << x << " + " << y << " = " << x + y << std::endl;
    std::cout << x << " - " << y << " = " << x - y << std::endl;
    std::cout << x << " * " << y << " = " << x * y << std::endl;
    std::cout << x << " / " << y << " = " << x / y << " with remainder of " << x % y << std::endl;
    std::cout << "Square root of " << x << " is " << sqrt(x) << std::endl;
    std::cout << "Square root of " << y << " is " << sqrt(y) << std::endl;
    std::cout << x << " ^ 2 = " << pow(x, 2) << std::endl;
        return 0;
}
