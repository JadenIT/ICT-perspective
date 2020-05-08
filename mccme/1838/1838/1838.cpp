#include <iostream>
#include <math.h>

using namespace std;

int gcd_euclid(int a, int b) {
	while (a != 0 && b != 0)a > b ? a %= b : b %= a;
	return b ? b : a;
}

int main()
{
	long long x1, y1, x2, y2;

	cin >> x1 >> y1 >> x2 >> y2;

	long long width, height;
	width = fabs(x2 - x1);
	height = fabs(y2 - y1);

	if (height == 0 || width == 0) {
		cout << 0;
		return 0;
	}

	long long rectangles = gcd_euclid(width, height);

	long long rect_w = width / rectangles;
	long long rect_h = height / rectangles;

	cout << (rect_w + rect_h - 1) * rectangles;

	return 0;
}

