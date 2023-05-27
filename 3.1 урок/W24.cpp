//Самостоятельная базовая 3, W24

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите целое число N (> 1): ";
    cin >> n;

    int a = 1, b = 1, c;
    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }

    if (b == n) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}