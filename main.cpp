#include <iostream>
#include <cmath>

int main()
{
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

<<<<<<< HEAD
    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " <<x * y << endl;
    if (y != 0){
        cout << "Division: " << x / y << endl;
    }
    
    else
            cout << "Dividing by zero is not a number." << endl;
    if (y != 0){
    cout << "Remainder: " <<x % y << endl;
    }
    else
            cout << "Dividing by zero is not a number." << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;
    
=======
    std::cin >> x >> y;
    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " <<x * y << std::endl;
    std::cout << "Division: " << x / y << std::endl;
    std::cout << "Remainder: " <<x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;

>>>>>>> f04e00c410c940703c0714e7d3cb7d1fc814eccf
    return 0;
}
