//самостоятельная продвинутая 5, №18
#include <iostream>
#include <cmath>

using namespace std;

double f(double x, double coeffs[], int n) {
    double res = 0.0;
    for (int i = 0; i <= n; i++) {
        res += coeffs[i] * pow(x, i);
    }
    return res;
}

double root(double a, double b, double coeffs[], int n, double eps) {
    double c;
    while (fabs(b - a) > eps && f(a, coeffs, n) * f(b, coeffs, n) <= 0) {
        c = a - (f(a, coeffs, n) * (b - a)) / (f(b, coeffs, n) - f(a, coeffs, n));
        if (f(c, coeffs, n) * f(a, coeffs, n) < 0) {
            b = c;
        } else {
            a = c;
        }
    }
    return c;
}

int main() {
    int n;
    double a, b, eps;
    cout << "Enter the number of coefficients: ";
    cin >> n;
    double coeffs[n+1];
    for (int i = 0; i <= n; i++) {
        cout << "Enter coefficient a" << i << ": ";
        cin >> coeffs[i];
    }
    cout << "Enter the interval [a, b]:\n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "Enter the error tolerance (eps): ";
    cin >> eps;
    cout << "The root of the equation f(x) = 0 is: " << root(a, b, coeffs, n, eps) << endl;
    return 0;
}