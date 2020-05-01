/*
	Correct
*/

#include <iostream>

using namespace std;

int main()
{

	const int SIZE = 50000 * 2;

	int n;

	int s = 0;

	cin >> n;

	int sieve[SIZE + 1];

	for (int i = 2; i < 2 * n; i++) {
		sieve[i] = i;
	}

	int k = 2;
	while (k * k < 2 * n) {
		for (int i = 2; i < 2 * n; i++) {
			if (sieve[i] % k == 0 && sieve[i] >= 2 * k) {
				sieve[i] = 0;
			}
		}
		for (int i = 2; i < 2 * n; i++) {
			if (sieve[i] != 0 && sieve[i] > k) {
				k = sieve[i];
				break;
			}
		}
	}

	for (int i = n + 1; i < 2 * n; i++) {
		if (sieve[i] != 0) {
			s++;
		}
	}

	cout << s;


	return 0;
}

