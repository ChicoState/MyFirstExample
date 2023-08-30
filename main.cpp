#include <iostream>
#include <cmath>

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
        return 0;
}
