//сам работа 3 базовый(w12)


#include <iostream>
using namespace std;

int main() {
    int N, sum = 0, k = 0;
    cout << "Enter an integer N (>1):";
    cin >> N;

    while (sum <= N) {
        k++;
        sum += k;
    }
    cout << "The largest integer K: " << k-1 << endl;
    cout << "The sum of the numbers from 1 to K: " << sum-k << endl;
    return 0;
}
