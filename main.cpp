#include <iostream>
#include <cmath>

int main()
{
    cout << "This is Kevin!\n";
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << x << " + " << y << " = " << x+y << std::endl;
    std::cout << x << " - " << y << " = " << x-y << std::endl;
    std::cout << x << " * " << y << " = " << x*y << std::endl;
    if(y == 0)
    {
        std::cout << "Dividing by 0 is not a number" << endl;
    }
    else
    {
        std::cout << x << " / " << y << " = " << x/y << "with a remainder of " << x % y << std::endl;
    }
    
    std::cout << "Square Root of " << x << " is " << sqrt(x) << std::endl;
    std::cout << "Square Root of " << y << " is " << sqrt(y) << std::endl;
    std::cout << x << "^" << y << " = " << pow(x, y) << std::endl;
    std::cout << "plz\n";
    
    return 0;
}
