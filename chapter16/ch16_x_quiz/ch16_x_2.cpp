#include <cassert>
#include <iostream>
#include <vector>

namespace Items
{
    enum Type
    {
        health_potion,
        torches,
        arrows,
        max_items,
    };
    static std::vector<std::string_view> itemNamesSingular{
        "health potion",
        "torch",
        "arrow",
    };
    static std::vector<std::string_view> itemNamesPlural{
    "health potions",
    "torches",
    "arrows",
    };
}

int countItems(const std::vector<int>& items)
{
    int count{0};
    for(int item : items)
    {
        count += item;
    }
    return count;
}

void printItemCount(const std::vector<int>& items)
{
    std::cout << "You have " << countItems(items) << " total items\n";
}

void printEachItem(const std::vector<int>& items)
{
    for(std::size_t i{0}; i<items.size(); ++i )
    {
        std::cout << "You have " << items[i] << ' ';
        if(items[i] == 1)
        {
            std::cout << Items::itemNamesSingular[i] <<'\n';
        } 
        else
        {
            std::cout << Items::itemNamesPlural[static_cast<std::size_t>(i)] <<'\n';
        }
    }

}

int main()
{
    std::vector<int> inventoryItems{1, 5, 10};
    assert(inventoryItems.size() == Items::max_items);
    printItemCount(inventoryItems);
    printEachItem(inventoryItems);

}


