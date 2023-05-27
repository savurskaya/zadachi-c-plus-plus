//Самостоятельная работа 1 базовая (г)

#include <iostream>

using namespace std;

int main() {

double a;

cout << "Введите вещественное число a: ";

cin >> a;

// г) a^8 за три операции

double a2 = a * a;

double a4 = a2 * a2;

double a8 = a4 * a4;

cout << "a^8 = " << a8 << endl;

return 0;

}