// Самостоятельная базовый 3, 6.13

#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "Введите значение a между 1 и 1.5: ";
    cin >> a;

    int n = 2; 
    bool all_greater_or_equal = true; 

    while (all_greater_or_equal) {
        double sum = 1; 
        for (int i = 2; i <= n; i++) {
            sum += 1.0 / i; 
        }
        if (sum < a) { 
            all_greater_or_equal = false; 
        } else {
            cout << "n = " << n << endl; 
            n++; 
        }
    }

    return 0;
}