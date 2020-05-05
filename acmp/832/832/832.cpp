#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

string cutStrFromDot(string str) {
	string p_3 = "";
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '.') {
			p_3 = str.substr(i + 1, str.length() - i + 1);
			break;
		}
	}
	return p_3;
}

//bool hasPeriod(long long N) {
//
//	// С учетом хранения типа float в памяти
//	// float не всегда равен другому float
//
//	// На 0 делить нельзя
//	if (N == 0) return false;
//
//	float p_1 = 1 / float(N);
//	string p_2 = to_string(p_1);
//
//	// p_3 будет являтсья p_2 начиная с точки и до конца
//	// например ищ 0.3333 получим 3333
//	string p_3 = cutStrFromDot(p_2);
//
//	// Домножаем получившиеся число на N и переводим в строку
//	float p_4 = stof(p_3) * float(N);
//	string p_5 = to_string(p_4);
//
//	// Находим количество единиц и наличие только нулей
//	long long ones = 0;
//	bool isOnlyZeros = true;
//
//	for (int i = 0; i < p_5.length(); i++) {
//		if (p_5[i] == '.') continue;
//		if (p_5[i] == '1') ones++;
//		else if (p_5[i] != '0') isOnlyZeros = false;
//	}
//
//	// Если получившиеся число имеет запись 1000...000
//	// значит оно не содержит периода, например если мы 
//	// домножим число 33333 на 3 (N) то получим 99999, значит оно 
//	// будет иметь период
//	if (N == 1) return false;
//	else if (ones != 1) return true;
//	else if (!isOnlyZeros) return true;
//	else return false;
//}

template <typename T>
std::string to_string_with_precision(const T a_value, const int n = 6)
{
	std::ostringstream out;
	out.precision(n);
	out << std::fixed << a_value;
	return out.str();
}

bool hasPeriod_v2(long long N) {
	if (N == 0) return false;

	double p_1 = 1 / double(N);

	string p_2 = to_string_with_precision(p_1, 1000);

	// Убираем последнии нули
	long long currentZeroIndex, prevZeroIndex;
	for (int i = p_2.length() - 1; i > 0; i--) {
		if (p_2[i] == '0') p_2.pop_back();
	}

	string p_3 = cutStrFromDot(p_2);
	// 0357142857142857123031731703122204635292291641235351

	// 03

	long long indexRange;
	for (int i = 0; i < p_3.length(); i++) {
		for (int j = 0; j < p_3.length(); j++) {
			
		}
	}
	return false;
}

int main()
{
	long long N;

	N = 13;

	cout << setprecision(1000);

	if (hasPeriod_v2(fabs(N))) cout << "YES";
	else cout << "NO";

	return 0;
}
