#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "russian");
    string numString;
    double num;
    double summ = 0;

    ifstream file("D:\\projects\\visual\\dz4\\01_File\\File.txt");
    if (file) {
        while (!file.eof()) {
            file >> numString;
            num = atof(numString.c_str());
            summ += num;
        }
        file.close();
    }
    
    cout << summ;
}

