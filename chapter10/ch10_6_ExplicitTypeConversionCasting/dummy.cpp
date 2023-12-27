#include <iostream>

int main()
{
    //trying out c-style casts to make sure they work on literals
    double divVal{(double) 5 / 2};
    //Verified this works to output 2.5, C-style casting works on literals
    std::cout << divVal << '\n';
    return 0;
}
