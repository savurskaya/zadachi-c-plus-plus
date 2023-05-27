//Самостоятельная базовая 3, F35

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите целое число N (> 2): ";
    cin >> n;

    int a1 = 1, a2 = 2, a3 = 3;
    cout << "Последовательность чисел Ак: ";
    cout << a1 << " " << a2 << " " << a3 << " ";

    for (int i = 4; i <= n; i++) {
        int a = a3 + 2 * (a2 - a1);
        cout << a << " ";
        a1 = a2;
        a2 = a3;
        a3 = a;
    }

    return 0;
}
