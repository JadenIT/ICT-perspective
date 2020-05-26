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

	arr[0] = 0;
	arr[1] = 0;

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

		for (long long a = p; a <= M; a++) {

			long long b = a - 2 * sqrt(a * p) + p;

			if (b > a || b < N || b > M) continue;

			if (a - 2 * sqrt(a * b) + b != p) continue;

			long long a_n = a;
			long long b_n = b;

			s++;

			while (true) {
				long long prev_a = a_n;

				a_n = (a_n + p) * 2 - b_n;

				b_n = prev_a;

				if (a_n < N || a_n > M) break;

				s++;
			}
			break;

		}
	}

	cout << s;

	return 0;
}
