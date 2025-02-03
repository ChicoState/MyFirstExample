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
    std::cout << "Addition: " << x << " + " << y << " = " << x + y << std::endl;
    std::cout << "Subtraction: " << x << " - " << y << " = " << x - y << std::endl;
    std::cout << "Multiplication: " << x << " * " << y << " = " <<x * y << std::endl;
    if(y==0) std::cout << "Dividing by zero is not a number." << std::endl; else {
        std::cout << "Division: "  << x << " / " << y << " = " << x / y << std::endl;
        std::cout << "Remainder: "  << x << " % " << y << " = " << x % y << std::endl;
    }
    std::cout << "Square Root: sqrt(" << x << ") = " << sqrt(x) << std::endl;
    std::cout << "Square: " << x << "^" << y << " = " << pow(x, y) << std::endl;
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
>>>>>>> upstream/main

    return 0;
}
