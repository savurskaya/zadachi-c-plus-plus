// Самостоятельная 2, If29

#include <iostream>

using namespace std;

int main() {
   int num;
   cout << "Введите целое число: ";
   cin >> num;
   
   if (num == 0) {
      cout << "Нулевое число" << endl;
   } else if (num > 0 && num % 2 == 0) {
      cout << "Положительное четное число" << endl;
   } else if (num > 0 && num % 2 != 0) {
      cout << "Положительное нечетное число" << endl;
   } else if (num < 0 && num % 2 == 0) {
      cout << "Отрицательное четное число" << endl;
   } else {
      cout << "Отрицательное нечетное число" << endl;
   }
   
   return 0;
}
