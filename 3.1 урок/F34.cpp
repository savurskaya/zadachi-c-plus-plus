//Самостоятельная базовая 3, F34

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите целое число N (> 1): ";
    cin >> n;

    double a1 = 1, a2 = 2, a3;
    cout << "Последовательность чисел Ак: ";
    cout << a1 << " " << a2 << " ";

    for (int i = 3; i <= n; i++) {
        a3 = a1 + 2.0 / (4 * a2 - 3);
        cout << a3 << " ";
        a1 = a2;
        a2 = a3;
    }

    return 0;
}
