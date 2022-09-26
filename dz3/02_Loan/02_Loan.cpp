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
    cout << "Введите месячную выплату: ";
    cin >> monthly;

    if (monthly > 0) {
        for (int procent = 0; procent < 10000; procent++) {
            r = procent / 100;
            if (monthly >= (summ * r * pow(1 + r, years)) / (12 * (pow(1 + r, years) - 1))) {
                cout << "Процент: " << procent;
                break;
            }
        }
    }
    else {
        for (int procent = -1; procent > -10000; procent--) {
            r = procent / 100;
            if (monthly <= (summ * r * pow(1 + r, years)) / (12 * (pow(1 + r, years) - 1))) {
                cout << "Процент: " << procent;
                break;
            }
        }
    }

    
}

