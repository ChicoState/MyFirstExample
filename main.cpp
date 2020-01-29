#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout << "Hi, please enter two integers. Press enter after entering said integer: ";
    int num1, num2;
    cin >> num1;
    cin >> num2;
    cout << "The integers entered were " << num1 << " and " << num2 << endl;
    return 0;
}
