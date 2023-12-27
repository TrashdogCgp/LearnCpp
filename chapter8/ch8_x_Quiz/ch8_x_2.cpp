#include <cassert>
#include <iostream>

bool isPrime(int x)
{
    if(x==2)
    {
        return true;
    }
    else if(x<=1 || x%2==0)
    {
        return false;
    }
    //Prime numbers start with 2; don't try modulo 1 or modulo 0
    //But also, only try odd numbers
    for(int i{3}; i<x; i+=2)
    {
        if( (x%i) == 0 )
        {
            return false;
        }
    }
    return true;
}

int main()
{
    assert(!isPrime(0));
    assert(!isPrime(1));
    assert(isPrime(2));
    assert(isPrime(3));
    assert(!isPrime(4));
    assert(isPrime(5));
    assert(isPrime(7));
    assert(!isPrime(9));
    assert(isPrime(11));
    assert(isPrime(13));
    assert(!isPrime(15));
    assert(!isPrime(16));
    assert(isPrime(17));
    assert(isPrime(19));
    assert(isPrime(97));
    assert(!isPrime(99));
    assert(isPrime(13417));

    std::cout << "Success!\n";
}
