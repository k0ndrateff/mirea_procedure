 #include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    double monthly, summ, r, years, procent;

    cout << "Введите сумму займа: ";
    cin >> summ;
    cout << "Введите срок займа в годах: ";
    cin >> years;
    cout << "Введите годовой процент займа: ";
    cin >> procent;

    if (years <= 0 || summ <= 0) {
        cout << "Некорректные значения.";
        return 0;
    }

    r = procent / 100;
    monthly = (summ * r * pow(1 + r, years)) / (12 * (pow(1 + r, years) - 1));
    cout << "Месячная выплата: " << monthly;
}

