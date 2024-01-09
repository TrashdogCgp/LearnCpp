#include <iostream>
#include <vector>

namespace Animal
{
    enum Names
    {
        chicken,
        dog,
        cat,
        elephant,
        duck,
        snake,
    };
    std::vector numLegs{2, 4, 4, 2, 2, 0};
}




int main()
{
    std::cout << "Number of legs for an elephant: " << Animal::numLegs[Animal::elephant];
    return 0;
}







