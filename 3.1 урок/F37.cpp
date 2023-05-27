//Самостоятельная базовая 3, F37

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите целое число N (> 0): ";
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        double term = 1;
        for (int j = 1; j <= i; j++) {
            term *= i;
        }
        sum += term;
    }

    cout << "Сумма: " << sum << endl;

    return 0;
}
