#include <iostream>
#include <vector>

using namespace std;

int* getSieve(int* sieve, int N) {
	int p = 2;
	while (p * p <= N) {
		for (int i = 2; i <= N; i++) {
			if (sieve[i] % p == 0 && sieve[i] >= 2 * p) {
				sieve[i] = 0;
			}
		}
		for (int i = 2; i <= N; i++) {
			if (sieve[i] > p) {
				p = sieve[i];
				break;
			}
		}
	}

	return sieve;
}

int main()
{
	int k;
	cin >> k;
	int N = 200 * 200;

	int* sieve = new int[N];

	for (int i = 2; i <= N; i++) {
		sieve[i] = i;
	}

	sieve = getSieve(sieve, N);

	vector<int> newSieve;
	for (int i = 2; i <= N; i++) {
		if (sieve[i] != 0) {
			newSieve.push_back(sieve[i]);
		}
	}

	vector<int> newNewSieve;
	int L = 1;
	for (int i = 0; i < newSieve.size(); i++) {
		for (int x = 0; x < newSieve.size(); x++) {
			if (L == newSieve[x]) {
				newNewSieve.push_back(newSieve[i]);
				break;
			}
		}
		L++;
	}

	for (int i = 0; i < newNewSieve.size(); i++) {
		if (i + 1 == k) {
			cout << newNewSieve[i];
			break;
		}
	}

	return 0;
}
