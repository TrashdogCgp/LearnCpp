#include <cassert>
#include <iostream>
#include <string_view>
#include <vector>

//Criteria for the quiz wasn't all that clear to me
//Consequently, this looks little like the tutorial's solution
void fizzbuzz(int numToCheck)
{
    const static std::vector<std::string_view> words{"fizz", "buzz", "pop", "bang", "jazz", "pow", "boom"};
    const static std::vector<int> nums{3, 5, 7, 11, 13, 17, 19};
    bool noPrints{true};
    assert(nums.size() == words.size());
    for (size_t i{0}; i<nums.size(); ++i)
    {
        if((numToCheck % nums[i]) == 0)
        {
            std::cout << words[i];
            noPrints = false;
        }
    }
    if(noPrints)
    {
        std::cout << numToCheck;
    }
    std::cout <<'\n';
}


int main()
{
    for (int i{0}; i < 22; ++i)
    {
        fizzbuzz(i);
    }
    return 0;
}
