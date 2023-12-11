#include <iostream>

int return7()
{return 7;}

int return9()
{return 9;}

int main()
{
    std::cout << return7() + return9() << '\n';
}
