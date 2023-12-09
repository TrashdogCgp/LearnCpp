#include <iostream>

int main()
{
    std::cout << "Enter a first number:\n";
    int firstNum{};
    std::cin >> firstNum;

    std::cout << "Enter a second number:\n";
    int secondNum{};
    std::cin >> secondNum;

    std::cout << firstNum << " + " << secondNum << " is: " << firstNum + secondNum << '\n';
    std::cout << firstNum << " - " << secondNum << " is: " << firstNum - secondNum << '\n';

    return 0;
}
