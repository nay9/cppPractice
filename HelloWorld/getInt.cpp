#include <iostream>

int getInteger() {
	std::cout << "enter an int: ";
	int x{};
	std::cin >> x;
	return x;
}