//сам раб 3 баз 5.49
#include <iostream>
using namespace std;

int main()
 {
    int n;
    cout << "Введите количество чисел: ";
    cin >> n;

    double a[n];
    double sum = 0;

    for (int i = 0; i < n; i++) {
        cout << "Введите число " << i+1 << ": ";
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        sum += a[i]*a[i];
    }

    cout << "Сумма квадратов вещественных чисел: " << sum << endl;

    return 0;
}
