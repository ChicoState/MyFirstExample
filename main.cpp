#include <iostream>
#include <cmath>

int main()
{
    cout << "This is Kevin!\n";
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << x << "+ "<< y <<"= "<< x + y << std::endl;
    std::cout << x << "-" << y <<"= "<< x - y << std::endl;
    std::cout << x << "*" << y<<"= " << x * y << std::endl;
    std::cout << x << "/ " << y << "= "<< x / y << std::endl;
    std::cout <<x<< "/ "<< y <<"= "<<x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;

    return 0;
}
