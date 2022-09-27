#include <iostream>
#include <string>


using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");

    string start = "qwertyuioplkjhgfdsazxcvbnmhtfi";

    for (int i = 0; i < 30; i++) {
        for (int j = i + 1; j < 30; j++) {
            if (start[i] > start[j]) {
                swap(start[i], start[j]);
            }
        }
    }

    cout << start;
}

