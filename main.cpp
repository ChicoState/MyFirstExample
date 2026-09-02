#include <iostream>
#include <cmath>
#include <cstdint>

using std::endl;
using std::cin;
using std::cout;

int main()
{
    cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    cout << "Hi, please enter two whole numbers\n";
    cout << "(Limited to whole numbers between -2,147,483,648 and 2,147,483,647): ";

    int32_t x,y;

    if (!(cin >> x >> y)) {
        std::cout << "Error: The number is not within the limit.\n";
        return 1;
    }

    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Remainder: " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;

    return 0;
}
