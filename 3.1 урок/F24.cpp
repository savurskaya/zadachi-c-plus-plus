//F24, 3 урок

#include <iostream>
using namespace std;

int main() {
    double x;
    int n;
    cout << "Enter X: ";
    cin >> x;
    cout << "Enter N: ";
    cin >> n;
    
    double result = 1.0;
    double term = 1.0;
    for (int i = 1; i <= n; i++) {
        term *= -x * x / (2.0 * i * (2.0 * i - 1.0));
        result += term;
    }
    
    cout << "cos(" << x << ") = " << result << endl;

    return 0;
}