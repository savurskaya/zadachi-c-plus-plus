// самостоятельная работа 3 базовый номер 5.29в


#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Введите значение a (a <= 200): ";
    cin >> a;
    int sum = 0;
    for (int i = a; i <= 200; i++) {
        sum += i;
    }
    double avg = (double)sum / (201 - a);
    cout << "Среднее арифметическое: " << avg << endl;
    return 0;
}