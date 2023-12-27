#include <iostream>

namespace constants
{
    using Radians = double;
    using Degrees = double;
    inline constexpr double pi { 3.14159 };
}

double convertToRadians(double degrees)
{
    return degrees * constants::pi / 180;
}

int main()
{
    std::cout << "Enter a number of degrees: ";

    constants::Degrees degrees{};
    std::cin >> degrees;

    constants::Radians radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}
