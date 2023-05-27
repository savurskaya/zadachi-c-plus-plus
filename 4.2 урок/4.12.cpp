//Самостоятельная базовая 4, 4.12 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 5, m = 10;
    int A[n][m];
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    int minElem = abs(A[0][0]);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (abs(A[i][j]) < minElem) {
                minElem = abs(A[i][j]);
            }
        }
    }

    double B[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            B[i][j] = A[i][j] / static_cast<double>(minElem);
        }
    }

    cout << "Новая матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
