#include <iostream>
#include <cmath>

<<<<<<< HEAD
using std::endl;
using std::cin;
using std::cout;

int main()
=======
int32_t main()
>>>>>>> 260d733 (prevents devide by zero and updated to int32_t. Resolves 67 and 340)
{
    cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    cout << "Hi, please enter two whole numbers: ";

    int32_t x,y;

<<<<<<< HEAD
    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Remainder: " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;
=======
    std::cin >> x >> y;
    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " << x * y << std::endl;

    if (y == 0) {
        std::cout << "Deviding by zero is not a number. \n";
    } else{
    std::cout << "Division: " << x / y << std::endl;
    }
    std::cout << "Remainder: " << x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;
>>>>>>> 260d733 (prevents devide by zero and updated to int32_t. Resolves 67 and 340)

    return 0;
}
