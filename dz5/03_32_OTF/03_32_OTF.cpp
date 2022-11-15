#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Создание исходного файла
void createFile(string fileName, string text) {
	ofstream file(fileName);
	file << text << endl;
	file.close();
}

int main()
{
	setlocale(LC_ALL, "russian");
	const int shift = 3;
	string text;
	
	cout << "Введите строку: ";
	cin >> text;
	createFile("text.txt", text);
	cout << "Зашифрованный файл:" << endl;

	// Обработка файла (Шифрование сдвигом)
	ifstream file("text.txt");
	if (!file.is_open()) {
		cout << "Файл не найден!" << endl;
		return 0;
	}
	else {
		while (!file.eof()) {
			char ch = file.get();
			if ((int)ch >= 65 && (int)ch <= 90)
				cout << (char)(((int)ch + shift) % 65 + 65);
			else if ((int)ch >= 97 && (int)ch <= 122)
				cout << (char)(((int)ch + shift) % 97 + 97);
			else
				cout << " ";
		}
		file.close();
	}
}
