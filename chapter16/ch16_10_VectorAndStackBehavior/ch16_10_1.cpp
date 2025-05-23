#include <iostream>
#include <vector>


void pushAndPrint(std::vector<int>& vec, int numToPush)
{
    vec.push_back(numToPush);
    std::cout << "Push " << numToPush << "\t(Stack :";
    for (int num : vec)
    {
        std::cout << ' ' << num;
    }
    std::cout << ")\n";
}

void popAndPrint(std::vector<int>& vec)
{
    vec.pop_back();
    //Not bothering with the formatting here
    //Would add extra space to make it line up
    //Not bothering because double-digit numbers would increase the pain-in-ass of it
    //If solution has a graceful way to handle that case, I'll delete this and do it, I guess
    //.......k, so they just do a tab. Dunno how well that scales, but whatever.
    std::cout << "Pop: \t(Stack:";
    if(vec.empty())
    {
        std::cout << " empty";
    }
    else
    {
        for (int num : vec)
        {
            std::cout << ' ' << num;
        }
    }
    std::cout << ")\n";
}


int main()
{

    std::vector<int> vec{};
    pushAndPrint(vec, 1);
    pushAndPrint(vec, 2);
    pushAndPrint(vec, 3);
    popAndPrint(vec);
    pushAndPrint(vec, 4);
    popAndPrint(vec);
    popAndPrint(vec);
    popAndPrint(vec);


    return 0;
}


