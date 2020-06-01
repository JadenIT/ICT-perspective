#include <iostream>

int main()
{
	int K;

	std::cin >> K;

	int rests[20];

	int max_couple[2];

	for (int i = 0; i < K - 1; i++) {
		std::cin >> rests[i];
	}

	for (int g = rests[K - 2]; ; g += K) {

		bool skip = false;

		for (int divisor = K; divisor >= 2; divisor--) {
			int rest = rests[divisor - 2];

			if (g % divisor != rest) {
				skip = true;
				break;
			}
		}

		if (skip) continue;

		std::cout << g;
		return 0;

	}

	return 0;
}