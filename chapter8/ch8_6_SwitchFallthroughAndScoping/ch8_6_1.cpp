#include <iostream>

int calculate(int a, int b, char op)
{
    switch (op)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            return a / b;
        default:
            std::cout << "Invalid operator, returning zero";
            return 0;
    }
}

int main(void)
{
    std::cout << calculate(2,3,'/') <<'\n';
    return 0;
}
