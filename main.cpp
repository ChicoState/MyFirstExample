#include <iostream>
#include <cmath>
#include <string>
using namespace std;

using std::cin;
using std::cout;
using std::endl;

int main()
{

    cout << "Hi, please enter two whole numbers: ";


    int x,y;
    cin >> x >> y;
    

    cout << "Addition: " 		<< x + y 	<< endl;
    cout << "Subtraction: " 	<< x - y 	<< endl;
    cout << "Multiplication: " 	<< x * y 	<< endl;
    if (y == 0) {
        cout << "You cannot divide by zero!" << endl;
    }else{
        cout << "Division: " 		<< x / y << endl;
        cout << "Remainder: " 		<< x % y 	<< endl;
    }
    cout << "Square Root: " 	<< sqrt(x) 	<< endl;
    cout << "Square: " 		    << pow(x, y) 	<< endl;


    return 0;
}
