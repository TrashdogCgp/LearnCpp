#include <iostream>

//Didn't actually look back at the code it was telling me to invert
//Just inverted the result and hoped it was close
int main()
{
    int outer{5};
    while(outer > 0)
    {
        int inner{0};
        while(inner < outer)
        {
            std::cout << outer - inner << ' ';
            ++inner;
        }
        --outer;
        std::cout << '\n';
    }

    return 0;
}
