#include <iostream>
#include <vector>

using namespace std;

long long gcd_euclid(long long a, long long b) {
	while (a != 0 && b != 0) a > b ? a %= b : b %= a;
	return a + b;
}

bool condition(long long a, long long b, long long n) {
	if (b >= a) return false;
	if (n % a != 0 || n % b != 0)  return false;
	if (a * b > n)  return false;
	if (gcd_euclid(a, b) != 1)  return false;
	return true;
}

int main()
{
	long long n, c = 0;

	cin >> n;

	vector<long long> dividersOfN;

	/*
		Сокращаем перебо до n/2 так как максимальное число
		которое сможет делиться с остатком = n/2
		потом просто добавляем последнее число котрое
		всегда делится на искомое с остатком
	*/

	for (int i = 1; i <= n / 2; i++) if (n % i == 0) dividersOfN.push_back(i);
	dividersOfN.push_back(n);

	for (int a = 0; a < dividersOfN.size(); a++) {
		for (int b = 0; b < dividersOfN.size(); b++) {

			if (a == b) continue;

			if (condition(dividersOfN[a], dividersOfN[b], n)) c++;
		}
	}

	cout << c;

	return 0;
}

