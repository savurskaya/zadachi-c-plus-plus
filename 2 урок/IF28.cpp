// Самостоятельная 2, If28

#include <iostream>

using namespace std;

int main() {
   int year;
   cout << "Введите номер года: ";
   cin >> year;
   
   int days;
   if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
      days = 366;
   } else {
      days = 365;
   }
   
   cout << "Количество дней в году " << year << " равно " << days << endl;
   
   return 0;
}
