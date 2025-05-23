#include <iostream>
#include <functional>

int getInteger()
{
    std::cout << "Enter an integer:";
    int num{};
    std::cin >> num;
    return num;
}

char getOperator()
{
    std::cout << "Enter an operator:";
    char op{};
    std::cin >> op;
    while(op!='+' && op!='-' && op!='*' && op!='/')
    {
        std::cout << "Invalid input. Enter +, -, *, or /:";
        std::cin >> op;
    }
    return op;
}

int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}

//A little confused at why this is even an option if it doesn't return a double...
int divide(int a, int b)
{
    return a / b;
}

using ArithmeticFunction = std::function<int(int, int)>;
ArithmeticFunction getArithmeticFunction(char op)
{
    switch(op)
    {
        case '+':
            return add;
        case '-':
            return subtract;
        case '*':
            return multiply;
        case '/':
            return divide;
        default:
            return nullptr;
    }
}

int main()
{

    int a{getInteger()};
    int b{getInteger()};
    char op{getOperator()};

    //Jeez, my code looks eerily similar to the solution
    //It's honestly just how I thought to do this, using the names they gave me
    ArithmeticFunction opFunc{getArithmeticFunction(op)};
    if(opFunc)
    {
        std::cout << a << ' ' << op << ' ' << b << " = " << opFunc(a,b) << '\n';
    }
    return 0;
}



