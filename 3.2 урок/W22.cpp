// сам.раб. 3 баз W22

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    bool isPrime = true; // флаг, который будет использоваться для проверки простоты числа
    cout << "Введите целое число больше 1: ";
    cin >> N;

    if (N <= 1) { // если число меньше или равно 1, оно не является простым
        isPrime = false;
    } else {
        for (int i = 2; i <= sqrt(N); i++) { // проверяем делители от 2 до корня из N
            if (N % i == 0) { // если нашелся делитель, то число не является простым
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;
}
