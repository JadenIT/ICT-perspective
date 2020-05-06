#include <iostream>
#include <algorithm>

using namespace std;

int gcd_euclid(int num_1, int num_2) {
	while (num_1 != 0 && num_2 != 0) num_1 > num_2 ? num_1 %= num_2 : num_2 %= num_1;
	return num_1 ? num_1 : num_2;
}

int main()
{
	long long a, b, n, s = 0;

	cin >> a >> b >> n;

	// НОК(a,b) = (a*b) / НОД(a,b)

	long long lcm = a * b / gcd_euclid(a, b);

	long long skippedShops = n / lcm;

	cout << n - skippedShops;

	return 0;

}
