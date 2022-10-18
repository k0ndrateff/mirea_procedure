#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    string row;
    
    for (int i = 0; i < 27; i++) {
        row = "";
        if (i % 2 != 0) {
            if (i < 12) {
                row = "* * * * * * * *";
                for (int j = 15; j < 100; j++) {
                    row += "#";
                }
            }
            else {
                for (int j = 0; j < 100; j++) {
                    row += "#";
                 }
            }
        }
        cout << row << endl;
    }
}
