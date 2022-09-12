#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    double h, R, r, l, V, S;
    const float PI = 3.14159;

    cout << "Введите высоту усеченного конуса: ";
    cin >> h;
    cout << "Введите радиус большего основания усеченного конуса: ";
    cin >> R;
    cout << "Введите радиус меньшего основания усеченного конуса: ";
    cin >> r;
    cout << "Введите длину границы основания усеченного конуса: ";
    cin >> l;

    V = (PI * h * (R * R + R * r + r * r)) / 3;
    S = PI * (R * R + (R + r) * l + r * r);

    cout << "Объем усеченного конуса: " << V << "\n";
    cout << "Площадь поверхности усеченного конуса: " << S << "\n";
}

