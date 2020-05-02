/*
	Correct
*/

#include <iostream>

using namespace std;

int main()
{
	long long N, M, A, B;

	// N - этаж димы
	// M - этаж лифта
	// A - поднимается на 1 этаж пешком
	// B - поднимается на 1 этаж лфитом
	
	// По условию дима на 1 этаже

	cin >> N >> M >> A >> B;

	// t_1 время пока лфит спуститься на первый этаж
	long long t_1 = (M - 1) * B;
	
	// t_2 время пока лфит поднимется на N этаж 
	long long t_2 = (N - 1) * B;
	// t_3 общее время лифта
	long long t_3 = t_1 + t_2;

	// t_4 время пешком
	long long t_4 = (N - 1) * A;

	cout << t_4 << " " << t_3;

	return 0;
}
