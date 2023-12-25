#include <iostream>

//Didn't mean to independently pretty much verbatim write what the solution had. I guess that's good?

int main()
{
    char letterToPrint{'a'};
    while(letterToPrint <= 'z')
    {
        std::cout << letterToPrint << ": " << static_cast<int>(letterToPrint) <<'\n';
        ++letterToPrint;
    }
    return 0;
}
