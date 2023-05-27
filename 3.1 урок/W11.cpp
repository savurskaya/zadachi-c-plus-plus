//сам.р. 3 Баз W11

#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Введите целое число N (>1): ";
    cin >> N;
    
    int sum = 0;
    int K = 1;
    while (sum < N) {
        sum += K; 
        K++; 
    }
    
    cout << "Наименьшее целое число К: " << K-1 << endl;
    cout << "Сумма чисел от 1 до К: " << sum << endl;
    
    return 0;
}