//самостоятельная базовая 4, №3.24
#include <iostream>
using namespace std;

int main() {
    const int n = 3, v = 5;
    int arr[n][v];
    cout << "Введите элементы массива " << n << "x" << v << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < v; j++) {
            cin >> arr[i][j];
        }
    }
    int sum = 0; 
    for (int j = 0; j < v; j++) {
        sum += arr[1][j];
    }
    cout << "Сумма элементов второй строки массива равна " << sum << endl;
    return 0;
}