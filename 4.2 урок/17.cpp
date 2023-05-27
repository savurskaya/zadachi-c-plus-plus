//самостоятельная прод 4, №17

#include <iostream>
#include <cmath>
using namespace std;

double f(double x, double* a, int n) {
    double result = 0;
    for (int i = 0; i < n; i++) {
        result += a[i] * pow(x, i+1);
    }
    return result;
}

double df(double x, double* a, int n) {
    double result = 0;
    for (int i = 0; i < n-1; i++) {
        result += (i+1) * a[i] * pow(x, i);
    }
    return result;
}

int main() {
    int n;
    cout << "Введите степень полинома: ";
    cin >> n;
    double a[n];
    cout << "Введите коэффициенты полинома: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    double x0;
    cout << "Введите начальную точку: ";
    cin >> x0;
    double eps;
    cout << "Введите точность: ";
    cin >> eps;
    double x = x0;
    double delta;
    do {
        delta = f(x, a, n) / df(x, a, n);
        x -= delta;
    } while (abs(delta) > eps);
    cout << "Корень уравнения: " << x << endl;
    return 0;
}
