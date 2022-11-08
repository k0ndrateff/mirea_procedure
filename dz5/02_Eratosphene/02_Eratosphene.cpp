#include <iostream>

using namespace std;

bool isPrime(unsigned int num) {
    for (int k = 2; k < num / 2 + 1; k++) {
        if (num % k == 0) {
            return false;
        }
    }
    return true;
}


int main()
{
    setlocale(LC_ALL, "russian");

    unsigned int num;

    cout << "Введите число: ";
    cin >> num;

    if (num < 2) {
        return 0;
    }

    for (int i = 3; i <= num; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}


