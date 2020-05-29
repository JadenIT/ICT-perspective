#include <iostream>
#include <math.h>

using namespace std;

bool isNatural(double num) {
	if (num == int(num)) return true;
	return false;
}

const int M_MAX = 100000;

int main()
{
	int arr[M_MAX + 1];

	for (int i = 0; i <= M_MAX; i++) arr[i] = i;

	arr[0] = 0, arr[1] = 0;

	int k = 2;
	for (int i = 0; i * i <= M_MAX; i++) {
		for (int j = 2; j <= M_MAX; j++) if (arr[j] > k && arr[j] % k == 0) arr[j] = 0;
		k++;
	}

	long long N, M, s = 0;

	cin >> N >> M;

	for (long long f = N; f <= M; f++) {
		long long p = arr[f];

		if (p == 0) continue; // Если число не простое

		long long a, b;
		if (N == 0) {
			b = 0;
			a = p;
		}
		else {
			b = p;
			a = 4 * p;
		}

		if (a <= M && b <= M) s++;

		while (a <= M && b <= M) {

			long long prev_a = a;

			a = (a + p) * 2 - b;

			b = prev_a;

			if (a <= M && b <= M)  s++;

		}
	}

	cout << s;

	return 0;
}
