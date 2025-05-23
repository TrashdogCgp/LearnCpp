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
    friend Fraction operator*(const Fraction& f1, const Fraction& f2);
    friend Fraction operator*(const Fraction& f, int nmbr);
    friend Fraction operator*(const int nmbr, const Fraction& f);
    friend std::istream& operator>>(std::istream& in, Fraction& f);
    friend std::ostream& operator<<(std::ostream& out, const Fraction& f);

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

std::istream& operator>>(std::istream& in, Fraction& f)
{
    in >> f.m_numerator;
    in >> f.m_denominator;
    return in;
}

std::ostream& operator<<(std::ostream& out, const Fraction& f)
{
    out << f.m_numerator << '/' << f.m_denominator;
    return out;
}



int main()
{
	Fraction f1;
	std::cout << "Enter fraction 1: ";
	std::cin >> f1;

	Fraction f2;
	std::cout << "Enter fraction 2: ";
	std::cin >> f2;

	std::cout << f1 << " * " << f2 << " is " << f1 * f2 << '\n';

	return 0;
}

