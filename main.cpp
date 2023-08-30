#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout<<"Hi, please enter two whole numbers: ";
    int x,y;

    cin >> x >> y;
    if(y != 0)
    {

	    cout << "Addition: " << x + y << endl;
   	 cout << "Subtraction: " << x - y << endl;
    	cout << "Multiplication: " <<x * y << endl;
   	 cout << "Division: " << x / y << endl;
   	 cout << "Remainder: " <<x % y << endl;
	}
    else
    {
	    cout << "error";
	   }
    return 0;
}
