#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

const char *symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

bool isLegal(const char* string, unsigned int base) {
    size_t numLength = strlen(string);
    for (int i = 0; i < numLength; i++) {
        size_t digit = strchr(symbols, string[i]) - symbols;
        if (digit >= base)
            return false;
    }
    return true;
}


long int convertToDec(const char* string, unsigned int base) {
    long int result = 0;
    size_t numLength = strlen(string);

    for (int i = numLength - 1, counter = 0; i >= 0; --i, ++counter) {
        size_t digit = strchr(symbols, string[i]) - symbols;
        result += digit * pow(base, counter);
    }

    return result;
}



string convertDecToAny(long int num, unsigned int base) {
    string result = "";
    while (num > 0) {
        result += symbols[num % base];
        num /= base;
    }

    return result;
}



int main() {
    setlocale(LC_ALL, "russian");
    long int result;
    unsigned int start_base, end_base;
    char num[20];

    cout << "Введите исходное число: ";
    cin >> num;
    cout << "Введите исходную систему счисления: ";
    cin >> start_base;
    cout << "Введите конечную систему счисления: ";
    cin >> end_base;

    if (!isLegal(num, start_base)) {
        cout << "Введено некорректное число.";
        return 0;
    }

    result = convertToDec(num, start_base);

    if (end_base == 10)
        cout << result;
    else
        cout << convertDecToAny(result, end_base);
}

