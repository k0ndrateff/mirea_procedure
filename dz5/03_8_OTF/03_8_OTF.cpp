#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    string line;

    ifstream file("text.txt");

    if (!file.is_open()) {
        return 0;
    }
    else {
        while (!file.eof()) {
            line << getline()
        }
        file.close();
    }
}
