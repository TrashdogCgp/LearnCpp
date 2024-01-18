#include <algorithm>
#include <string>
#include <iostream>

void enterNames(std::string* const names, const std::size_t name_count)
{

    for(std::size_t i{}; i<name_count; ++i)
    {
        std::cout << "Enter name " << i + 1 << ':';
        std::getline(std::cin >> std::ws, names[i]);
    }

}

std::size_t getNameCount()
{
    std::cout << "Enter the number of names you wish to enter:";
    std::size_t name_count{};
    std::cin >> name_count;
    return name_count;
}

int main()
{
    std::size_t name_count{getNameCount()};

    std::string* names {new std::string[name_count]};
    std::cout << "Now enter each name:";
    enterNames(names, name_count);
    std::sort(names, names + name_count);

    for(size_t i{}; i< name_count; ++i)
    {
        std::cout << names[i] << '\n';
    }

    return 0;
}
