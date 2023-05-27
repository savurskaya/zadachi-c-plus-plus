//самостоятельная базовая 3, №W7


#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Введите целое число N: ";
  cin >> n;

  int k = 1;
  while (k * k <= n) {
    k++;
  }

  cout << "Наименьшее целое положительное число K, квадрат которого превосходит N: " << k << endl;

  return 0;
}