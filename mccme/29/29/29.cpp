#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(long long num) {

	if (num == 0 || num == 1) return false;

	bool flag = true;
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

bool isNatural(double num) {
	if (num == int(num)) return true;
	return false;
}


int main()
{

	long long N, M, s = 0;

	cin >> N >> M;

	for (long long a = N; a <= M; a++) {
		for (long long b = N; b <= a; b++) {

			if (isNatural(sqrt(a)) && isNatural(sqrt(b))) {
				double p = sqrt(a) - sqrt(b);

				cout << a << " " << b << " " << p << " " << endl;

				if (p < N || p > M) continue;

				if (!isNatural(sqrt(p))) continue;

				if (!isPrime(p)) continue;

				s++;
			}
		}
	}

	cout << s;

	return 0;
}

