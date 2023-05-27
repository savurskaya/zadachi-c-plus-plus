//F22, 3 урок

#include <iostream>
using namespace std;

int main() {
  double x, sum = 1, factorial = 1; 
  int n;

  cout << "Введите число X: ";
  cin >> x;

  cout << "Введите целое число N (> 0): ";
  cin >> n;

  for(int i = 1; i <= n; i++) {
    factorial *= i; 
    double term = 1;
    for(int j = 1; j <= i; j++) {
      term *= x;
    }
    
    term /= factorial; 
    sum += term; 
  }

  cout << "exp(" << x << ") = " << sum << endl;

  return 0;
}