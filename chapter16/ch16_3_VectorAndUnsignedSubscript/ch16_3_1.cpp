#include <iostream>
#include <vector>



int main()
{
    std::vector<char> thingy{'h','e','l','l','o'};
    std::cout << "The array has " << std::size(thingy) << " elements.\n";
    std::cout << thingy[static_cast<size_t>(1)];
    std::cout << thingy.at(static_cast<size_t>(1)) <<'\n';
    return 0;
}
