#include <iostream>

namespace Ch17
{
    struct Item 
    {
        std::string_view name;
        int gold;
    };

    void printItemCost(const Item& item)
    {
        std::cout << "A " << item.name << " costs " << item.gold << ".\n";
    }

}

//Note: cannot test this on 1/12/24 due to lack of compiler in IDE
//Will have to test this on 1/14/24, assuming time permits.
//Note that ch17_4_2.cpp will be this same thing, but arr will be initialized
//with double braces instead of single.
//Very minimal change required.
int main()
{
    using namespace std::literals;
    constexpr std::array<Ch17::Item, 4> arr{
        Ch17::Item{"sword"sv,5},
        Ch17::Item{"dagger"sv,3},
        Ch17::Item{"club"sv,2},
        Ch17::Item{"spear"sv,7}
    };

    for (Ch17::Item it : arr)
    {
        Ch17::printItemCost(it);
    }
    std::cout << "Yip yap\n";
    return 0;
}
