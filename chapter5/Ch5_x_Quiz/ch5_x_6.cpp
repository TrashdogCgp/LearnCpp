#include <iostream>

// Write the function getQuantityPhrase() here
std::string getQuantityPhrase(int appleCount)
{
    if (appleCount == 0)
        return "no";
    else if (appleCount == 1)
        return "one";
    else if (appleCount == 2)
        return "a couple of";
    else if (appleCount==3)
        return "a few";
    else if (appleCount > 3)
        return "many";
    else
        return "a negative quantity(?)";
}

// Write the function getApplesPluralized() here
std::string getApplesPluralized(int appleCount)
{
    return ((appleCount == 1) ? "apple" : "apples");
}

int main()
{
    std::cout << "Mary has " << getQuantityPhrase(3) << " " << getApplesPluralized(3) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << " " << getApplesPluralized(numApples) << ".\n";

    return 0;
}
