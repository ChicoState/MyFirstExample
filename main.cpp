// Copyright 1776 J. Jonah Jameson
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

float divide(int, int);
int add(int, int);

int main() {
    cout << "Hi, would you like to add or divide? ";
    std::string input;
    cin >> input;
    cout << "Please enter two numbers: ";

    int first, second;
    cin >> first >> second;

    if (input == "divide") {
      if (second == 0) {
        cout << "You can not divide by 0\n";
        return 1;
      }
      cout << divide(first, second) << endl;
    } else if (input == "add") {
      cout << add(first, second) << endl;
    } else {
      cout << "Option not supported. Please try again.\n";
    }

    return 0;
}

int add(int x, int y) {
  return x+y;
}

float divide(int x, int y) {
  return 6.7;
}
