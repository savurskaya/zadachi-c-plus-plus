//Самостоятельная базовая 3, F39

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введите целые числа A и B (A < B): ";
    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
