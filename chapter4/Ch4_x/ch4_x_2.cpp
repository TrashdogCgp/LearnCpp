#include <iostream>

void printMathOperation(double a, double b, char mathSymbol)
{
    if(mathSymbol == '+')
        std::cout << a << " + " << b << " = " << a + b;
    else if(mathSymbol == '-')
        std::cout << a << " - " << b << " = " << a - b;
    else if(mathSymbol == '*')
        std::cout << a << " * " << b << " = " << a * b;
    else if(mathSymbol == '/')
        std::cout << a << " / " << b << " = " << a / b;
}

double getInput()
{
    std::cout << "Enter a float point number:\n";
    double dub{};
    std::cin >> dub;
    return dub;
}

int main()
{
    std::cout << "Enter two floating point numbers:\n";
    double a{getInput()};
    double b{getInput()};
    std::cout << "Enter a math symbol (+, -, *, or /):\n";
    char mathSymbol{};
    std::cin >> mathSymbol;
    printMathOperation(a,b,mathSymbol);

    return 0;
}
