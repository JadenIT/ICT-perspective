#include <iostream>
#include <vector>

using namespace std;

long long gcd_euclid(long long a, long long b) {
	while (a != 0 && b != 0) a > b ? a %= b : b %= a;
	return a + b;
}

bool find(vector<long long> arr, long long elToFind) {
	for (int i = 0; i < arr.size(); i++) if (arr[i] == elToFind) return true;
	return false;
}

int main()
{
	// Подмножество  чисел, чтобы их наибольший общий делитель = d.
	long long n, d, h = 0;

	vector<long long> arr, numsInH;

	cin >> n >> d;

	for (int i = 0; i < n; i++) {
		long long tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}

	for (int i = 0; i < arr.size(); i++) {
		for (int j = 0; j < arr.size(); j++) {

			if (i == j) continue;

			if (gcd_euclid(arr[i], arr[j]) == d) {

				bool completelyNew = false;

				if (!find(numsInH, arr[i])) {
					numsInH.push_back(arr[i]);
					h++;
				}

				if (!find(numsInH, arr[j])) {
					numsInH.push_back(arr[j]);
					h++;
				}
			}
		}
	}

	if (h == 0) {
		cout << -1;
		return 0;
	}

	cout << h << endl;
	for (int i = 0; i < numsInH.size(); i++) cout << numsInH[i] << " ";

	return 0;
}
