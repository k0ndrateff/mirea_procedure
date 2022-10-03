#include <iostream>
#include <cmath>
#include <string>
#include <Windows.h>

using namespace std;


// Прямоугольник
int rectangle() {
    double a, b;

    cout << "Введите первую сторону прямоугольника: ";
    cin >> a;

    cout << "Введите вторую сторону прямоугольника: ";
    cin >> b;

    if (a * b < 0) {
        cout << "Введены некорректные значения.";
        return 0;
    }

    cout << "S = " << a << " * " << b << " = " << a * b;
}

// Треугольник
int triangle() {
    double b, h;

    cout << "Введите основание треугольника: ";
    cin >> b;

    cout << "Введите высоту треугольника: ";
    cin >> h;

    if (b * h < 0) {
        cout << "Введены некорректные значения.";
        return 0;
    }

    cout << "S = 1/2 * " << b << " * " << h << " = " << b * h / 2;
}

// Круг
int circle() {
    double r;

    cout << "Введите радиус круга: ";
    cin >> r;

    if (r < 0) {
        cout << "Введено некорректное значение.";
        return 0;
    }

    cout << "S = 3.14 * " << r << "^2 = " << 3.14 * r * r;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "russian");
    char operation;

    cout << "Выберите фигуру ([П]рямоугольник, [Т]реугольник, [К]руг): ";
    cin >> operation;

    if (operation == 'П') {
        rectangle();
    }
    else if (operation == 'Т') {
        triangle();
    }
    else if (operation == 'К') {
        circle();
    }
    else {
        cout << "Выбрана некорректная фигура.";
    }
}
