#include <iostream>
#include <cmath>

int main()
{
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << x << "+"<< y << <<"="<< x + y << std::endl;
    std::cout << x << "-" << y <<"="<< x - y << std::endl;
    std::cout << x <<"*" << y <<"="<<x * y << std::endl;
    std::cout << x <<"/" << y <<"="<< x / y << std::endl;
    std::cout << x <<"/" << y <"="<< % y << std::endl;


    return 0;
}
