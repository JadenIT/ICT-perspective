#include <iostream>
#include <vector>
#include <thread>

using namespace std;

int gcd_euclid(int a, int b) {
	while (a != 0 && b != 0) a > b ? a %= b : b %= a;
	return a + b;
}

int main()
{
	int N;

	cin >> N;

	// min and max
	vector<vector<int>>arr;

	

	for (int i = N; i > 0; i--) {
		for (int j = 1; j <= N - 1; j++) {
			if (j >= i) continue;
			if (gcd_euclid(i, j) == 1) {
				arr.push_back({ j, i });
			}
		}
	}


	/*for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr.size() - 1; j++) {
			float k1 = float(arr[j][0]) / arr[j][1];
			float k2 = float(arr[j + 1][0]) / arr[j + 1][1];

			if (k1 > k2) {
				vector<int> tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}*/

	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i][0] << "/" << arr[i][1] << endl;
	}


	return 0;
}
