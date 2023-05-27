// сам.раб. 3 прод 2 

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const int n = 10; 
    double x, result = 1.0;
    cout << "Введите аргумент: ";
    cin >> x;

    for (int i = 1; i <= n; i++) {
        double term = pow(x, i) / tgamma(i+1); 
        result += term; 
    }

    cout << "e^" << x << " = " << result;
    return 0;
}