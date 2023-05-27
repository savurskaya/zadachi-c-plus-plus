//самостоятельная работа номер 3 базовый номер 5.29б


#include <iostream>
using namespace std;

int main() {
    int b;
    cout << "Введите значение b (b >= 100): ";
    cin >> b;
    int sum = 0;
    for (int i = 100; i <= b; i++) {
        sum += i;
    }
    double avg = (double)sum / (b - 99);
    cout << "Среднее арифметическое: " << avg << endl;
    return 0;
}