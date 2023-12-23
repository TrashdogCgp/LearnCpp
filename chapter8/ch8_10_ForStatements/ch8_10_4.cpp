#include <iostream>

void fizzbuzz(int countTo)
{
    //Not sure whether to start at i=1 or i=0, defaulting to i=1
    for(int i{1}; i<=countTo; ++i)
    {
        if(i%3==0 && i%5==0)
        {
            std::cout << "fizzbuzz\n";
        }
        else if(i%3==0)
        {
            std::cout << "fizz\n";
        }
        else if(i%5==0)
        {
            std::cout << "buzz\n";
        }
        else
        {
            std::cout << i <<'\n';
        }
    }
}

int main()
{
    fizzbuzz(19);
    return 0;
}

