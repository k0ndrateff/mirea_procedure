#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    double N;

    cout << "Введите произвольное число N: ";
    cin >> N;

    if (int(N) != N) {
        N = int(N) + 1;
    }
    else if (N <= 0) {
        N = 1;
    }

    for (int i = 0; i < 10; i++) {
        cout << N + i << "\n";
    }
}

