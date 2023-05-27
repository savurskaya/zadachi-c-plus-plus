//Самостоятельная работа 2, С19

#include <iostream>
using namespace std;

int main() {
    string colors[] = {"зеленый", "красный", "желтый", "белый", "черный"};
    string animals[] = {"крысы", "коровы", "тигра", "зайца", "дракона", "змеи", "лошади", "овцы", "обезьяны", "курицы", "собаки", "свиньи"};

    int year;
    cout << "Введите год: ";
    cin >> year;

    int start_year = 1984;
    int cycle_length = 60;
    int color_index = (year - start_year) % cycle_length / 12;
    int animal_index = (year - start_year) % 12;

    cout << "Год " << year << " - это год " << colors[color_index] << " " << animals[animal_index] << endl;

    return 0;
}
