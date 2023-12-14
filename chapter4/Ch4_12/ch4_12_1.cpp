#include <iostream>

int main()
{
    std::cout << "Enter a single character: " << '\n';
    char ch {};
    std::cin >> ch;

    std::cout << ch << " has an ascii code of: " << static_cast<int>(ch) << '\n';

    return 0;
}

