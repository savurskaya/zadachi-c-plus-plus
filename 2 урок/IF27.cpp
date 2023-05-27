// Самостоятельная 2, If27

#include <iostream>

using namespace std;

int main() {
   double x;
   cout << "Введите значение переменной x: ";
   cin >> x;
   
   int f;
   if (x < 0) {
      f = 0;
   } else if ((int)x % 2 == 0) {
      f = 1;
   } else {
      f = -1;
   }
   
   cout << "Значение функции f(x) = " << f << endl;
   
   return 0;
}
