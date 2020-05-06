#include <iostream>

using namespace std;

int main()
{
	long long N;

	cin >> N;

	if (N == 1) {
		cout << 1 << " " << 1;
		return 0;
	}

	for (long long i = N - 1; i >= 1; i--) {
		if (N % i == 0) {
			if ((N - i) % i == 0) {
				cout << i << " " << N - i;
				return 0;
			}
		}
	}

	return 0;
}

