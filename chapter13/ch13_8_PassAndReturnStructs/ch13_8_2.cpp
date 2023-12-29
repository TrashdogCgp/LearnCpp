#include <iostream>

struct Fraction{
    int numerator{};
    int denominator{};
};

Fraction getFractionFromUser()
{
    Fraction userFraction{};
    std::cout << "Enter numerator: ";
    std::cin >> userFraction.numerator;

    std::cout << "Enter denominator: ";
    std::cin >> userFraction.denominator;
    return userFraction;
}

Fraction multiplyFractions(const Fraction& f1, const Fraction& f2)
{
    return Fraction{f1.numerator * f2.numerator, f1.denominator * f2.denominator};
}

void printFraction(const Fraction& f)
{
    std::cout<< "Multiplied fractions.\nProduct numerator is: " << f.numerator << "\nProduct denominator is: " << f.denominator << '\n';
}

int main()
{
    Fraction f1{getFractionFromUser()};
    Fraction f2{getFractionFromUser()};
    
    Fraction multResult{multiplyFractions(f1, f2)};
    printFraction(multResult);

    return 0;
}
