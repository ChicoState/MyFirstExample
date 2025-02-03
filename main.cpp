#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{

  cout << "This is Kevin!\n";
  cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x << "+" << y << "=" << x + y << std::endl;
    cout << "Subtraction: " << x << "-" << y << "=" << x - y << std::endl;
    cout << "Multiplication: " << x << "*" << y << "=" << x * y << std::endl;
    cout << "Division: " << x << "/" << y << "=" << x / y << "with a remainder of " << x%y << std::endl;
    cout << "Square Root of " << x << " is " <<sqrt(x) << std::endl;
    cout << "Square Root of " << y << " is " <<sqrt(y) << std::endl;
    cout << x << "^" << y << "=" << pow(x, y) << std::endl;


    return 0;
}
