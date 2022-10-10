#include <iostream>

using namespace std;

int m = 37;
int a = 15;
int c = 64;

int getRandom(int s, int i, int current_i) {
    if (current_i == i) {
        return s;
    }
    else {
        return getRandom((a * s + c) % m, i, current_i + 1);
    }
}

int main()
{
    setlocale(LC_ALL, "russian");
    int s0 = 5;
    int i;

    cout << "Введите число i: ";
    cin >> i;

    cout << getRandom(s0, i, 0);
}


