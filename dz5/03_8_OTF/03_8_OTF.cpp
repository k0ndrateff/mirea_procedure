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
    string text;

    cout << "Введите строку: ";
    cin >> text;
    createFile("text.txt", text);
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
