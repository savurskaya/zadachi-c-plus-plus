//Сам. раб. 3 прод. №11


#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A;
    cout << "Введите число A (>1): ";
    cin >> A;

    int K = 1;
    double sum = 1.0; 
    while (sum <= A) {
        K++;
        sum += 1.0 / K;
    }

    cout << "Наименьшее число K: " << K << endl;
    cout << "Сумма 1 + 1/2 + ... + 1/K: " << sum << endl;

    return 0;
}
