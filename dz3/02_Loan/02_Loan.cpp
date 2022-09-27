#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    double monthly, summ, r, years, m1, k;

    cout << "Введите сумму займа: ";
    cin >> summ;
    cout << "Введите срок займа в годах: ";
    cin >> years;
    cout << "Введите месячную выплату: ";
    cin >> monthly;

    for (double i = 1; i < 10000; i += 0.00001) {
        r = i / 100;
        m1 = (summ * r * pow(1 + r, years)) / (12 * (pow(1 + r, years) - 1));
        k = abs(m1 - monthly);
        if (k < 0.01) {
            cout << "Процент: " << round(i);
            break;
        }
    }

    
}

