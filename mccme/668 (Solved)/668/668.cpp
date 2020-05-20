#include <iostream>
#include <vector>

long long gcd(long long a, long long b) {
	while (a != 0 && b != 0) a > b ? a %= b : b %= a;
	return a + b;
}

using namespace std;

int main()
{

	long long n;

	vector<vector<long long>> crdts;

	cin >> n;

	for (int i = 0; i < n; i++) {
		long long x, y;
		cin >> x >> y;
		crdts.push_back({ x, y });
	}
	long long points = 0;
	long long a, b;
	for (int i = 0; i < crdts.size() - 1; i++) {
		a = abs(crdts[i][0] - crdts[i + 1][0]);
		b = abs(crdts[i][1] - crdts[i + 1][1]);
		points += gcd(a, b) - 1;
	}

	a = abs(crdts[crdts.size() - 1][0] - crdts[0][0]);
	b = abs(crdts[crdts.size() - 1][1] - crdts[0][1]);
	points += gcd(a, b) - 1;

	cout << points + n << endl;

	return 0;
}
