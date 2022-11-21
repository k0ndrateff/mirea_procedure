#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Country {
    int id = 0;
    int bronze, silver, gold = 0;
    int getScore() {
        return bronze * 5 + silver * 6 + gold * 7;
    }
};

void sortCountries(Country* countries, int numCountries) {
    for (int i = 0; i < numCountries; i++) {
        for (int j = 0; j < numCountries - 1; j++) {
            if (countries[j].getScore() < countries[j + 1].getScore()) {
                Country temp = countries[j];
                countries[j] = countries[j + 1];
                countries[j + 1] = temp;
            }
        }
    }
}

int main()
{
    setlocale(LC_ALL, "russian");
    const int numCountries = 10;
    const string countryNames[numCountries] = {"Австрия", "Германия", "Канада", "Китай", "Корея", "Норвегия", "Россия", "США", "Финляндия", "Япония"};
    cout << "/*** Подведение итогов Олимпийских игр ***" << endl << "Введите через пробел количество золотых, серебряных и бронзовых медалей" << endl;

    Country* countries = new Country[numCountries];

    for (int i = 0; i < numCountries; i++) {
        countries[i].id = i;
        cout << countryNames[i] << "--> ";
        cin >> countries[i].gold >> countries[i].silver >> countries[i].bronze;
    }

    sortCountries(countries, numCountries);

    ofstream file("olympic.txt");
    if (!file.is_open()) {
        cout << "Ошибка при записи файла.";
        return 0;
    }

    for (int i = 0; i < numCountries; i++) {
        file << countryNames[countries[i].id] << "\n" << countries[i].getScore() << "\n";
    }
    file.close();

    char choose;
    cout << "Вы хотите показать отсортированный список cтран-участниц? [Y/N]: ";
    cin >> choose;
    if (choose == 'Y') {
        for (int i = 0; i < numCountries; i++) {
            cout << countryNames[countries[i].id] << "--> Балл: " << countries[i].getScore() << endl;
        }
    }
}