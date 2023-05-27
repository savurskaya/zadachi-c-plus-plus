//Самостоятельная базовая 3, F33

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите целое число N (> 1): ";
    cin >> n;

    int fib1 = 1, fib2 = 1, fib3;
    cout << "Последовательность чисел Фибоначчи: ";
    cout << fib1 << " " << fib2 << " ";

    for (int i = 3; i <= n; i++) {
        fib3 = fib1 + fib2;
        cout << fib3 << " ";
        fib1 = fib2;
        fib2 = fib3;
    }

    return 0;
}
