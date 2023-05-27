// Самостоятельная базовый 3, 6.15

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
      cout << "1 "; 
      for (int i = 2; i <= n; i++) { 
         sum += 1.0 / i; 
         if (sum < a) { 
            cout << "1/" << i << " ";
         }
      }
      n++; 
   }
   
   return 0;
}