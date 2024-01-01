#include <iostream>

class Fraction
{
private:
    int m_numerator{0};
    int m_denominator{1};
    
public:
    explicit Fraction(int num = 0, int den = 1)
    : m_numerator{num}, m_denominator{den}
    {       }

    void setFraction(const int& numerator, const int& denominator)
    {
        m_numerator = numerator;
        m_denominator = denominator; //need to ensure this isn't 0
    }
    
    const int& getNumerator() const
    {   return m_numerator;    }
    
    const int& getDenominator() const
    {   return m_denominator;    }

    void setNumerator(const int& num)
    {   m_numerator = num;      }

    void setDenominator(const int& den)
    {   m_denominator = den;      }

    //This function should be outside of the class and named differently, too, to avoid getter/setter confusion
    void getFraction()
    {
        int num{0};
        int den{1};
        std::cout << "Enter a value for numerator: ";
        std::cin >> num;
        std::cout << "Enter a value for denominator: ";
        std::cin >> den;
        setFraction(num, den);
    }

    void printFraction(const Fraction& f)
    {
        std::cout << f.getNumerator() << '/' << f.getDenominator() << '\n';
    }

};

//Just freaking taking this out of the class; too cumbersome to call on an instance of Fraction tbh
Fraction multiply(Fraction f1, Fraction f2)
{
    return Fraction{f1.getNumerator() * f2.getNumerator(), f1.getDenominator() * f2.getDenominator()};
}

int main()
{
    Fraction f1{ };
    f1.getFraction();
    Fraction f2{ };
    f2.getFraction();

    std::cout << "Your fractions multiplied together: ";

    Fraction frac = multiply(f1,f2);
    std::cout << frac.getNumerator() << "    " << frac.getDenominator() <<'\n';
    f1.printFraction(multiply(f1, f2));

    return 0;
}
