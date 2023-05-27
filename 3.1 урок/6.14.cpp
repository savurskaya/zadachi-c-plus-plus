// Самостоятельная базовый 3, 6.14

#include <iostream>
using namespace std;

int main() {
   double a;
   cout << "Введите число a (1 < a <= 1.5): ";
   cin >> a;
   
   int n = 2;
   double sum = 0.0; 
   
   while (sum < a) { 
      sum = 1.0; 
      for (int i = 2; i <= n; i++) { 
         sum += 1.0 / i; 
      }
      n++; 
   }
   
   cout << "Наименьшее n: " << n-1 << endl; 
   return 0;
}

