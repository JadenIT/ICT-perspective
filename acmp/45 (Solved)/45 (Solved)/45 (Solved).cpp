#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	long long N;

	cin >> N;

	if (N == 0)
	{
		cout << "10";
		return 0;
	}
	else if (N == 1)
	{
		cout << "1";
		return 0;
	}


	vector<int> arr;

	for (int i = 9; i > 1; i--)
	{
		while (N % i == 0)
		{
			N /= i;
			arr.push_back(i);
		}
	}

	if (N != 1)
	{
		cout << "-1";
		return 0;
	}

	if (arr.size() > 0)
	{
		sort(arr.begin(), arr.end());
		string tmp = "";
		for (long long i = 0; i < arr.size(); i++) tmp += to_string(arr[i]);
		cout << tmp;
	}

	else cout << "-1";

	return 0;
}
