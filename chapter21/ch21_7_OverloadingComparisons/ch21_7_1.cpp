#include <iostream>
#include <numeric>

class Fraction{

private:
    int m_numerator{};
    int m_denominator{1};
    
    //Reduce the fraction by dividing by the greatest common denominator
    void reduce()
    {
        int greatestDenom{std::gcd(this->m_numerator, this->m_denominator)};
        //Condition of not wanting to divide by 0
        if(greatestDenom)
        {
            m_numerator /= greatestDenom;
            m_denominator /= greatestDenom;
        }
    }
public:
    Fraction(int num=0, int den=1):
        m_numerator{num},
        m_denominator{den}
    {
        reduce();
    }
    void print();
    friend bool operator==(const Fraction& f1, const Fraction& f2);
    friend bool operator!=(const Fraction& f1, const Fraction& f2);
    friend bool operator<(const Fraction& f1, const Fraction& f2);
    friend bool operator>(const Fraction& f1, const Fraction& f2);
    friend bool operator<=(const Fraction& f1, const Fraction& f2);
    friend bool operator>=(const Fraction& f1, const Fraction& f2);

    friend std::ostream& operator<<(std::ostream& out, const Fraction& f1);

};

std::ostream& operator<<(std::ostream& out, const Fraction& f1)
{
    out << f1.m_numerator << '/' << f1.m_denominator;
    return out;
}

bool operator==(const Fraction& f1, const Fraction& f2) {
    return (f1.m_numerator == f2.m_numerator) && (f1.m_denominator == f2.m_denominator);
}
bool operator!=(const Fraction& f1, const Fraction& f2) {
    return !(operator==(f1, f2));
}
//tbh my instinct was to evaluate a double here, not use this property of fractions
bool operator<(const Fraction& f1, const Fraction& f2) {
    return (f1.m_numerator * f2.m_denominator < f2.m_numerator * f1.m_denominator);
}
bool operator>(const Fraction& f1, const Fraction& f2) {
    return (operator<(f2, f1));
}
bool operator<=(const Fraction& f1, const Fraction& f2) {
    return !(operator>(f1,f2));
}
bool operator>=(const Fraction& f1, const Fraction& f2) {
    return !(operator<(f1,f2));
}

void Fraction::print()
{
    std::cout << this->m_numerator << '/' << this->m_denominator << '\n';
}

int main()
{
	Fraction f1{ 3, 2 };
	Fraction f2{ 5, 8 };

	std::cout << f1 << ((f1 == f2) ? " == " : " not == ") << f2 << '\n';
	std::cout << f1 << ((f1 != f2) ? " != " : " not != ") << f2 << '\n';
	std::cout << f1 << ((f1 < f2) ? " < " : " not < ") << f2 << '\n';
	std::cout << f1 << ((f1 > f2) ? " > " : " not > ") << f2 << '\n';
	std::cout << f1 << ((f1 <= f2) ? " <= " : " not <= ") << f2 << '\n';
	std::cout << f1 << ((f1 >= f2) ? " >= " : " not >= ") << f2 << '\n';
	return 0;
}
