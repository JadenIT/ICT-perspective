#include <iostream>

using namespace std;

int main()
{

	long long int n;

	cin >> n;

	long long int* sieve = new long long int[n + 1];
	for (long long int i = 2; i <= n; i++) {
		sieve[i] = i;
	}

	long long int k = 2;
	while (k * k <= n) {
		for (long long int i = 2; i <= n; i++) {
			if (sieve[i] >= 2 * k && sieve[i] % k == 0) {
				sieve[i] = 0;
			}
		}
		for (long long int i = 2; i <= n; i++) {
			if (sieve[i] > k) {
				k = sieve[i];
			}
		}
	}

	for (long long int i = 2; i <= n; i++) {
		if (sieve[i] != 0) {
			while (n % i == 0) {
				cout << i;
				if (i != n) {
					cout << "*";
				}
				n /= i;
			}
		}
	}

	return 0;
}
