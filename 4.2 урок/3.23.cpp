//самостоятельная базовая 4, №3.23
#include <iostream>
using namespace std;

int main() {
    const int n = 4, m = 5;
    int a[n][m]; 
    cout << "Введите элементы матрицы " << n << "x" << m << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += a[i][j]; 
            }
    }
    double average = static_cast<double>(sum) / (n * m);
    int count = 0; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] > average) {   
count++;
            }
        }
    }
    cout << "Количество элементов матрицы, превосходящих среднее арифметическое, равно " << count << endl;
    return 0;
}