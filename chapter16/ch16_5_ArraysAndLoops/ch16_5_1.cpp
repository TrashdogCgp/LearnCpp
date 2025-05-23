#include <iostream>
#include <vector>

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    // Add your code here
    for (std::size_t i{0}; i<arr.size(); i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';

    return 0;
}
