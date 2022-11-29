#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    long long n, k;

    cout << "Введите N: ";
    cin >> n;
    cout << "Введите K: ";
    cin >> k;

    while (k != 1) {
        n = (n - k % 2) / 2;
        k /= 2;
    }

    cout << (n - 1) / 2 << endl << n / 2;
}
