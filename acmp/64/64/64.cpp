#include <iostream>
#include <string>

using namespace std;

int main()
{
	int SIZE;

	int M;

	cin >> M;

	int* arr = new int[M];

	for (int i = 0; i < M; i++) {
		int n;
		cin >> n;
		arr[i] = n;
	}

	int maxNum = 0;
	for (int i = 0; i < M; i++) {
		if (arr[i] > maxNum) {
			maxNum = arr[i];
		}
	}

	/*
	  maxNum - простое число до
	  которого нужно искать простые числа
	*/

	int* sieve = new int[maxNum*2 + 1];
	for (int i = 2; i <= maxNum*2; i++) {
		sieve[i] = i;
	}
	int k = 2;
	while(k*k < maxNum* 2) {
		for (int i = 2; i <= maxNum* 2; i++) {
			if (sieve[i] % k == 0 && sieve[i] >= 2 * k) {
				sieve[i] = 0;
			}
		}
		for (int i = 2; i <= maxNum* 2; i++) {
			if (sieve[i] > k) {
				k = sieve[i];
				break;
			}
		}
	}

	std::string sieveStr;
	for (int i = 2; i <= maxNum* 2; i++) {
		if (sieve[i] != 0) {
			sieveStr.append(to_string(sieve[i]));
		}
	}

	for (int i = 0; i < M; i++) {
		cout << sieveStr[arr[i] - 1];
	}

	return 0;
}
