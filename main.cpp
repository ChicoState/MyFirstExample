#include <iostream>
#include <cmath>

using std::endl;
using std::cin;
using std::cout;

int main()
{
   std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
   std::cout << "Hi, please enter two whole numbers: \n";
	 std::cout << "(Limited to whole numbers between -2,147,483,648 and 2,147,483,647)\n";

    int32_t x,y;

    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Remainder: " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;

    return 0;
}
