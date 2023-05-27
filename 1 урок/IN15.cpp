// сам.баз 1 in15
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Введите трехзначное число: ";
    cin >> num;

    int hundreds = num / 100;   // сотни
    int tens = num / 10 % 10;   // десятки
    int ones = num % 10;        // единицы

    int newNum = tens * 100 + hundreds * 10 + ones;   // переставляем сотни и десятки

    cout << "Результат: " << newNum << endl;

    return 0;
}