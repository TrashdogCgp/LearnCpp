#include <iostream>

template <typename T, typename U, typename V>
class Triad
{
private: 
    T first;
    U second;
    V third;
public:
    Triad(const T& a, const U& b, const V&c)
    : first{a}
    , second{b}
    ,third{c}
    {   }

    const T& getFirst() { return first;}
    const T& getSecond() { return second;}
    const T& getThird() { return third;}

    void print() const;
};

template <typename T, typename U, typename V>
void Triad<T, U, V>::print() const
{
    std::cout << '[' << first << ", " << second << ", " << third << "]\n";
}

int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << t1.getFirst() << '\n';

	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';

	return 0;
}
