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
	int k, c = 0, c_2 = 0, i = 2;

	cin >> k;

	while (c_2 <= k) {
		if (isSimple(i)) {
			c++; // Amount of simple nums from 2 to K
			if (isSimple(c) && c >= 2) {
				c_2++; // Amount of simple positions nums of nums from 2 to K
				if (c_2 == k) {
					cout << i;
					return 0;
				}
			}
		}
		i++;
	}


	return 0;
}
