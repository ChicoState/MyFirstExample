#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    cin >> x >> y;
    cout << "Addition: " <<x<<"+"<<y<<"="<< x + y << endl;
    cout << "Subtraction: " <<x<<"-"<<y<<"="<< x - y << endl;
    cout << "Multiplication: " <<x<<"*"<<y<<"="<<x * y << endl;
    cout << "Division: " <<x<<"/"<<y<<"="<< x / y << endl;
    cout << "Remainder: " <<x % y << endl;
    cout<< "Square root of x: "<<sqrt(x) <<endl;
    cout<< "Square root of y: "<<sqrt(y) <<endl;
    cout<<x << " to the power of "<< y<< " is "<< pow(x,y)<<endl;
/* add showing the maths and powers*/
    return 0;

}
