#include <iostream>

int getUserNumber(std::string_view largerOrSmaller)
{
    std::cout << "Enter the " << largerOrSmaller << " number:\n";
    int enteredNum {};
    std::cin >> enteredNum;
    return enteredNum;
}//enteredNum and largerOrSmaller die here

int main()
{
    int smaller {getUserNumber("smaller")};
    int larger {getUserNumber("larger")};
    
    //note from tutorial upon seeing solution:
    //std::swap(larger,smaller) is fair game in the future
    if(smaller > larger)
    {
        std::cout << "Swapping the values\n";
        int holder {smaller};
        smaller = larger;
        larger = holder;
    }//holder dies here
    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';

    return 0;
}//smaller and larger die here
