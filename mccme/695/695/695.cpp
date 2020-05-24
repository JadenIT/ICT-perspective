#include<iostream>

using namespace std;

bool residue(int x, int n, int k) {
	int d = 0;
	while (n > 0) {
		while ((d < k) && (n > 0)) {
			d = 10 * d + x;
			n--;
		}
		// cout << "d = " << d << " New d = ";
		d = d % k;
		// cout << d << " n = " << n << endl;
	}
	return true ? d == 0 : false;
}
int main() {

	int k;

	cin >> k;

	bool l = false;

	for (int n = 1; n <= 1500; n++) {
		for (int x = 1; x <= 9; x++) {
			if (residue(x, n, k)) {
				cout << x << " " << n << endl;
				l = true;
				break;
			}
		}

	}

	if (!l) 	cout << "Impossible" << endl;

	return 0;
}