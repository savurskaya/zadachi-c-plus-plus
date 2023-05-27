//Самостоятельная базовая 3, F36

#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Введите целые числа N и K: ";
    cin >> n >> k;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = 1;
        for (int j = 1; j <= k; j++) {
            term *= i;
        }
        sum += term;
    }

    cout << "Сумма: " << sum << endl;

    return 0;
}

