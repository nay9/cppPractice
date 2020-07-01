#include <iostream>

int getValueFromUser() {
    std::cout << "enter an int\n";
    int input{};
    std::cin >> input;
    return input;
}

void printValue(int x) {
    std::cout << x << " doubled is: " << x * 2 << '\n';
}

int main()
{
    int x{ getValueFromUser() };

    printValue(x);
    return 0;
}