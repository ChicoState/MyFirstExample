#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
  //Grant Meyer comments here
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " << x + y << endl;
    cout << "Subtraction: " << x - y << endl;
    cout << "Multiplication: " <<x * y << endl;
    cout << "Division: " << x / y << endl;
    cout << "Remainder: " <<x % y << endl;

    return 0;
}
