//Самостоятельная базовая 4, 4.14

#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    int B[n][n];
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    int product = 1;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            product *= B[i][j];
        }
    }

    cout << "Произведение элементов, расположенных ниже левой диагонали: " << product << endl;

    return 0;
}
