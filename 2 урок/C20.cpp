//Самостоятельная работа 2, С20

#include <iostream>
using namespace std;

int main() {
    int day, month;
    cout << "Введите день и месяц: ";
    cin >> day >> month;

    if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        cout << "Водолей" << endl;
    } else if ((month == 2 && day >= 19) || (month == 3 && day <= 20)) {
        cout << "Рыбы" << endl;
    } else if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        cout << "Овен" << endl;
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        cout << "Телец" << endl;
    } else if ((month == 5 && day >= 21) || (month == 6 && day <= 21)) {
        cout << "Близнецы" << endl;
    } else if ((month == 6 && day >= 22) || (month == 7 && day <= 22)) {
        cout << "Рак" << endl;
    } else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        cout << "Лев" << endl;
    } else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        cout << "Дева" << endl;
    } else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        cout << "Весы" << endl;
    } else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        cout << "Скорпион" << endl;
    } else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        cout << "Стрелец" << endl;
    } else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        cout << "Козерог" << endl;
    } else {
        cout << "Некорректная дата" << endl;
    }

    return 0;
}
