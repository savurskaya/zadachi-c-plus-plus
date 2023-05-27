// самостоятельная работа 3 базовый номер 5.29г


#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите значение a (a ≤ b): ";
    cin >> a;
    cout << "Введите значение b: ";
    cin >> b;
    int sum = 0;
    for (int i = a; i <= b; i++) {
        sum += i;
    }
    double avg = (double)sum / (b - a + 1);
    cout << "Среднее арифметическое: " << avg << endl;
    return 0;
}