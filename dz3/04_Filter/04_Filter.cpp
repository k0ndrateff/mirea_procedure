#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    string line;
    string filtered_line = "";
    bool flag = false;

    ifstream file("C:\\Users\\ivc6-10\\source\\repos\\mirea_procedure\\dz3\\04_Filter\\File.txt");
    if (file) {
        while (getline(file, line)) {
            for (int i = 0; i < size(line); i++) {
                if (line[i] >= 48 && line[i] <= 57) {
                    filtered_line += line[i];
                    flag = true;
                }
                else if (flag) {
                    filtered_line += " ";
                    flag = false;
                }
            }
            if (size(filtered_line) > 0) {
                filtered_line += " ";
            }
        }

        if (size(filtered_line) > 0) {
            cout << filtered_line;
        }
        else {
            cout << "В файле чисел не обнаружено.";
        }

    }
    else {
        cout << "Файл не существует.";
    }
}

