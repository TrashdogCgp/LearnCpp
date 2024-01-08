#include <iostream>
#include <vector>

// Implement printArray() here
template <typename T>
void printArray(const std::vector<T>& vec)
{
    for (std::size_t i{0}; i<vec.size(); i++)
    {
        std::cout << vec[i] << ' ';
    }
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    printArray(arr); // use function template to print array

    return 0;
}
