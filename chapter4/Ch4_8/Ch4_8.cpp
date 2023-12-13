#include <iomanip>
#include <iostream>

//Demonstrate setting of precision on floating point numbers
int main()
{
    double pi = 3.1415926535897932;
    std::cout << pi << '\n';
    std::cout << std::setprecision(12);
    std::cout << pi << '\n';
}
