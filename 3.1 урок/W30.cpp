// Самостоятельная базовый 3, W30

#include <iostream>
using namespace std;

int main() {
   int a, b, c;
   cout << "Введите числа A, B, C: ";
   cin >> a >> b >> c;
   
   int count = 0; 
   while (a >= c && b >= c) { 
      a -= c; 
      b -= c;
      count++; 
   }
   
   cout << "Количество квадратов: " << count << endl;
   
   return 0;
}
