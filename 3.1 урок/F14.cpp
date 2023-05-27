//самостоятельная базовая 3, №F14
#include <iostream>
using namespace std;

int main() {
    int N; 
    cout << "Введите целое число N: ";
    cin >> N; 
    int sum = 0; 
    for (int i = 1; i <= 2*N-1; i += 2) {
        sum += i; 
        cout << "Текущее значение суммы: " << sum << endl; 
        }
    cout << "Квадрат числа " << N << " равен " << sum << endl;
    return 0;
}