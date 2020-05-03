#include <iostream>

using namespace std;

int getExtraArg(long long arg1, long long arg2, int arrSize) {
	int leftIndex;
	for (int k = 0; k < arrSize; k++) {
		if (k != arg1 && k != arg2) {
			leftIndex = k;
			break;
		}
	}
	return leftIndex;
}

string yesOrNo(long long arr[], int SIZE) {
	long long zeros = 0;
	// Делать пока в числе нету двух нулей
	while (zeros < 2) {
		for (int i = 0; i < SIZE; i++) {
			for (long long j = 0; j < SIZE; j++) {

				zeros = 0;
				for (int u = 0; u < SIZE; u++) if (arr[u] == 0) zeros++;

				// Мы берем 2 разные фишки, а не одинаковые
				if (i == j) continue;
				// Мы не можем отнять 1 фишку от нуля
				if (arr[i] == 0 || arr[j] == 0) continue;

				// От двух индексов (arr[i] arr[j]) отнять по 1
				// К третьему индексу прибавить 1
				// Третий индекc, это не i и не j индекс, а всего 3 индекса
				// Перебираем все индесы и находим тот, который не равен i и j

				int leftIndex = getExtraArg(i, j, SIZE);

				arr[leftIndex] += 1;
				arr[i] -= 1;
				arr[j] -= 1;

			}
		}
	}

	int s = 0;
	for (int v = 0; v < SIZE; v++) s += arr[v];
	if (s == 1) return "Yes";
	return "No";
}

int main()
{
	const int SIZE = 3;

	long long A, B, C;

	int N;

	cin >> N;

	long long** arr = new long long* [N];

	for (int i = 0; i < N; i++) {
		arr[i] = new long long[SIZE];
		for (int j = 0; j < SIZE; j++) cin >> arr[i][j];
	}

	for (int i = 0; i < N; i++) cout << yesOrNo(arr[i], SIZE) << endl;

	return 0;
}

