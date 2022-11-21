#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	
	int baseCost, bladeCost, maxCost = 0;

	cout << "Введите стоимость основания: ";
	cin >> baseCost;
	cout << "Введите стоимость лопасти: ";
	cin >> bladeCost;
	cout << "Введите максимальную стоимость: ";
	cin >> maxCost;
	
	int maxBladesCost = maxCost - baseCost;
	int bladesCount = maxBladesCost / bladeCost;

	cout << "Максимальное количество лопастей: " << bladesCount << endl;
}

