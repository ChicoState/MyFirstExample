#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout<<"Laughs are cheap dude, I'm going for gasps!";
    cout<<"Hi, please enter two numbers: ";

    int x,y;

    cin >> x >> y;
    cout << x + y << endl;
    cout << x * y << endl;
    if(x == 0 || y == 0) {
        cout << "WE don't play that here." << endl;
    }
    else {
        cout << x / y << endl;
    }

    return 0;
}
