//самостоятельная базовая 5, №189
#include <iostream>
#include <cmath>

using namespace std;

double power(double a, double b) {
    return pow(a, b);
}

int main() {
    double a, b;
    cout << "Enter the base (a): ";
    cin >> a;
    cout << "Enter the exponent (b): ";
    cin >> b;
    cout << a << "^" << b << " = " << power(a, b) << endl;
    return 0;
}