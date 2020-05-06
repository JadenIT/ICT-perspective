#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

	int a, b, c, d;

	cin >> a >> b >> c >> d;

	int frst = d;
	int scnd = b;

	a *= frst;
	b *= frst;

	c *= scnd;
	d *= scnd;

	int numerator = a + c;
	int denominator = b;
	// Найти НОД t и b
	int m = min(numerator, denominator);
	for (int i = m; i > 1; i--) {
		if (denominator % i == 0 && numerator % i == 0) {
			int GCD = i;
			numerator /= GCD;
			denominator /= GCD;
			cout << numerator << " " << denominator;
			return 0;
		}
	}
	cout << numerator << " " << denominator;


	return 0;
}
