//сам работа 3 базовый(5.56в)


#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Введите количество чисел n: ";
    cin >> n;
    int a[n];
    cout << "Введите " << n << " чисел: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Суммы соседних чисел:\n";
    for (int i = 0; i < n-1; i++) {
        cout << a[i] + a[i+1] << " ";
    }
    return 0;
}

