#include <iostream>
#include <string_view>
#include <vector>



int main()
{
    std::vector<std::string_view> vec{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

    std::string userEnteredName{};
    std::cout << "Enter a name:";
    std::cin >> userEnteredName;

    bool nameFound{false};
    for(std::string_view name : vec)
    {
        if(name == userEnteredName)
        {
            nameFound = true;
        }
    }

    std::cout << userEnteredName << (nameFound ? " was found\n" : " was not found\n");

    return 0;
}

