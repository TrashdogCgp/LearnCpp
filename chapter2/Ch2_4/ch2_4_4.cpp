#include <iostream>

///////////////////////////////////
// Solutions for ch2_4 problems 4 and 5

int doubleNumber(int num)
{
    return num*2;
}

int getNumFromUser()
{
    std::cout << "Please enter a number to double:\n";
    int num{};
    std::cin >> num;
    return num;
}

int main(void)
{
    std::cout << doubleNumber(getNumFromUser());

    return 0;
}
