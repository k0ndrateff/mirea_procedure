#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    
	const int A[3][4] = {
		{5, 2, 0, 10},
		{3, 5, 2, 5},
		{20, 0, 0, 0}
	};

	const double B[4][2] = {
		{1.0, 0.5},
		{2.8, 0.4},
		{5.0, 1.0},
		{2.0, 1.5}
	};

	double C[4][2];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			C[i][j] = 0;
			for (int k = 0; k < 4; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	// Кто получил больше и меньше денег
	double maxProfit = -1, minProfit = 1000000;
	int maxSeller = 0, minSeller = 0;
	for (int i = 0; i < 3; i++) {
		if (C[i][0] > maxProfit) {
			maxProfit = C[i][0];
			maxSeller = i;
		}
		if (C[i][0] < minProfit) {
			minProfit = C[i][0];
			minSeller = i;
		}
	}
	
	// Кто получил какие комиссионные
	double maxCommission = -1, minCommission = 1000000;
	int maxComissioner = 0, minComissioner = 0;
	for (int i = 0; i < 3; i++) {
		if (C[i][1] > maxCommission) {
			maxCommission = C[i][1];
			maxComissioner = i;
		}
		if (C[i][1] < minCommission) {
			minCommission = C[i][1];
			minComissioner = i;
		}
	}
	
	// Общая сумма продаж
	double totalProfit = 0;
	for (int i = 0; i < 3; i++) {
		totalProfit += C[i][0];
	}
	
	// Общая сумма комиссионных
	double totalCommission = 0;
	for (int i = 0; i < 3; i++) {
		totalCommission += C[i][1];
	}
	
	// Общая сумма всех денег
	double totalMoney = totalProfit + totalCommission;

	cout << "Продавец " << maxSeller + 1 << " получил больше всего денег: " << maxProfit << endl;
	cout << "Продавец " << minSeller + 1 << " получил меньше всего денег: " << minProfit << endl;
	cout << "Продавец " << maxComissioner + 1 << " получил больше всего комиссионных: " << maxCommission << endl;
	cout << "Продавец " << minComissioner + 1 << " получил меньше всего комиссионных: " << minCommission << endl;
	cout << "Общая сумма продаж: " << totalProfit << endl;
	cout << "Общая сумма комиссионных: " << totalCommission << endl;
	cout << "Общая сумма всех денег: " << totalMoney << endl;

	return 0;
}
