#include <iostream>
#include <vector>






int main()
{
    //a
    //using CTAD in this case
    std::vector vecA{2,4,6,8,10,12};

    //b
    //Screw using CTAD tbh tho?
    const std::vector<double> vecB{1.2,3.4,5.6,7.8};

    //c
    //for the sv suffix to enable CTAD, would use:
    //using namespace std::literals::string_view_literals;
    const std::vector<std::string_view> vecC{"Alex","Brad","Charles","Dave"};

    //d
    std::vector vecD{12};

    //e
    std::vector<int> vecE(12);


    return 0;
}
