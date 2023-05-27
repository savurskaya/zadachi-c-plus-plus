//W26, 3 урок

#include <iostream>

using namespace std;

int main() {
  
  int n, prev = 0, curr = 1, next = 1;

  cout << "Введите число N (N > 1): ";
  cin >> n;

  while (next < n) {
    prev = curr;
    curr = next;
    next = prev + curr;
  }

  cout << "FK-1 = " << prev << endl;
  cout << "FK+1 = " << next << endl;

  return 0;
}