#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    string line;

    ifstream file("C:\\Users\\ivc6-10\\source\\repos\\mirea_procedure\\dz3\\03_FileCopy\\File.txt");
    if (file) {
        while (getline(file, line)) {
            cout << line << endl;
        }
    }
    else {
        cout << "Файл не существует.";
    }
}

