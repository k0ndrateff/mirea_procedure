#include <iostream>
#include <string>

using namespace std;

const char *symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int convertToDec(const char* string, unsigned int base) {
    int result = 0;
    size_t numLength = strlen(string);
    //TODO: Проверки на легальность числа

    for (int i = numLength - 1, counter = 0; i >= 0; --i, ++counter) {
        size_t digit = strchr(symbols, string[i]) - symbols;
        result += digit * pow(base, counter);
    }

    return result;
}

char* convertDecToAny() {

}

int main()
{
    
}

