#include <iostream>
#include <vector>

void appendUserNum(int& vec)
{
    std::cout << "Enter a number: ";
    std::cin >> vec;
}

int main()
{
    std::vector<int> nums(3);
    appendUserNum(nums[0]);
    appendUserNum(nums[1]);
    appendUserNum(nums[2]);

    std::cout << "The sum is: " << nums[0] + nums[1] + nums[2] << '\n';
    std::cout << "The product is: " << nums[0] * nums[1] * nums[2] << '\n';

    return 0;
}
