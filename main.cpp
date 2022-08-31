#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;

    // Adding subraction feature better
    cout << x-y << " is the subraction of numbers" << endl;

    cout << x / y << endl;
    cout << x % y << endl;


    return 0;
}
