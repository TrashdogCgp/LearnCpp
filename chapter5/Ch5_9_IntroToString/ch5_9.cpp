#include <string>
#include <iostream>

int main()
{
    //try to see whether or not std::ws input manipulator holds.
    std::cout << "Enter an integer\n";
    int dummyInt{};
    //std::cin >> std::ws >> dummyInt;
    std::cin >> dummyInt; //Confirmed std::ws doesn't stick

    std::cout << "Now enter a string\n";
    std::string dummyString{};
    //std::cin >> dummyString;

    std::getline(std::cin >> std::ws, dummyString); //Have to use extraction manipulator std::ws here 

    std::cout << "Entered "<< dummyInt << " and " << dummyString << '\n';
    return 0;
}
