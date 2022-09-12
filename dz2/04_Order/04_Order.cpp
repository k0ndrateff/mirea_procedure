#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    int N;

    cout << "Введите произвольное число N: ";
    cin >> N;

    for (int i = 0; i < 10; i++) {
        cout << N + i << "\n";
    }
}

