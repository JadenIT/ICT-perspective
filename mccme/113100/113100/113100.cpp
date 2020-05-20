#include <iostream>

using namespace std;

int main()
{

	long long n, s = 0, low_a = 0, low_b = 0, low_c = 0, low_s = 0;

	cin >> n;

	for (int a = n / 3 - 1; a <= n / 3; a++) {
		/*for (int a = 1; a <= n / 3; a++) {*/
		if (a + (a + 1) + ((a + 1) + 1) > n) continue;
		for (int b = a + 1; b < n - a - b; b++) {
			long long c = n - a - b;

			if (b < c) {
				s = a * a + b * b + c * c;

				if (low_s == 0) {
					low_a = a;
					low_b = b;
					low_c = c;
					low_s = s;
				}

				if (s < low_s) {
					low_a = a;
					low_b = b;
					low_c = c;
					low_s = s;
				}
			}
		}
	}

	cout << low_a << " " << low_b << " " << low_c << " " << endl;

	return 0;
}

