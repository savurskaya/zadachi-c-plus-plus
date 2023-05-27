//сам раб 3 баз 6.17

#include <iostream>
using namespace std;

int main() {
    double a;
    cout << "Введите вещественное число a: ";
    cin >> a;
    
    int n = 1;
    double sum = 0;
    
    while (sum <= a) {
        sum += 1.0/n;
        n++;
    }
    
    for (int i = 1; i < n; i++) {
        cout << i << " ";
    }
    
    return 0;
}
