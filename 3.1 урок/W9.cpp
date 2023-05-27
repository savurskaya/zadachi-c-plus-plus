// 3 урок баз. W9 
#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int N, K = 1; 
    cout << "Введите целое число N (> 1): ";
    cin >> N;
    while (pow(3, K) <= N) { 
        K++; 
    }
    cout << "Наименьшее целое число K, при котором 3^K > N: " << K << endl;
    return 0;
}