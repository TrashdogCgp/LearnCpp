#include <chrono>
#include <random>
#include <iostream>

class Random
{
private:

    static std::mt19937 mt; 

public:
	static std::mt19937 generate2();
    static int get(int min, int max);
};

std::mt19937 Random::mt{Random::generate2()}; 
std::mt19937 Random::generate2()
{
	std::random_device rd{};

	// Create seed_seq with high-res clock and 7 random numbers from std::random_device
	std::seed_seq ss{
		static_cast<std::seed_seq::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()),
			rd(), rd(), rd(), rd(), rd(), rd(), rd() };

	return std::mt19937{ ss };
}
int Random::get(int min, int max)
{
    return std::uniform_int_distribution{min, max}(Random::mt);
}

int main()
{
	// Print a bunch of random numbers
	for (int count{ 1 }; count <= 10; ++count)
		std::cout << Random::get(1, 6) << '\t';

	std::cout << '\n';

	return 0;
}

