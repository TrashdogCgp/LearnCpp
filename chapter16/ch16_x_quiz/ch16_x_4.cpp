#include <iostream>
#include <vector>


std::vector<int> getVector()
{
    std::vector<int> userInputVector{};
    int userEntry{0};
    std::cout << "Enter numbers, and enter -1 when done";
    while(true)
    {
        std::cin >> userEntry;
        if(userEntry != -1)
            userInputVector.push_back(userEntry);
        else
            break;
    }
    return userInputVector;
}

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

void printArray(const std::vector<int>& vec)
{
    std::cout << "With array (" << vec[0];
    for(std::size_t i{1}; i<vec.size(); ++i)
    {
        std::cout << ", ";
        std::cout << vec[i];
    }
    std::cout << ")\n";

}

int main()
{
    std::vector<int> userVec{getVector()};

    std::pair<std::size_t, std::size_t> thangy = getMinAndMaxIndices(userVec);
    printArray(userVec);
    std::cout << "Min index: " << thangy.first << " with value " << userVec[thangy.first] <<'\n';
    std::cout << "Max index: " << thangy.second << " with value " << userVec[thangy.second] << '\n';




    return 0;
}







