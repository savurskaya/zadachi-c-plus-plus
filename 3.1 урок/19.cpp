// Самостоятельная продвинутый 3, задача 19

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main() {
   double a;
   cout << "Введите параметр a: ";
   cin >> a;
   
   srand(time(NULL)); 
   
   const int N = 1000000; 
   int count = 0; 
   
   for (int i = 0; i < N; i++) {
      double x = (double)rand() / RAND_MAX * a; 
      double y = (double)rand() / RAND_MAX * a; 
      if (x * y <= a * a && x + y <= 2.5 * a) { 
         count++;
      }
   }
   
   double S = (double)count / N * a * a; 
   double S_exact = (15.0/8 - 2*log(2)) * a * a; 
   
   cout << "Площадь, вычисленная методом Монте-Карло: " << S << endl;
   cout << "Точное значение площади: " << S_exact << endl;
   
   return 0;
}