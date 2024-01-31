#include <iostream>
#include <cmath>

int main()
{
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << x << "+" << y <<"="<<x+y<< std::endl; //addition
    std::cout << x << "-" << y << "=" << x - y << std::endl; //subtraction
    std::cout << x << "*" << y << "=" << x * y << std::endl; //multiplication
    std::cout << x << "/" << y << "=" << x / y <<" with remainder of "<<x%y << std::endl; //div/mod
    //std::cout << "Remainder: " <<x % y << std::endl;
    std::cout << "Square Root of " << x << " is "<< sqrt(x) << std::endl; //square x
    std::cout << "Square Root of " << y << " is "<< sqrt(y) << std::endl; //square y
    std::cout << x << "^" << y << "=" << pow(x, y) << std::endl; //expo

    return 0;
}
