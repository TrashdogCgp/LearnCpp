#include <iostream>

// write your add function template here
template <typename T>
T add(T a, T b)
{
    return a + b;
}

int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

	return 0;
}
