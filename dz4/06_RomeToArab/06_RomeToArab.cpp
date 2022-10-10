#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    string rome;
    int arab = 0;

    cout << "Введите число в римской системе счисления: ";
    cin >> rome;

    for (int i = 0; i < rome.length(); i++) {
        if (rome[i] == 'M') {
            arab += 1000;
        }
        else if (rome[i] == 'D') {
            arab += 500;
        }
        else if (rome[i] == 'C') {
            if (rome[i + 1] == 'M') {
                arab += 900;
                i++;
            }
            else if (rome[i + 1] == 'D') {
                arab += 400;
                i++;
            }
            else {
                arab += 100;
            }
        }
        else if (rome[i] == 'L') {
            arab += 50;
        }
        else if (rome[i] == 'X') {
            if (rome[i + 1] == 'C') {
                arab += 90;
                i++;
            }
            else if (rome[i + 1] == 'L') {
                arab += 40;
                i++;
            }
            else {
                arab += 10;
            }
        }
        else if (rome[i] == 'V') {
            arab += 5;
        }
        else if (rome[i] == 'I') {
            if (rome[i + 1] == 'X') {
                arab += 9;
                i++;
            }
            else if (rome[i + 1] == 'V') {
                arab += 4;
                i++;
            }
            else {
                arab += 1;
            }
        }
        else {
            cout << "Некорректный ввод.";
            return 0;
        }
    }

    cout << arab;
}
