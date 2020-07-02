#include <iostream>
int add(int x, int y);

int getInteger();

int main()
{
    std::cout << "the sum of 3 and 4 is:  " << add(3, 4) << '\n';
    
    int x{ getInteger() };
    int y{ getInteger() };

    std::cout << x << " + " << y << " is " << x + y << '\n';
    return 0;
}