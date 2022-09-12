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

    if (abs(x) < 1) {
        w = a * log(abs(x));
    }
    else {
        if (x * x <= a) {
            w = sqrt(a - x * x);
        }
        else {
            cout << "Невозможно вычислить корень из отрицательного числа.";
        }
    }

    cout << "w = " << w;
}

