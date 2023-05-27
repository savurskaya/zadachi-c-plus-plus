//Самостоятельная базовая 4, 4.13

#include <iostream>
#include <algorithm>
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

    int minElem = A[0][0];
    int minRow = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] < minElem) {
                minElem = A[i][j];
                minRow = i;
            }
        }
    }

    int B[n+1][m];
    for (int i = 0; i <= minRow; i++) {
        for (int j = 0; j < m; j++) {
            B[i][j] = A[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        B[minRow+1][j] = A[0][j];
    }
    for (int i = minRow+1; i < n; i++) {
        for (int j = 0; j < m; j++) {
            B[i+1][j] = A[i][j];
        }
    }

    cout << "Новая матрица:" << endl;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < m; j++) {
            cout << B[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

