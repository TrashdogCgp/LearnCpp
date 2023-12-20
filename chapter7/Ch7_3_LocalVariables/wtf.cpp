#include <iostream>
int main()
{
    int x { 2 }; // local variable, no linkage

    {
        //int x { 3 }; // this identifier x refers to a different object than the previous x
        //wtf refers to... how do you access the outer block's x value within this block? Is there no way?
        std::cout << x <<'\n';

    }

    return 0;
}
