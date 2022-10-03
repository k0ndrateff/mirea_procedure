#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    double a, x, w;

    cout << "Введите a: ";
    cin >> a;
    cout << "Введите x: ";
    cin >> x;

    if (x == 0) {
        cout << "Неопределенность.";
    }
    else if (abs(x) < 1) {
        w = a * log(abs(x));
        cout << "w = " << w;
    }
    else {
        if (x * x <= a) {
            w = sqrt(a - x * x);
            cout << "w = " << w;
        }
        else {
            cout << "Невозможно вычислить корень из отрицательного числа.";
        }
    }
}

