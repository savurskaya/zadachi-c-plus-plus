// самостоятельная работа номер 3 базовый номер 5.30г


#include <iostream>
using namespace std;

int main() {
    int a, b, sum = 0;
    cout << "Введите значение a: ";
    cin >> a;
    cout << "Введите значение b (b >= a): ";
    cin >> b;
    for (int i = a; i <= b; i++) {
        sum += i * i;
    }
    cout << "Сумма квадратов всех целых чисел от " << a << " до " << b << ": " << sum << endl;
    return 0;
}