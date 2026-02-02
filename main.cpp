#include <iostream>
#include <cmath>

using std:: endl;
using std:: cout;
using std:: cin;
int main()
{
    std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    std::cout << "Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " << x * y << std::endl;
   std::cout << "Division: " << x / y << std::endl;
   if(y == 0 ) {
     std::cout << "dividing by zero is not a number.\n";
   }
   else{
       std::cout << "division" << x / y << std:: endl;
   }
    

    std::cout << "Remainder: " << x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;

    return 0;
}
