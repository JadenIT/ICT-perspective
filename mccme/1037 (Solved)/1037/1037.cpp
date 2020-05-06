#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long long N;

	cin >> N;

	for (long long i = 2; i * i <= N; i++) {
		if (N % i == 0) {
			cout << N / i << " " << N - N / i << endl;
			return 0;
		}
	}

	cout << 1 << " " << N - 1;

	return 0;
}

