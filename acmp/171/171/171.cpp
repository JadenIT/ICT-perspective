#include <iostream>

using namespace std;

int main()
{
	long long int x;

	int s = 0;
	int j = 1;
	cin >> x;

	for (long long int i = 2; i <= x; i++) {
		while (x % i == 0) {
			x /= i;
			s++;
		}
		s++;
		j *= s;
		s = 0;
	}

	cout << j;

	return 0;
}
