//F23, 3 уроки

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    int n;
    cout << "Введите x и n: ";
    cin >> x >> n;
    double result = 0;
    double term = x; 
    for (int i = 1; i <= n; i++) {
        result += term;
        term *= -1 * x * x / (2 * i) / (2 * i + 1);
    }
    cout << "Приближенное значение sin(" << x << ") = " << result << endl;
    cout << "Проверка: sin(" << x << ") = " << sin(x) << endl;
    return 0;
}