#include <iostream>
#include <vector>

template <typename T>
T findMax(const std::vector<T>& vec)
{
    T largest = vec[0];
    for(std::size_t i{0}; i<vec.size(); i++)
    {
        if(largest < vec[i])
        {
            largest = vec[i];
        }
    }
    return largest;
}




int main()
{
    std::vector testScore { 84, 92, 76, 81, 56 };
    std::cout << "The max score is: " << findMax(testScore) << '\n'; // prints 92

    return 0;
}
