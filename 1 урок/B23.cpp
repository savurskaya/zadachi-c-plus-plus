// Самостоятельная базовый 1, B23

#include <iostream>

using namespace std;

int main() {
   int a, b, c;
   cout << "Введите значения переменных A, B, C: ";
   cin >> a >> b >> c;
   
   
   int temp = a;
   a = b;
   b = c;
   c = temp;
   
   cout << "Новые значения переменных: " << endl;
   cout << "A = " << a << endl;
   cout << "B = " << b << endl;
   cout << "C = " << c << endl;
   
   return 0;
}