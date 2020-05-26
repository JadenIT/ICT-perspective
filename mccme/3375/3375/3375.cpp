#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int K;

	cin >> K;

	vector<int> arr = { };

	for (int i = 0; i < K - 1; i+=1) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}


	for (int g = 1; ; g++) {
		bool f = true;

		int i = 0;

		for (int N = 2; N <= K; N++) {
			if (g % N != arr[i]) {
				f = false;
				break;
			}
			i++;
		}

		if (f) {
			cout << g;
			return 0;
		}

	}

	return 0;
}
