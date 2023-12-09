#include <iostream>

//Trick the compiler into thinking the variable x is being used
//Tutorial is weird for including this, imo, and I haven't confirmed that it's even necessary for my compiler
void doNothing(int&)
{
}

int main()
{
    //define an integer variable named x
    int x;

    doNothing(x);
    std::cout << x << '\n';
    return 0;
}

