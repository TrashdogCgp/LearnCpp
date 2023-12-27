#include <iostream>

// write your sub function template here
template <typename T, typename U>
auto sub(T t, U u)
{
    return t - u;
}

int main()
{
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	return 0;
}
