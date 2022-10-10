#include <iostream>

using namespace std;

bool check_existance(long int number, int system) {
	int digit = 0;
	while (number > 0) {
		digit = number % 10;
		if (digit >= system) {
			return false;
		}
		number /= 10;
	}
	return true;
}

long int convert_to_decimal(long int number, int system) {
	long int decimal = 0;
	int digit = 0;
	int power = 0;
	while (number > 0) {
		digit = number % 10;
		decimal += digit * pow(system, power);
		power++;
		number /= 10;
	}
	return decimal;
}

int main()
{
	setlocale(LC_ALL, "russian");

	int start_system, end_system;
	long int number;
	
	cout << "Введите систему счисления, в которой записано число: ";
	cin >> start_system;
	cout << "Введите систему счисления, в которую необходимо перевести число: ";
	cin >> end_system;
	cout << "Введите число: ";
	cin >> number;
	
	if (!check_existance(number, start_system)) {
		cout << "Введенное число не может быть записано в системе счисления " << start_system << endl;
		return 0;
	}
	
	if (start_system)
}

