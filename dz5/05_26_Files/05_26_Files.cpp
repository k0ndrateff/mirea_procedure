#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Student {
    int id = NULL;
    string FIO = "";
    int marks[5] = {2, 2, 2, 2, 2};
    double getAverage() {
        return (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
    }
};

void sortStudents(Student *students, int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents; j++) {
            if (students[j].getAverage() < students[j + 1].getAverage())
                swap(students[j], students[j + 1]);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "russian");
    int numStudents;
    string surname, name, last_name;

    cout << "/*** Учет студентов ***" << endl << "Введите количество студентов: ";
    cin >> numStudents;

    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Студент " << i + 1 << endl << "Введите номер зачетной книжки: ";
        cin >> students[i].id;
        cout << "Введите ФИО: ";
        cin >> surname >> name >> last_name;
        students[i].FIO = surname + " " + name + " " + last_name;
        for (int k = 0; k < 5; k++) {
            cout << "Введите оценку " << k + 1 << ": ";
            cin >> students[i].marks[k];
        }

        
    }

    sortStudents(students, numStudents);

    ofstream file("students.txt");
    if (!file.is_open()) {
        cout << "Ошибка при записи файла.";
        return 0;
    }
    
    for (int i = 0; i < numStudents; i++) {
        file << students[i].id << "\n" << students[i].FIO << "\n" << students[i].getAverage() << "\n";
    }
    file.close();

    char choose;
    cout << "Вы хотите показать отсортированный список студентов? [Y/N]: ";
    cin >> choose;
    if (choose == 'Y') {
        for (int i = 0; i < numStudents; i++) {
            cout << "Студент №" << i + 1 << endl << "Зачетная книжка №" << students[i].id << endl << students[i].FIO << endl << "Средний балл: " << students[i].getAverage() << endl;
        }
    }
}

