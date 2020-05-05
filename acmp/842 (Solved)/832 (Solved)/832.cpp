#include <iostream>

using namespace std;

/*
	Этот вариант тратит слишком много времени но он правильный
*/

//bool hasPeriod(long long int a, long long int N) {
//	vector<long long int> dividends;
//
//	while (a != 0) {
//		// Содержпт числа котрорые мы делим в столбик
//		// Например a = 1, b = 3
//		// 1 / 3, число которое мы делим это 1, кладем его в массив
//		dividends.push_back(a);
//
//		if (a == 0) return false;
//
//		a *= 10;
//		a %= N;
//
//		// Если (a) есть в (dividends) значит
//		// мы начинаем повторяться => есть период
//		auto result = find(dividends.begin(), dividends.end(), a);
//		if (result != dividends.end()) return true;
//	}
//}

bool hasPeriod(long long int a, long long int N) {
	while (N % 2 == 0) N /= 2;
	while (N % 5 == 0) N /= 5;
	if (N == 1) return false;
	return true;
}


int main()
{
	long long int N, a = 1;
	cin >> N;

	if (hasPeriod(a, N)) cout << "YES";
	else cout << "NO";

	return 0;
}
