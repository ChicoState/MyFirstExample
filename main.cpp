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

    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Dividing by zero is ot a number.\n"; 
    cout << "Division: " << x / y << endl;
    cout << "Remainder: " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;

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



*/ 
