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

    createFile("text.txt");
	cout << "Исходный файл:" << endl;
	readFile("text.txt");
	cout << "Обработанный файл:" << endl;
	
	// Обработка файла (преобразование в цепочку ASCII-кодов)
    ifstream file("text.txt");
    if (!file.is_open()) {
		cout << "Файл не найден!" << endl;
        return 0;
    }
    else {
        while (!file.eof()) {
			char ch = file.get();
			if ((int)ch >= 0)
			    cout << (int)ch << " ";
        }
        file.close();
    }
}
