#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	int N = 0;
	int M = 0;
	int counter = 0;

	
	cout << "Введите N: ";
	cin >> N;
	cout << "Введите M: ";
	cin >> M;
	
	int size = N * M;
	
	for (int i = N; i > 0; i--) {
		for (int j = M; j > 0; j--) {
			counter += (N - i + 1) * (M - j + 1);
		}
	}

	cout << "Количество прямоугольников: " << counter << endl;
}
