#include <iostream>
#include <math.h>

using namespace std;

int main() {

	int N, M, s1,s2;

	cin >> M;

	N = M;

	int* seive;
	seive = new int[N + 1];

	for (int i = 2; i <= N; i++) {
		seive[i] = i;
	}

	int p = 2;

	while (p * p < N) {
		for (int i = 2; i <= N; i++) {
			if (seive[i] % p == 0 && seive[i] >= 2 * p) {
				seive[i] = 0;
			}
		}
		for (int i = 2; i <= N; i++) {
			if (seive[i] > p) {
				p = seive[i];
				break;
			}
		}
	}

	for (int i = 2; i < M; i++) {
		for (int x = 2; x < M; x++) {
			if (seive[i] + seive[x] == M) {
				s1 = seive[i];
				s2 = seive[x];
			}
		}
	}

	if (s2 < s1) {
		cout << s2 << " " << s1;
	}
	else {
		cout << s1 << " " << s2;
	}

	return 0;
}