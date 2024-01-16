#include <iostream>

void printCString(const char* cStr)
{
    for( ; *cStr !=0; ++cStr)
    {
        std::cout<<*cStr;
    }

    std::cout<<'\n';
}

void printCStringBackwards(const char* cStr)
{
    const char* ptr = cStr;
    while(*cStr != '\0')
    {
        ++cStr;
    }
    do
    {
        std::cout << *cStr;
    }
    while(cStr-- != ptr); //I hate using this version of the decrement operator tbh
    std::cout << '\n';
}

int main()
{
    char boilerplate[] = "Hello world!";
    printCString(boilerplate);
    printCStringBackwards(boilerplate);
    return 0;
}




