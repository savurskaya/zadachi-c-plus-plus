//самостоятельная базовая 5 №16


#include <iostream>
#include <cmath>
using namespace std;

double f(double x, double* a, int n) {
    double result = 0;
    for (int k = 0; k <= n; k++) {
        result += a[k] * pow(x, k);
    }
    return result;
}

double f_prime(double x, double* a, int n) {
    double result = 0;
    for (int k = 1; k <= n; k++) {
        result += k * a[k] * pow(x, k-1);
    }
    return result;
}

double newton_method(double* a, int n, double x0, double eps) {
    double x = x0;
    double delta = f(x, a, n) / f_prime(x, a, n);
    while (abs(delta) > eps) {
        x -= delta;
        delta = f(x, a, n) / f_prime(x, a, n);
    }
    return x;
}

int main() {
    int n;
    cout << "Enter the degree of the polynomial: ";
    cin >> n;
    double* a = new double[n+1];
    cout << "Enter the coefficients of the polynomial: ";
    for (int k = 0; k <= n; k++) {
        cin >> a[k];
    }
    double x0, eps;
    cout << "Enter the initial guess: ";
    cin >> x0;
    cout << "Enter the desired accuracy: ";
    cin >> eps;
    double root = newton_method(a, n, x0, eps);
    cout << "The root of the polynomial is: " << root << endl;
    delete[] a;
    return 0;
}
