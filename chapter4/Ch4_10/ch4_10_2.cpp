#include <iostream>

//Answer to question 2 from the quiz

int main()
{
    int x{};
    std::cout << "Enter a number (0 through 9):'\n";
    std::cin >> x;
    
    if (x == 2 || x == 3 || x == 5 || x == 7)
        std::cout << "The number is prime\n";
    else
        std::cout << "The number is not prime";

    return 0;
}
