#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Hi, please enter two integers: ";
    int num1, num2;
    cin >> num1 >> num2;
    int result = num1 / num2;
    cout << "The integer division result of " << num1 << " divided by " 
	 << num2 << " is " << result << endl;
    return 0;
}
