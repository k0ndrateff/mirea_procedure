#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isEqual(double x, double y, double STEP) {
    if (sin(x) >= y - STEP && sin(x) <= y + STEP) {
        return true;
    }
    return false;
}

int main()
{
    setlocale(LC_ALL, "russian");
    string row;

    const double HEIGHT = 2.1;
    const double WIDTH = 11;
    const double STEP = 0.05;

    for (double y = HEIGHT / 2; y >= -(HEIGHT / 2); y -= STEP) {
        row = "";
        for (double x = -(WIDTH / 2); x <= WIDTH / 2; x += STEP) {
            if (x * y == 0) {
                row += "+";
            }
            else if (x == 0) {
                if (y == HEIGHT / 2) {
                    row += "^";
                }
                else {
                    row += "|";
                }
            }
            else if (y == 0) {
                if (x == WIDTH / 2) {
                    row += ">";
                }
                else {
                    row += "-";
                }
            }
            else {
                if (isEqual(x, y, STEP)) {
                    row += "#";
                }
                else {
                    row += " ";
                }
            }
        }
        
        cout << row << endl;
    }
}
