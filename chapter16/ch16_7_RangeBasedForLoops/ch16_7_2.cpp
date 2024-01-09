#include <iostream>
#include <string_view>
#include <vector>


template <typename T>
bool isValueInArray(const std::vector<T>& vec, const T& value)
{
    for(const auto& element : vec)
    {
        if(element == value)
            return true;
    }
    return false;
}

int main()
{
    std::vector<std::string_view> vec{"Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly"};

    std::string userEnteredName{};
    std::cout << "Enter a name:";
    std::cin >> userEnteredName;

    bool nameFound{isValueInArray<std::string_view>(vec, userEnteredName)};

    std::cout << userEnteredName << (nameFound ? " was found\n" : " was not found\n");

    return 0;
}










