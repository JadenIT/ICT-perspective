#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n)
{
	if (n <= 1)
		return false;

	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;

	return true;
}

int max_prime_divider(int divider) {

	/*if (isPrime(divider)) return divider;*/

	for (int i = 2; i <= sqrt(divider); i++) {
		if (divider % i == 0) {
			return divider / i;
			/*divider = divider / i;*/
			/*if (isPrime(divider)) return divider;
			else return max_prime_divider(divider);*/
		}
	}
}

int countDivisors(int n)
{
	int cnt = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			if (n / i == i)cnt++;
			else cnt = cnt + 2;
		}
	}
	return cnt;
}

int main()
{

	int N;

	cin >> N;

	int maxPrimeDivider = max_prime_divider(N);

	cout << maxPrimeDivider << endl;

	for (int num = pow(2, (maxPrimeDivider - 1)); ; num += pow(2, (maxPrimeDivider - 1))) {
		if (countDivisors(num) == N) {
			cout << num;
			return 0;
		}
	}

	return 0;
}

