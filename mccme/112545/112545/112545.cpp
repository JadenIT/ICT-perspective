#include <iostream>
#include <fstream>

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

int dividers(int i)
{
	int sc = 0, n;
	for (int q = 1; q <= i; q++)if (i % q == 0) sc++;

	return sc;
}

int multuplay_of_diveders(int i) {


	int sc = 1, n;
	for (int q = 1; q <= i; q++) {
		if (i % q == 0) {
			sc *= q;
		}
	}

	return sc;
}

int main()
{
	/*
	int N;
	cin >> N;
	long long output;
	if (!isPrime(N)) {
		if (N == 1) output = 1;
		else if (N == 4) output = 6;
		else {
			for (int m = 12; ; m += 12) {
				if (dividers(m) == N) {
					output = m;
					break;
				}
			}
		}
	}
	cout << output;
	*/

	for (int i = 1; i <= 100; i++) {
		for (int num = 1; num <= 5000; num++) {
			if (dividers(num) == i && !isPrime(i)) {
				cout << num << " " << i << endl;
				break;
			}
		}
	}



	return 0;
}

