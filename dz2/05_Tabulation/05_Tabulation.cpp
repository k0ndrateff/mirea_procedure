#include <iostream>
#include <cmath>

using namespace std;

float func(float x) {
    float y = (x * x - 2 * x + 2) / (x - 1);
    return y;
}

int main()
{
    setlocale(LC_ALL, "russian");
    for (float i = -4; i <= 4; i += 0.5) {
        if (i != 1) {
            cout << "x = " << i << " y = " << func(i) << "\n";
        }
        else {
            cout << "x = 1 Функция не определена.\n";
        }
    }
}
