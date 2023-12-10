#include <iostream>

/////////////////////////////
// Testing VSCode's tasks.json config for multiple files without #include statements
// Have to open the Ch2_8 folder as the main project for this code to include addFunction.cpp as intended
/////////////////////////////

int add(int x, int y);

int main()
{
    std::cout << add(3,5);
}
