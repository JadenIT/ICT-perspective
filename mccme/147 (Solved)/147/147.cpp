#include <iostream>

using namespace std;

int gcd_euclid(int a, int b) {
	while (a != 0 && b != 0)a > b ? a %= b : b %= a;
	return b ? b : a;
}

int main()
{
	long long m, n;

	cin >> m >> n;

	cout << gcd_euclid(m, n);
	return 0;
}
