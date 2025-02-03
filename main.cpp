#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Hi, please enter two whole numbers: ";

    int x,y;

<<<<<<< HEAD
    std::cin >> x >> y;
    std::cout << x << "+ "<< y <<"= "<< x + y << std::endl;
    std::cout << x << "-" << y <<"= "<< x - y << std::endl;
    std::cout << x << "*" << y<<"= " << x * y << std::endl;
    std::cout << x << "/ " << y << "= "<< x / y << std::endl;
    std::cout <<x<< "/ "<< y <<"= "<<x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;
=======
    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Remainder: " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;
>>>>>>> b5466e8cb9209dcb082320cce7243b5d3f3eafcb

    return 0;
}
