#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isEqual(double x, double y, double STEP) {
    return (x >= y - STEP && x <= y + STEP);
}

int main()
{
    setlocale(LC_ALL, "russian");
    string row;

    const double HEIGHT = 2.9;
    const double WIDTH = 11.9;
    const double STEP = 0.1;
    const double EPSILON = 0.05;

    for (double y = HEIGHT / 2; y >= -(HEIGHT / 2); y -= STEP) {
        row = "";
        for (double x = -(WIDTH / 2); x <= WIDTH / 2; x += STEP) {
            if (isEqual(y, 0, EPSILON) && isEqual(x, 0, EPSILON)) {
                row += "+";
            }
            else if (isEqual(x, 0, EPSILON)) {
                row += "|";
            }
            else if (isEqual(y, 0, EPSILON)) {
                row += "-";
            }
            else if (isEqual(sin(x), y, STEP)) {
                row += "#";
            }
            else {
                row += " ";
            }
        }
        
        cout << row << endl;
    }
}
