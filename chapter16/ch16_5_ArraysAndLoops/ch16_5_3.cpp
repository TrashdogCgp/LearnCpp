#include <iostream>
#include <limits>
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

template <typename T>
int searchForValue(const std::vector<T>& vec, T value)
{
    for(std::size_t i{0}; i<vec.size(); i++)
    {
        if(vec[i] == value)
        {
            return static_cast<int>(i);
        }
    }
    return(-1); //value not found
}

int getValidNumber()
{
    int num {};
    do
    {
        std::cout << "Enter a number between 1 and 9: ";
        std::cin >> num;

        if (!std::cin)
            // reset errors 
            std::cin.clear();
        
        // ignore  extra characters in the input buffer
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

    } while (num < 1 || num > 9);

    return num;
}

int main()
{
    std::vector arr{ 4, 6, 7, 3, 8, 2, 1, 9 };

    int num {getValidNumber()};
    int ind {searchForValue(arr, num)};
    if(ind >= 0)
    {
        std::cout << "Number " << num << " is at index " << ind <<'\n';
    }
    else
    {
        std::cout << num << " not found\n";
    }
    return 0;
}
