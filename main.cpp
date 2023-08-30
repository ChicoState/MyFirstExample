#include <iostream>
#include <cmath>

int main()
{
    cout<<"Hi, please enter two whole numbers: ";
    int x,y;

    cin >> x >> y;
   if(y != 0){
    std::cin >> x >> y;
    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " <<x * y << std::endl;
    std::cout << "Division: " << x / y << std::endl;
    std::cout << "Remainder: " <<x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;
	}
    else
    {
	    cout << "error";
   
    }
    return 0;
}
