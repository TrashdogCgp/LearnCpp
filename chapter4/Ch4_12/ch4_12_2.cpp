#include <iostream>

void printIntegral(int toPrint)
{
    std::cout << toPrint << '\n';
}

int main()
{
    std::cout << "Enter a single character: " << '\n';
    char ch {};
    std::cin >> ch;

    std::cout << ch << " has an ascii code of: ";
    printIntegral(ch);

    //alternative implicit type conversion
    int chInt {ch};
    std::cout << "Getting ascii code via initialization, too. It's: " << chInt << '\n';

    return 0;
}

