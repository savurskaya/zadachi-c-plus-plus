//самостоятельная базовая 4, №3.26
#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Введите количество строк матрицы: ";
    cin >> rows;
    cout << "Введите количество столбцов матрицы: ";
    cin >> cols;
    int a[rows][cols]; 
    cout << "Введите элементы матрицы " << rows << "x" << cols << ":" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> a[i][j]; 
        }
    }
    int count[cols] = {0};
    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            if (a[i][j] == 7) {
                count[j]++; 
            }
        }
    }
    for (int j = 0; j < cols; j++) {
        cout << "Количество элементов в " << j+1 << "-м столбце матрицы, равных 7, равно " << count[j] << endl; 
    }
    return 0;
}