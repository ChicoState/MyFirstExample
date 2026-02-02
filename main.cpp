#include <iostream>
#include <cmath>
#include <cstdint>

using std::endl;
using std::cin;
using std::cout;

int main()
{
    cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    cout << "Hi, please enter two whole numbers: ";

    int32_t x,y;

    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;

    if (y != 0) {
      cout << "Division: " << static_cast<double>(x) / y << endl;
      cout << "Remainder: " << x % y << endl;
    } else {
      cout << "Division: Dividing by zero is not a number." << endl;
      cout << "Remainder: Dividing by zero is not a number." << endl;
    }
    
    cout << "Remainder: " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;

    return 0;
}
