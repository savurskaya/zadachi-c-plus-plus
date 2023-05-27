// Самостоятельная базовый 3, W5

#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Введите число N: ";
   cin >> n;
   
   int k = 0; 
   while (n > 1) { 
      n /= 2; 
      k++; 
   }
   
   cout << "Показатель степени: " << k << endl;
   
   return 0;
}
