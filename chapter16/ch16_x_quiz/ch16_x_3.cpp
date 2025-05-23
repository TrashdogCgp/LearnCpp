#include <iostream>
#include <vector>

template <typename T>
std::pair<std::size_t, std::size_t> getMinAndMaxIndices(const std::vector<T>& vec) 
{
    T min{vec[0]};
    T max{vec[0]};

    std::size_t minIndex{0};
    std::size_t maxIndex{0};

    for(std::size_t i{0}; i<vec.size(); ++i)
    {
        if(vec[i] < min)
        {
            min = vec[i];
            minIndex = i;
        }
        if(vec[i] > max)
        {
            max = vec[i];
            maxIndex = i;
        }
    }
    return std::pair(minIndex, maxIndex);
}


int main()
{
    std::vector thingy{0,4,6,8,12,4,3};
    std::pair<std::size_t, std::size_t> thangy = getMinAndMaxIndices(thingy);
    std::cout << "Min index: " << thangy.first << " with value " << thingy[thangy.first] <<'\n';
    std::cout << "Max index: " << thangy.second << " with value " << thingy[thangy.second] << '\n';
}


