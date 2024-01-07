#include <iostream>
#include <vector>

template <typename T>
void printElement(const std::vector<T>& vec, int index)
{
    if(static_cast<int>(vec.size()) <= index || index < 0) 
    {
        std::cout << "Invalid index: " << index<< " is out of range!\n";
        return;
    } 
    std::cout << "The element has value: " << vec[static_cast<size_t>(index)] <<'\n';
}


int main()
{
    std::vector v1 { 0, 1, 2, 3, 4 };
    printElement(v1, 2);
    printElement(v1, 5);

    std::vector v2 { 1.1, 2.2, 3.3 };
    printElement(v2, 0);
    printElement(v2, -1);

    return 0;
}

