#include <iostream>

constexpr bool isEven(int intIn)
{
    return (intIn % 2) == 0;
}

int main()
{
    std::cout << "Enter an integer:" << '\n';
    int intIn {};
    std::cin >> intIn;
    if(isEven(intIn))
    {
        std::cout << intIn << " is even\n";
    }
    else
    {
        std::cout << intIn << " is odd\n";
    }
    return 0;
}
