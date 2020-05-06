#include <iostream>

using namespace std;

int main()
{
	long long N;

	cin >> N;

	if (N == 1) cout << 1 << " " << 1;
	else if (N % 2 == 0) cout << N / 2 << " " << N / 2;
	else {
		//for (int i = 2; i < N; i++) {
		//	if (N % i == 0) {
		//		int d = i;
		//		for (int i = 1; i < N; i++) {
		//			//cout << i << endl;
		//			if (i % d == 0 && (N - i) % d == 0) {
		//				cout << i << " " << N - i;
		//				return 0;
		//			}
		//		}
		//	}
		//}

	}

	return 0;
}

