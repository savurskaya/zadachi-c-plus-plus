//F25, 3 урок

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    int n;
    cout << "Введите вещественное число X (|X| < 1): ";
    cin >> x;
    cout << "Введите целое число N (> 0): ";
    cin >> n;

    double sum = 0;
    double term = x;
    for (int i = 1; i <= n; i++) {
        sum += term;
        term *= -x * (i + 1.0) / (i + 1.0);
    }

    double approx_ln = log(1 + x);
    cout << "Приближенное значение ln(1 + X) = " << sum << endl;
    cout << "Точное значение ln(1 + X) = " << approx_ln << endl;

    return 0;
}