#include <iostream>
#include <string>

using namespace std;

string reverse_str(string str) {
	string reversed_s = "";
	for (int i = str.length() - 1; i >= 0; i--) reversed_s += str[i];
	return reversed_s;
}

string decimal_to_binary(int num) {
	string s = "";
	while (num > 1) {
		s += to_string(num % 2);
		num /= 2;
	}
	s += to_string(num);
	return reverse_str(s);
}

bool string_consists_of_ones(string str) {
	for (int i = 0; i < str.length(); i++) if (str[i] != '1') return false;
	return true;
}

long long factorial(long long num) {
	long long s = 1;
	if (num == 0) return 1;
	for (long long i = 1; i <= num; i++) s *= i;
	return s;
}

bool string_contains_n_zeros(string str, long long n) {
	long long s = 0;
	for (long long i = 0; i < str.length(); i++) if (str[i] == '0') s++;
	if (s == n) return true;
	return false;
}

long long from_binary_to_decimal(string num) {
	long long s = 0;
	for (long long i = 0; i < num.length(); i++) {
		s += stoi(to_string(num[i] - '0')) * pow(2, num.length() - 1 - i);
	}
	return s;
}

int main() {

	long long N, K;

	cin >> N >> K;

	long long ans = 0;

	string binary_str = decimal_to_binary(N);

	string binary_str_ones = "";
	for (long long i = 0; i < binary_str.length() - 1; i++) binary_str_ones += "1";

	long long length = binary_str_ones.length();

	while (length > K) {
		ans += factorial(length - 1) / (factorial(K) * factorial(length - 1 - K));
		length -= 1;
	}

	long long decimal = from_binary_to_decimal(binary_str_ones);

	while (decimal <= N) {
		binary_str = decimal_to_binary(decimal);
		if (string_contains_n_zeros(binary_str, K)) ans++;
		decimal++;
	}

	cout << ans;

	return 0;
}