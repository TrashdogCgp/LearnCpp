#include <iostream>

//Tbh this solution is disgracefully bad, but it's too late in the evening for me to think straight
//Calling it a night and hoping I think clearer tomorrow
int main()
{
    int outer{5};
    int count{0};
    while(count < outer)
    {
        ++count;
        int inner{0};
        while(inner < outer)
        {
            if((outer - inner) > count)
            {
                std::cout << "  ";
            }
            else
            {
                std::cout << outer - inner << ' ';
            }
            ++inner;
        }
 
        std::cout << '\n';
    }

    return 0;
}
