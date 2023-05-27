// Самостоятельная базовый 3, 6.16

#include <iostream>
using namespace std;

int main() {
   double n;
   cout << "Введите число n: ";
   cin >> n;
   
   int i = 1; 
   double sum = 1.0; 
   
   while (sum <= n) { 
      i++; 
      sum += 1.0 / i; 
   }
   
   cout << "Первое число, большее " << n << ": " << sum << endl;
   
   return 0;
}
