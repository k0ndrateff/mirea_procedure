#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	int blades = 0;
	int spinners3 = 0;
	int spinners4 = 0;
	
	cout << "Введите количество лопастей: ";
	cin >> blades;

	while (blades % 4 != 0 && blades >= 3)
	{
		blades -= 3;
		spinners3++;
	}
	
	spinners4 = blades / 4;

	cout << "Количество трёхлопастных: " << spinners3 << endl;
	cout << "Количество четырёхлопастных: " << spinners4 << endl;
}
