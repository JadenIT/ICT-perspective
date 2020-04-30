#include <iostream>

using namespace std;

int main()
{

	int n, m;

	cin >> n >> m;

	int red = 0;
	int green = 0;
	int blue = 0;
	int black = 0;

	for (int x = 1; x <= m; x++) {
		for (int y = 1; y <= n; y++) {
			int multuply = x * y;
			if (multuply % 5 == 0) {
				blue++;
			}
			else if (multuply % 3 == 0) {
				green++;
			}
			else if (multuply % 2 == 0) {
				red++;
			}
			else {
				black++;
			}
		}
	}

	cout << "RED : " << red << endl;
	cout << "GREEN  : " << green << endl;
	cout << "BLUE  : " << blue << endl;
	cout << "BLACK  : " << black << endl;

	return 0;
}

