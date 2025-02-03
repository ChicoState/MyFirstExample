#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;


int main()
{
  cout << "This is Kevin!\n";
  cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << x << "+" << y << "=" << x + y << endl;
    cout << x << "-" << y << "=" << x - y << endl;
    cout << x << "*" << y << "=" << x * y << endl;
    cout << x << "/" << y << "=" << x / y;
    cout << " with a remainder of " <<x % y << endl;
    cout << "Square Root of " << x << " is "<< sqrt(x) << endl;
    cout << x << "^" << y << "=" << pow(x,y) << endl;

    return 0;
}
