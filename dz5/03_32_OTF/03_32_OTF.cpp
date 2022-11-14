#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Создание исходного файла
void createFile(string fileName) {
	ofstream file(fileName);
	file << "Hello World!" << endl;
	file.close();
}

// Чтение исходного файла
void readFile(string fileName) {
	ifstream file(fileName);
	string line;
	while (getline(file, line)) {
		cout << line << endl;
	}
	file.close();
}

int main()
{
	setlocale(LC_ALL, "russian");
	const int shift = 3;
	
	createFile("text.txt");
	cout << "Исходный файл:" << endl;
	readFile("text.txt");
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
