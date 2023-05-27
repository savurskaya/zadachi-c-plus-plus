//самостоятельная базовая 3, №W3
#include <iostream>
using namespace std;

int main() {
    int N, K;
    cout << "Введите целое положительное число N: ";
    cin >> N;
    cout << "Введите целое положительное число K: ";
    cin >> K; 
    int quotient = 0, remainder = N;
    while (remainder >= K) { 
        remainder -= K;
        quotient++; 
        }
    cout << "Частное от деления " << N << " на " << K << " равно " << quotient << endl; 
    cout << "Остаток от деления " << N << " на " << K << " равен " << remainder << endl; 
    return 0;
}