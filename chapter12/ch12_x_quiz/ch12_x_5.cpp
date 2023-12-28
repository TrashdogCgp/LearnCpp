#include <iostream>

template <typename T>
void sort2(T& a, T& b)
{
    if(a<b)
    {
        return;
    }
    else
    {
        T c{ b };
        b = a;
        a = c;
        return;
    }
}

//Code they said to test the function with:
int main()
{
    int x { 7 };
    int y { 5 };

    std::cout << x << ' ' << y << '\n'; // should print 7 5

    sort2(x, y); // make sure sort works when values need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    sort2(x, y); // make sure sort works when values don't need to be swapped
    std::cout << x << ' ' << y << '\n'; // should print 5 7

    return 0;
}
