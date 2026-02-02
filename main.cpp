#include <iostream>
#include <cmath>

int main()
{
    std::cout << "THE FIRST EXAMPLE MATH DISPLAY!\n";
    std::cout << "Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " << x * y << std::endl;
    if(y == 0) { 
        std::cout << "Dividing by zero is ot a number.\n"; 
    } else { 
    std::cout << "Division: " << x / y << std::endl;
    } 
    std::cout << "Remainder: " << x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;

    return 0;
}

/* 

Compiling and running 
g++ main.cpp 
./a.out 

To add the file to the staging area before pushing 
git add main.cpp 

Commit changes with message
git commit -m "description of what the changes accomplished"

Push changes to github 
git push main.cpp 

/* 