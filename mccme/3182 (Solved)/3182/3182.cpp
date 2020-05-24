#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

	int n; // количество секторов колеса

	long long a, b; // начальная угловая скорость от a до b градусов в секунду.
	long long k; //  угловая скорость движения колеса уменьшается на k градусов в секунду
	long long biggest_sector = 0;

	vector<int> sectors = { }; // числа, записанные в секторах колеса
	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		sectors.push_back(tmp);
	}

	cin >> a >> b >> k;

	long long max_sector = *max_element(sectors.begin(), sectors.end());

	for (long long i = a; i <= b; i += k) {

		long long current_sector_index_in_array = 0; // sectors[0]

		if (i % k == 0) current_sector_index_in_array -= 1;
		current_sector_index_in_array += i / k;

		current_sector_index_in_array %= n;

		// Идем вправо сторону
		if (sectors[current_sector_index_in_array] > biggest_sector) biggest_sector = sectors[current_sector_index_in_array];

		// Идем влево сторону
		long long going_left_sector = 0;
		if (current_sector_index_in_array != 0) going_left_sector = n - current_sector_index_in_array;
		if (sectors[going_left_sector] > biggest_sector) biggest_sector = sectors[going_left_sector];


		if (biggest_sector == max_sector) break;
	}

	cout << biggest_sector;

	return 0;
}