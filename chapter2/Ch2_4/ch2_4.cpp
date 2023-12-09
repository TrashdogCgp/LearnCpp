#include <iostream>

//Demonstrate unreferenced parameter behavior
int calculateSum(int a, int b, int /*notUsedDemo*/)
{
    int sum = a + b;
    return sum;
}

int main()
{
    //Call the function with three arguments to match the three parameters
    //Note that the third parameter does not have a name in the function signature
    std::cout << calculateSum(1,2,5) << '\n';
    return 0;
}
