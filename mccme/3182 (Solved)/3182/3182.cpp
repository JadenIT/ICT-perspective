#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

	int n; // количество секторов колеса

	long long a, b; // начальная угловая скорость от a до b градусов в секунду.
	long long k; //  угловая скорость движения колеса уменьшается на k градусов в секунду
	long long biggest_sector = 0; // Наибольший цикл который на котором остановится стрелка

	vector<int> sectors = { }; // числа, записанные в секторах колеса
	cin >> n;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		sectors.push_back(tmp);
	}

	cin >> a >> b >> k;

	long long max_sector = *max_element(sectors.begin(), sectors.end()); // Максимально возможный сектор среди всех секторов

	for (long long i = a; i <= b; i += k) {

		long long current_sector_index_in_array = 0; // текущий индекс сектора в массиве sectors[0]

		/*int tmp = i;
		while (tmp > k) {
			current_sector_index_in_array++;
			tmp -= k;
		}*/

		// Улучшение вышенаписанного цикла
		current_sector_index_in_array %= n;
		if (i % k == 0) current_sector_index_in_array -= 1;
		current_sector_index_in_array += i / k;
		//

		// Сокращаем текущий сектор на количество секторов
		// например если всего 4 секторa, то 8, 12, 16... 
		// будут являться одним и тем же сектором
		current_sector_index_in_array %= n; 

		// Идем вправо сторону
		if (sectors[current_sector_index_in_array] > biggest_sector) biggest_sector = sectors[current_sector_index_in_array];

		// Идем влево сторону
		long long going_left_sector = 0;
		if (current_sector_index_in_array != 0) going_left_sector = n - current_sector_index_in_array;
		if (sectors[going_left_sector] > biggest_sector) biggest_sector = sectors[going_left_sector];

		// Если выпал максимально возможный сектор выходим заранее из цикла
		// Так как это максимально возможный сектор
		if (biggest_sector == max_sector) break; 
	}

	cout << biggest_sector;

	return 0;
}