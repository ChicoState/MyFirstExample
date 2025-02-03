#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
<<<<<<< HEAD
  std::cout << "This is Kevin!\n";
  std::cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << "Addition: " << x << "+" << y << "=" << x + y << std::endl;
    std::cout << "Subtraction: " << x << "-" << y << "=" << x - y << std::endl;
    std::cout << "Multiplication: " << x << "*" << y << "=" << x * y << std::endl;
    std::cout << "Division: " << x << "/" << y << "=" << x / y << "with a remainder of " << x%y << std::endl;
    std::cout << "Square Root of " << x << " is " <<sqrt(x) << std::endl;
    std::cout << "Square Root of " << y << " is " <<sqrt(y) << std::endl;
    std::cout << x << "^" << y << "=" << pow(x, y) << std::endl;
=======
    cout << "Hi, please enter two whole numbers: ";

    int x,y;

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
