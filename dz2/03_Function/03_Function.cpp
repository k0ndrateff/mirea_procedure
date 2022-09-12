#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    double x, y, b;

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите b: ";
    cin >> b;

    if (b - y > 0 && b - x >= 0) {
        cout << "z = " << log(b - y) * sqrt(b - x);
    }
    else {
        cout << "Функция не определена в данной точке.";
    }
}
