#include <iostream>
#include <cmath>
<<<<<<< HEAD

using std::cin;
using std::cout;
using std::endl;
=======
>>>>>>> f04e00c410c940703c0714e7d3cb7d1fc814eccf

int main()
{
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;

    if (y == 0) {
        std::cerr << "Error: Division by 0 not possible" << endl;
        return 0;
    }

    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " <<x * y << std::endl;
    std::cout << "Division: " << x / y << std::endl;
    std::cout << "Remainder: " <<x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;

    return 0;
}
