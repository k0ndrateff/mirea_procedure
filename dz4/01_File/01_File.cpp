#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");

    //Запись
    string numberRow;
    string currentNumber;

    for (int i = 0; i < 10; i++) {
        cout << "Введите число №" << i + 1 << ": ";
        cin >> currentNumber;
        numberRow += currentNumber + " ";
    }

    ofstream ofile;
    ofile.open("File.txt");

    if (ofile.is_open()) {
        ofile << numberRow;
        ofile.close();
    }
    else {
        cout << "Не удалось открыть файл :(";
    }

    string numString;
    double num;
    double summ = 0;

    // Чтение
    ifstream file("File.txt");
    if (file) {
        while (!file.eof()) {
            file >> numString;
            num = atof(numString.c_str());
            summ += num;
        }
        file.close();
    }
    
    cout << summ;
}

