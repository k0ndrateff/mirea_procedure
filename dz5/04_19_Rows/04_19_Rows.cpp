#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	
	vector<int> heights;
	int height;

	cout << "/**** Анализ роста учеников ***" << endl << "Введите рост (см) и нажмите <Enter>." << endl << "Для завершения введите 0 и нажмите <Enter>." << endl;

	do {
		cout << "-> ";
		cin >> height;
		heights.push_back(height);
	} while (height != 0);
	heights.pop_back();

	int elems = heights.size();
	int summ = accumulate(heights.begin(), heights.end(), 0);
	double average = summ / elems;
	int more_than_average = 0;
	
	for (auto i : heights) {
		if (i > average) {
			more_than_average++;
		}
	}
	
	cout << "Средний рост: " << average << " см." << endl;
	cout << "У " << more_than_average << " учеников рост выше среднего. */" << endl;
}

