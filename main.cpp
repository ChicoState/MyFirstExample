#include <iostream>
#include <cmath>
<<<<<<< HEAD
using namespace std;
int main()
{
    cout << "This is Ann!\n";
    cout<<"Hi, please enter two whole numbers: ";
=======

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Hi, please enter two whole numbers: ";
>>>>>>> b5466e8cb9209dcb082320cce7243b5d3f3eafcb

    int x,y;

    cin >> x >> y;
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 50d5486 (updated gitignore file and removed std:: by adding namespace std)
    cout << x << "+" << y << "=" << x + y << endl;
    cout << x << "-" << y << "=" << x - y << endl;
    cout << x << "*" << y << "=" << x * y << endl;
    cout << x << "/" << y << "=" << x / y << " with remainder of " << x % y << endl;
    cout << "Square root of " << x << " is " << sqrt(x) << endl;
    cout << "Square root of " << y << " is " << sqrt(y) << endl;
    cout << x << "^" << y  << "=" << pow(x, y) << endl;
<<<<<<< HEAD
=======
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " << x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Remainder: " << x % y << endl;
    cout << "Square Root: " << sqrt(x) << endl;
    cout << "Square: " << pow(x, y) << endl;
>>>>>>> b5466e8cb9209dcb082320cce7243b5d3f3eafcb
=======
>>>>>>> 50d5486 (updated gitignore file and removed std:: by adding namespace std)

    return 0;
}
