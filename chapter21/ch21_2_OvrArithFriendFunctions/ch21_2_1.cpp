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
    Fraction(int num, int den):
        m_numerator{num},
        m_denominator{den}
    {
        reduce();
    }
    void print();
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);
    friend Fraction operator*(const Fraction& f, int nmbr);
    friend Fraction operator*(const int nmbr, const Fraction& f);
};

void Fraction::print()
{
    std::cout << this->m_numerator << '/' << this->m_denominator << '\n';
}

Fraction operator*(const Fraction& f1, const Fraction& f2)
{
    return Fraction{f1.m_numerator * f2.m_numerator, f1.m_denominator * f2.m_denominator};
}

Fraction operator*(const Fraction& f, int nmbr)
{
    return Fraction{f.m_numerator * nmbr, f.m_denominator};
}

Fraction operator*(const int nmbr, const Fraction& f)
{
    return Fraction{nmbr * f.m_numerator, f.m_denominator};
}



int main()
{
	Fraction f1{ 2, 5 };
	f1.print();

	Fraction f2{ 3, 8 };
	f2.print();

	Fraction f3{ f1 * f2 };
	f3.print();

	Fraction f4{ f1 * 2 };
	f4.print();

	Fraction f5{ 2 * f2 };
	f5.print();

	Fraction f6{ Fraction{1, 2} * Fraction{2, 3} * Fraction{3, 4} };
	f6.print();

	Fraction f7{ 0, 6 };
	f7.print();

    return 0;
}

