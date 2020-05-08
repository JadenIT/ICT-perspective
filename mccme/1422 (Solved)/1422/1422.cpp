#include <iostream>

using namespace std;

long long gcd_euclid(long long a, long long b) {
	while (a != 0 && b != 0) a > b ? a %= b : b %= a;
	return a > b ? a : b;
}

int main()
{
	long long a, b;

	cin >> a >> b;

	long long  gcd = gcd_euclid(a, b);

	long long lcm = a * b / gcd;

	cout << lcm;

	return 0;
}

