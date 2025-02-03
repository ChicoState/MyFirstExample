#include <iostream>
#include <cmath>

int main() {
	std::cout << "This is Nick!\n";
	std::cout << "Hi, please enter two whole numbers: ";

	int x, y;
	std::cin >> x >> y;

	if (y == 0) {
		std::cout << "Cannot divide by 0, try again\n";
		return 1;
	}

	std::cout << x << " + " << y << " = " << x + y << std::endl;
	std::cout << x << " - " << y << " = " << x - y << std::endl;
	std::cout << x << " * " << y << " = " << x * y << std::endl;
	std::cout << x << " / " << y << " = " << x / y 
		<< " with remainder " << x % y << std::endl;
	std::cout << "Square root of " << x << " is " << sqrt(x) << std::endl;
	std::cout << "Square root of " << y << " is " << sqrt(y) << std::endl;
	std::cout << x << "^" << y << " = " << pow(x, y) << std::endl;

	return 0;
}
