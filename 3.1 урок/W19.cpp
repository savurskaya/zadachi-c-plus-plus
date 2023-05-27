// самостоятельная работа номер 3 базовый номер w19


cpp
#include <iostream>
using namespace std;

int main() {
    int N, reversed = 0;
    cout << "Введите целое число N: ";
    cin >> N;
    while (N > 0) {
        reversed = reversed * 10 + N % 10;
        N /= 10;
    }
    cout << "Число, полученное при прочтении числа N справа налево: " << reversed << endl;
    return 0;
}