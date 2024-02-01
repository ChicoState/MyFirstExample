#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "This is Kevin!\n";
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " <<x * y << std::endl;
    
    y != 0 ? cout << "Division: " << x / y << endl : cout << "Dividing by zero is not a number." << endl;
    y != 0 ? cout << "Remainder: " <<x % y << endl : cout << "Dividing by zero is not a number." << endl;
    
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;

    return 0;
}
