#include <iostream>

using namespace std;

int main()
{
	int P, K, S, sum;

	cin >> sum;

	for (int i = 1; i < sum; i++) {
		P = S = i;
		K = sum - P - S;

		if (2 * (P + S) == K) {
			cout << P << " " << K << " " << S;
			break;
		}
	}

	return 0;
}
