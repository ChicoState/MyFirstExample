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
    cout << x * y << endl;
    // Adding subraction feature
    cout << x-y << " is the subraction of numbers" << endl;


    return 0;
}
