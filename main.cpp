#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    cout << "Hi, please enter two integers which we will add and divide: ";

    int num1, num2;
    cin >> num1 >> num2;

    // handle division by zero
    while (num2 == 0) {
      cout << "We cannot divide by zero, please enter a non-zero integer: ";
      cin >> num2; 
    }

    // print results
    int result_add = num1 + num2;
    int result_div = num1 / num2;
    cout << num1 << " + " << num2 << " = " << result_add << endl;
    cout << num1 << " / " << num2 << " = " << result_div << endl;

    return 0;
}
