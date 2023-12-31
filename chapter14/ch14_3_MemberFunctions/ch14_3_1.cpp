#include <iostream>


struct IntPair
{
    int i1;
    int i2;
    void print()
    {
        std::cout << "Pair(" << i1 << ", " << i2 << ")\n";
    }

    bool isEqual(IntPair comparator)
    {
        return (i1 == comparator.i1) && (i2 == comparator.i2);
    }
};


int main()
{
    IntPair p1 {1, 2};
	IntPair p2 {3, 4};

	std::cout << "p1: ";
	p1.print();

	std::cout << "p2: ";
	p2.print();
    
	std::cout << "p1 and p1 " << (p1.isEqual(p1) ? "are equal\n" : "are not equal\n");
	std::cout << "p1 and p2 " << (p1.isEqual(p2) ? "are equal\n" : "are not equal\n");

    return 0;
}
