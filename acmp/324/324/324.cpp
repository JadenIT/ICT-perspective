#include <iostream>
#include <string>

using namespace std;

int main()
{
	int N;

	cin >> N;

	string N_str = to_string(N);

	for (int i = 0; i < N_str.length() / 2; i++) {
		if (N_str[i] != N_str[N_str.length() - i - 1]) {
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}
