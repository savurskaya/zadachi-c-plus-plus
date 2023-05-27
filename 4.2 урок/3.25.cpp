//самостоятельная базовая 4, №3.25
#include <iostream>
using namespace std;

int main() {
    const int n = 4, m = 4;
    int a[n][m];
    cout << "Введите элементы матрицы " << n << "x" << m << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i][1] < 0) { 
            count++; 
        }
    }
    cout << "Количество отрицательных элементов во втором столбце матрицы равно " << count << endl; 
    return 0;
}