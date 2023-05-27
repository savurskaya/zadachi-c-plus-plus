//самостоятельная базовая 3, №W28
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double E;
    cout << "Введите вещественное число E: ";
    cin >> E;
    double a1 = 2.0, a2 = 2.0 + 1.0/a1;
    int k = 2;
    while (abs(a2 - a1) >= E) { 
        k++; 
        a1 = a2; 
        a2 = 2.0 + 1.0/a1;
        }
    cout << "Первый номер K, для которого выполняется условие |Ak - Ak-1| < E, равен " << k << endl; 
    cout << "Значение Ak-1 равно " << a1 << endl; 
    cout << "Значение Ak равно " << a2 << endl; 
    return 0;
}