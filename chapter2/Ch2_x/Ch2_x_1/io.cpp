#include <iostream>

int readNumber()
{
    std::cout << "Enter an integer: " << '\n';
    int num{};
    std::cin >> num;
    return num;
}

int writeNumber(int num)
{
    std::cout << "The answer is: " << num;
}
