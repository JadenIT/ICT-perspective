#include <iostream>

using namespace std;

void printArr(long long arr[], int SIZE) {
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

long long f1(long long arr[]) {
	arr[0] -= 1;
	arr[1] -= 1;
	arr[2] += 1;
	return arr;
}

long long** f(long long arr[], int SIZE) {
	long long** tmpArr = new long long* [SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i][0] = { 1 };
		/*if (arr[0] != 0 && arr[1] != 0) {
			arr[i] = { arr[0] - 1, arr[1] - 1, arr[2] + 1 };
		}*/

	}
	return tmpArr;
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

	f(*arr, N);

	return 0;
}
