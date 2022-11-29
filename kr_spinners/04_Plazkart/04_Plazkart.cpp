#include <iostream>
#include <algorithm>

using namespace std;

int computeCoupe(int place) {
	if (place <= 36) {
		return (int)(place - 1) / 4;
	}
	else {
		return (int)8 - (place - 37) / 2;
	}
}

int main()
{
	setlocale(LC_ALL, "russian");

	int freeSpaces[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	int n = 0;
	int answer = 0;
	int current = 0;

	
	cout << "Введите количество свободных мест: ";
	cin >> n;
	
	int freePlace;
	for (int i = 0; i < n; i++) {
		cin >> freePlace;
		freeSpaces[computeCoupe(freePlace)]++;
	}

	for (int i = 0; i < 9; i++) {
		if (freeSpaces[i] == 6) {
			current++;
			answer = max(answer, current);
		}
		else {
			current = 0;
		}
	}

	cout << answer << endl;
}
