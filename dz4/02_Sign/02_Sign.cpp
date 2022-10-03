#include <iostream>

using namespace std;

int sign(double x) {
    if (x > 0) {
        return 1;
    }
    else if (x < 0) {
        return -1;
    }
    else {
        return 0;
    }
}

int main()
{
    setlocale(LC_ALL, "russian");
    double num;

    cout << "Введите вещественное число: ";
    cin >> num;

    cout << sign(num);
}
