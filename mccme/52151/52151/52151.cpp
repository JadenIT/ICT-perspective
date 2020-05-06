/*
Даны две рациональные дроби: a/b и c/d. Сложите их и результат представьте в виде несократимой дроби m/n.

Входные данные
Программа получает на вход 4 натуральных числа a, b, c, d, не превосходящих 100.

Выходные данные
Программа должна вывести 2 натуральных числа m и n такие, что m/n=a/b+c/d и дробь m/n – несократима.
*/

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
