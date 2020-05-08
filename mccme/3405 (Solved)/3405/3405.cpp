#include <iostream>

using namespace std;

int gcd_euclid(int a, int b) {
	while (a != 0 && b != 0) a > b ? a %= b : b %= a;
	return a > b ? a : b;
}

int main()
{
	int n;

	cin >> n;

	if (n == 1) {
		cout << 1 << " " << 1;
	}
	else if (n == 2) {
		cout << 2 << " " << 1;
	}
	else {
		for (int i = n; i > 0; i--) {
			int a = i;
			int b = n - a;
			int gcd = gcd_euclid(a, b);

			if (gcd == 1 && a < b) {
				cout << a << " " << b;
				return 0;
			}
		}
	}

	return 0;
}
