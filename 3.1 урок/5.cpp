// самостоятельная работа номер 3 продвинутый номер 5


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    const int N = 10; 
    cout << "Введите значение x (-1 < x < 1): ";
    cin >> x;
    double sum = 0.0;
    double term = x;
    for (int n = 1; n <= N; n++) {
        sum += term;
        term *= -x * n / (n + 1);
    }
    cout << "ln(1 + " << x << ") = " << sum << endl;
    return 0;
}