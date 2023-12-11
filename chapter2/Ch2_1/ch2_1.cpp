#include <iostream>

void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout << "In doA()\n";
    doB();
}

int main()
{
    std::cout << "Starting main()\n";

    doA();
    doB();

    std::cout << "Ending main() \n";

    return 0;
}
