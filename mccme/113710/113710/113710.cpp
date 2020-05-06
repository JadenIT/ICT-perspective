#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	long long a, b, n, s = 0;

	cin >> a >> b >> n;

	//for (long long i = a; i <= n; i += a) arr_a.push_back(i);
	//for (long long i = b; i <= n; i += b) arr_b.push_back(i);

	//long long size;

	//for (long long i = 0; i < arr_a.size(); i++) {
	//	auto res = find(arr_b.begin(), arr_b.end(), arr_a[i]);
	//	if (res != arr_b.end()) {
	//		s++;
	//	}
	//}
	int maxNum = max(a, b);

	for (int i = maxNum - 1; i > 1; i--) {

	}

	cout << n - s;

	return 0;
}
