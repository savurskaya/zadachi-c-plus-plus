//Самостоятельная базовая 4, 4.11

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Введите количество строк матрицы N: ";
    cin >> n;
    cout << "Введите количество столбцов матрицы M: ";
    cin >> m;

    int A[n][m];
    cout << "Введите элементы матрицы:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    int x, count = 0;
    cout << "Введите число для поиска: ";
    cin >> x;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == x) {
                count++;
            }
        }
    }

    if (count > 0) {
        cout << "Число " << x << " найдено " << count << " раз" << endl;
    } else {
        cout << "Число " << x << " не найдено" << endl;
    }

    return 0;
}

