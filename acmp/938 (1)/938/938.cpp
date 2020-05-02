#include <iostream>

using namespace std;

bool isSimple(int num) {
	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) return false;
	}
	return true;
}

int main()
{
	int numWithMaxDividers = 0, maxDividers = 0, s, n;
	cin >> n;

	int* arr = new int[n];

	for (int i = 0; i < n; i++) cin >> arr[i];

	for (int i = 0; i < n; i++) {
		s = 0;
		for (int x = 2; x <= arr[i]; x++) {
			if (isSimple(x) && arr[i] % x == 0) s++;
		}

		if (s > maxDividers) {
			maxDividers = s;
			numWithMaxDividers = arr[i];
		}
		else if (s == maxDividers) {
			if (arr[i] < numWithMaxDividers) {
				maxDividers = s;
				numWithMaxDividers = arr[i];
			}
		}
	}

	cout << numWithMaxDividers;

	return 0;
}
