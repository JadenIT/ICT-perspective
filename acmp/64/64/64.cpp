/*
	Correct
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, pos = 0, max = 0;

	cin >> n;

	int* arr = new int[n];

	std::string str;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > max) max = arr[i];
	}

	for (int i = 2; i < max * max; i++) {
		if (str.length() > max) break;
		int isSimple = true;

		for (int x = 2; x < i; x++) {
			if (i % x == 0) {
				isSimple = false;
				break;
			}
		}
		if (isSimple) str.append(to_string(i));
	}

	for (int i = 0; i < n; i++) cout << str[arr[i] - 1];

	return 0;
}