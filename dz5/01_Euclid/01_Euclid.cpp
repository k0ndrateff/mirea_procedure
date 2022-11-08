#include <iostream>

using namespace std;


int countNOD(int a, int b) {
    while (a != 0 and b != 0) {
        if (a > b) {
            a = a % b;
        }
        else {
            b = b % a;
        }

    }
    return (a + b);
}


int main() {
    setlocale(LC_ALL, "russian");

    int a, b, nod;

    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;

    if ((a * b) < 0) {
        cout << "Некорректные числа";
        return 0;
    }

    cout << "НОД(a, b) = " << countNOD(a, b);
}

