#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Hi, please enter two whole numbers: ";

    int x,y;
	
    cin >> x >> y;

	if (x * y != 0)
	{
    	cout << x << "+" << y << "=" << x + y << endl;
    	cout << x << "-" << y << "=" << x - y << endl;
    	cout << x << "*" << y << "=" << x * y << endl;
    	cout << x << "/" << y << "=" << x / y << " with remainder of " << x % y << endl;
    	cout << "Square root of " << x << " is " << sqrt(x) << endl;
    	cout << "Square root of " << y << " is " << sqrt(y) << endl;
    	cout << x << "^" << y << "=" << pow(x,y) << endl;

	} else
	{
	cout << "Please enter non-zero numbers!" << endl;
	}

    return 0;
}