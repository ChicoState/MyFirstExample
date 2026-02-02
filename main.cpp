#include <iostream>
#include <cmath>

using std::endl;
using std::cin;
using std::cout;

int main()
{
    cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    cout << "Hi, please enter two whole numbers: ";

    int x,y;

<<<<<<< HEAD
    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    if(y==0) 
    {
	 std::cout << "Dividing by zero is not a number." << endl;
    }
    else
    {
         std::cout << "Division: " << x / y << endl;
    	 std::cout << "Remainder: " << x % y << endl;
    }
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;
=======
    std::cin >> x >> y;
    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " << x * y << std::endl;
    if(y==0) 
    {
	 std::cout << "Dividing by zero is not a number." << std::endl;
    }
    else
    {
         std::cout << "Division: " << x / y << std::endl;
    	 std::cout << "Remainder: " << x % y << std::endl;
    }
    
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;
>>>>>>> NaN-errors

    return 0;
}
